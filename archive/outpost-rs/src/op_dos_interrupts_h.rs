//
// Created by cyrex on 2/18/2023.
//

#ifndef OUTPOST_1_SRC_OP_DOS_INTERRUPTS_H_
#define OUTPOST_1_SRC_OP_DOS_INTERRUPTS_H_


// AH = 1A
// DS:DX = pointer to disk transfer address (DTA)
// returns nothing
// - specifies the disk transfer address to DOS
// - DTA cannot overlap 64K fld2_segment boundary
// - offset 80h in the PSP is a 128 byte default DTA supplied
//   by DOS upon program load
// - use of the DTA provided by DOS will result in the loss
//   of the program command tail which also occupies the 128
//   bytes starting at offset 80h of the PSP
// - see	INT 21,2F
typedef void(*DosInt21SetDiskTransferAddress(void* disk_transfer_address));


// INT21,21 Random Read using FCB
// AH = 21h
//	DS:DX = pointer to an opened FCB
//
//
//	on return:
//	AL = 00 if read successful
//	   = 01 if EOF (no data read)
//	   = 02 if DTA is too small
//	   = 03 if EOF (partial record read)
//
//
//	- reads random records from a file opened with an FCB
//	  to the DTA
//	- FCB must be setup with drive id, filename, extension,
//	  record position and record length before call
//	- current record position field in FCB is not updated


// Get Date
// AH = 2A
//
//
//  on return:
//    AL = day of the week (0=Sunday)
//      CX = year (1980-2099)
//      DH = month (1-12)
//      DL = day (1-31)
//
//
//    - retrieves system date based on the DOS maintained clock
//    - updates BIOS Data Area current date and date rollover flag
//        at location 40:70
typedef void (*DosInt21GetDate);

// Get Time
//
// AH = 2C
//
//
//  on return:
//    CH = hour (0-23)
//      CL = minutes (0-59)
//      DH = seconds (0-59)
//      DL = hundredths (0-99)
//
//
//    - retrieves DOS maintained clock time
typedef void (*DosInt21GetTime)();

// AH = 2F
// on return:
// ES:BX = pointer to current DTA
// - returns the DTA address
// - the default DTA is a 128 byte block at address 80h in the
//   Program Segment Prefix (PSP).  This area also contains the
//   command tail at program startup it must be saved or the DTA
//   must be relocated before use to preserve the command tail
// - see	INT 21,1A
typedef void (**DosInt21GetDiskTransferAddress)();


//  Set Interrupt Vector
// 	AH = 25h
//	AL = interrupt number
//	DS:DX = pointer to interrupt handler
//
//
//	returns nothing
//
//
//	- provides a safe method for changing interrupt vectors
//
//
//	- see	INT 21,35
static int DOS_INT_21_25H = 0x25;

typedef void (*DosInt21SetInterruptVector)();

//
// AH = 30h
//
//
// on return:
// AL = major version number (2-5)
// AH = minor version number (in hundredths decimal)
// BH = FF  indicates MS-DOS, only if OEM vendor chooses to identify
//   = 00  indicates PC-DOS
// BL:CX = 24 bit OEM serial number if BH is FF
//
//
//- for an example DOS version 2.1 returns AL=2 and AH=10
//- DOS versions prior to DOS 2.0 return zero in AH and AL
//- DOS version 4.0 and 4.1 usually return the same value of 4.00
//- the OEM serial number is a rarity, though some older OEM DOS
//  versions implemented this feature
//- the OS/2 compatibility box returns 10.10 for OS/2 1.1, 10.20
//  for OS/2 1.2, etc...
//- when testing for version, a specific test can often cause your
//  code to not work in following versions of DOS.  It is often better
//  to test for a version number greater or equal to the minimum rather
//  than a specific version number where possible
//- see DOS Versions
static int DOS_INT_21_30H = 0x30;

// 	AH = 35h
//	AL = interrupt vector number
//
//
//	on return:
//	ES:BX = pointer to interrupt handler
//
//
//	- standard method for retrieving interrupt vectors
//
//
//	- see	INT 21,25
static int DOS_INT_21_35H = 0x35;

// AH = 45h
//	BX = file handle
//
//
//	on return:
//	AX = new file handle if CF not set
//	   = error code if CF set  (see DOS ERROR CODES)
//
//
//	- gets another file handle for the same file
//	- both file handles move in unison
//	- often used to flush file data and update a file directory
//	  entry without closing the initial file
static int DOS_INT_21_45H = 0x45;

// AH = 4C
//	AL = return code (for batch files)
//
//
//	returns nothing
//
//
//	- approved method of program termination
//	- restores the terminate, Ctrl-Break, and critical error exit
//	  addresses, flushes all buffers, frees memory and returns to
//	  DOS via the termination handler address
//	- does not close FCBs
//	- this function is not supported in versions of DOS before 2.x,
//	  so use INT 21,0  or	 INT 20  to exit.
//
//
//	- see also  INT 27   INT 21,31
typedef void (*DosInt21TerminateProcWithRetCode);


typedef void (*DosInt21DuplicateFileHandle)();

typedef void (*DosInt21GetInterruptVector)(void*);

// AH = 4E
//	CX = attribute used during search  (see FILE ATTRIBUTES)
//	DS:DX = pointer to ASCIIZ filespec, including wildcards
//
//
//	on return:
//	AX = error code if CF set  (see DOS ERROR CODE)
//	DTA = data returned from call in the format:
//
//	Offset Size	 Description
//
//	  00   byte    attribute of search (undocumented)
//	       byte    drive letter used in search (DOS 3.1-4.x, undocumented)
//	  01   byte    drive letter used in search (undocumented)
//	     11bytes   search name used (DOS 3.1-4.x, undocumented)
//	  02 11bytes   search name used (undocumented)
//	  0C   byte    attribute of search (DOS 3.1-4.x, undocumented)
//	  0D   word    directory entry number (0 based, undocumented)
//	  0F   word    starting cluster number of current directory; zero
//		       for root directory  (DOS 3.2+, undocumented)
//	       dword   pointer to DTA (DOS 2.x-3.1, undocumented)
//	  11   word    reserved
//	  13   word    starting cluster number of current directory; zero
//		       for root directory  (DOS 2.x+, undocumented)
//	  15   byte    attribute of matching file
//	  16   word    file time  (see FILE ATTRIBUTES)
//	  18   word    file date  (see FILE ATTRIBUTES)
//	  1A   word    file size
//	  1E 13bytes   ASCIIZ filename and extension in the form NAME.EXT
//		       with blanks stripped
//
//	- returns information on first file matching specifications
//	- use INT 21,4F to retrieve following file matches
//	- DOS 2.x cannot find . and .. entries, while DOS 3.x can unless
//	  they represent the root directory
//	- character devices return a zero for size, time and date in DOS 2.x,
//	  while DOS 3.0 returns a 40h attribute and current time and date.
//	- multiple calls to this function with a character device will
//	  result in unpredictable results
//	- normal files are always included along with files that match the
//	  requested attributes except when the LABEL attribute is requested.
//	  DOS 2.x returns all normal files when label is specified but 3.x
//	  doesn't.  It's up to the programmer to determine which actually
//	  match the requested attributes.
//	- bit 8 of CX (file attributes) indicates Novell Netware shareable
//	- see	INT 21,1A
typedef u16(*DosInt21FindFirstMatchingFile)(file_attributes: u16, char* filespec, void** disk_transfer_address);

// AH = 39h
//	DS:DX = pointer to ASCIIZ path name
//
//
//	on return:
//	CF = 0 if successful
//	   = 1 if error
//	AX = error code  (see DOS ERROR CODES)
//
//
//	- creates specified subdirectory
//	- returns error if directory already exists, element of the path
//	  is not found, directory full or write protected disk
typedef u8(*DosInt21CreateSubdirectory)(char* path);

//
//AH = 3A
//  DS:DX = pointer to ASCIIZ path name
//
//
//         on return:
//    CF = 0 if successful
//    = 1 if error
//            AX = error code  (see DOS ERROR CODES)
//
//
//    - allows deletion of a subdirectory as long as it exists, is empty
//    and not the current directory
typedef u8(*DosInt21RemoveSubdirectory(char* path));

// AH = 19h
// on return:
// AL = current default drive (0=A,1=B,etc)


// - determines the current default drive
typedef u8(*DosInt21GetDefaultDrive)();

// AH = 41h
//	DS:DX = pointer to an ASCIIZ filename
//
//
//	on return:
//	AX = error code if CF set  (see DOS ERROR CODES)
//
//
//	- marks first byte of file directory entry with E5 to indicate
//	  the file has been deleted.  The rest of the directory entry
//	  stays intact until reused.   FAT pointers are returned to DOS
//	- documented as not accepting wildcards in filename but actually
//	  does in several DOS versions
typedef u16(*DosInt21DeleteFile)(char* filename);

// 	AH = 68h
// BX = file handle
// on return
// AX = error code if CF set  (see DOS ERROR CODES)
// - flushes DOS buffers to disk, does not update directory entry
typedef u16(*DosInt21FlushBufferUsingHandle)(file_handle: u16);

// Close File Using Handle
// AH = 3E
//	BX = file handle to close
//
//
//	on return:
//	AX = error code if CF set  (see DOS ERROR CODES)
//
//
//	- if file is opened for update, file time and date stamp
//	  as well as file size are updated in the directory
//	- handle is freed
typedef u16(*DosInt21ClosFileUsingHandle)(file_handle: u16);

// AH = 16h
//	DS:DX = pointer to an unopened FCB
//
//
//	on return:
//	AL = 00 if file created
//	   = FF if file creation failed
//
//
//	- creates file using FCB and leaves open for later output
//	- FCB must be setup with drive id, filename, and extension
//	  before call
//	- an extended FCB can be used to also set file attributes
typedef u8(*DosInt21CreateFileWithFcb)(void* FcbPointer);

// AH = 09
//	DS:DX = pointer to string ending in "$"
//
//
//	returns nothing
//
//
//	- outputs character string to STDOUT up to "$"
//	- backspace is treated as non-destructive
//	- if Ctrl-Break is detected, INT 23 is executed
typedef void(*DosInt21PrintString)(char* StringPointer);

// AH = 3D
// AL = open access mode
//      00  read only
//      01  write only
//      02  read/write
// DS:DX = pointer to an ASCIIZ file name

// on return:
// AX = file handle if CF not set
//    = error code if CF set  (see DOS ERROR CODES)


// Access modes in AL:

// |7|6|5|4|3|2|1|0|  AL
//  | | | | | `-------- read/write/update access mode
//  | | | | `--------- reserved, always 0
//  | `-------------- sharing mode (see below) (DOS 3.1+)
//  `--------------- 1 = private, 0 = inheritable (DOS 3.1+)


// Sharing mode bits (DOS 3.1+):	       Access mode bits:
// 654				       210
// 000  compatibility mode (exclusive)    000  read access
// 001  deny others read/write access     001  write access
// 010  deny others write access	       010  read/write access
// 011  deny others read access
// 100  full access permitted to all


// - will open normal, hidden and system files
// - file pointer is placed at beginning of file
typedef u16(*DosInt21OpenFileUsingHandle2)(mode: u8, char* filename);

// int21,3c - create file using handle
// AH = 3C
//	CX = file attribute  (see FILE ATTRIBUTES)
//	DS:DX = pointer to ASCIIZ path name
//
//
//	on return:
//	CF = 0 if successful
//	   = 1 if error
//	AX = files handle if successful
//	   = error code if failure  (see DOS ERROR CODES)
//
//
//	- if file already exists, it is truncated to zero bytes on opening
typedef u16(*DosInt21CreateFileWithHandle)(file_attrib: u16, char* path_name);



#endif // OUTPOST_1_SRC_OP_DOS_INTERRUPTS_H_
