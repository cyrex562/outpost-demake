// #include "op_int.h"
// #include "op_windef.h"

// #pragma once
#pragma clang diagnostic push
#pragma ide diagnostic   ignored "OCInconsistentNamingInspection"

typedef struct Globals {
    let mut data_1050_5fc9: u16;
    let mut data_1050_5f82: u16;
    let mut data_1050_5f87: u16;
    let mut data_1050_1050: u16;
    let mut hinst_1050_038c: u16;
    let mut ptr_1050_038e: *mut u8;
    let mut ptr_1050_0390: u16;
    let mut ptr_1050_0392: u32;
    let mut ptr_1050_5768: u16;
    let mut ptr_1050_576a: u16;
    let mut data_1050_5f48: u16;
    let mut data_1050_5f4a: *mut u8;
    let mut data_1050_5f4e: u16;
    let mut data_1050_5f50: u16;
    let mut data_1050_5f52: u16;
    let mut ptr_1050_5f7e: u16;
    let mut data_1050_5f80: u16;
    let mut data_1050_5f84: u16;
    let mut ptr_1050_6210: u16;
    let mut u32_ptr_1050_029c: u32;
    let mut u32_ptr_1050_03a0: u32;
    let mut u32_ptr_1050_4fb8: u32;
    let mut u32_ptr_1050_5744: u32;
    let mut u32_ptr_1050_68a2: u32;
    let mut u16_1050_63fe: u16;
    let mut ptr_1050_1040: u16;
    let mut ptr_1050_5b7c: u32;
    let mut PTR_LOOP_1050_1038: u32;
    let mut PTR_LOOP_1050_5f10: u32;
    let mut u16_1050_0ed0: u16;
    let mut _PTR_LOOP_1050_65e2: u32;
    let mut dat_1050_4514: i32
    let mut dat_1050_451a: i32
    let mut ptr_1050_4520: *mut c_void;
    let mut seg_addr_1050_4522: u16;
    let mut ptr_1050_4526: *mut c_void;
    let mut seg_addr_1050_4528: u16;
    let mut ptr_1050_4524: *mut c_void;
    let mut ptr_1050_452a: *mut c_void;
    let mut PTR_LOOP_1050_4434: u16;
    let mut ptr_1050_452c: *mut c_void;
    let mut seg_addr_1050_452e: u16;
    let mut ptr_1050_4530: *mut c_void;
    let mut ptr_1050_4532: *mut c_void;
    let mut seg_addr_1050_4534: u16;
    let mut ptr_1050_4536: *mut c_void;
    let mut _PTR_LOOP_1050_4538: i32
    let mut _PTR_LOOP_1050_453e: i32
    let mut ptr_1050_4544: *mut c_void;
    let mut seg_addr_1050_4546: u16;
    let mut ptr_1050_454a: *mut c_void;
    let mut seg_addr_1050_454c: u16;
    let mut ptr_1050_4548: *mut c_void;
    let mut PTR_LOOP_1050_443a: u16;
    let mut ptr_1050_454e: *mut c_void;
    let mut ptr_1050_4550: *mut c_void;
    let mut seg_addr_1050_4552: u16;
    let mut ptr_1050_4554: *mut c_void;
    let mut ptr_1050_4512: *mut c_void;
    let mut DAT_1050_4462: u16;
    let mut ptr_1050_455a: *mut c_void;
    let mut ptr_1050_4556: *mut c_void;
    let mut seg_addr_1050_4558: u16;
    let mut ptr_1050_455c: *mut c_void;
    let mut ptr_1050_455e: u16;
    let mut ptr_1050_4560: *mut c_void;
    let mut ptr_1050_4562: *mut c_void;
    let mut seg_addr_1050_4564: u16;
    let mut ptr_1050_4566: *mut c_void;
    let mut dat_1050_456a: i32
    let mut dat_1050_4568: i32
    let mut PTR_LOOP_1050_456e: *mut c_void;
    let mut PTR_LOOP_1050_4570: u16;
    let mut PTR_LOOP_1050_4574: *mut c_void;
    let mut PTR_LOOP_1050_4576: u16;
    let mut PTR_LOOP_1050_4572: *mut c_void;
    let mut DAT_1050_4446: u16;
    let mut PTR_LOOP_1050_4578: *mut c_void;
    let mut PTR_LOOP_1050_457a: *mut c_void;
    let mut PTR_LOOP_1050_457c: u16;
    let mut PTR_LOOP_1050_457e: *mut c_void;
    let mut PTR_LOOP_1050_4580: *mut c_void;
    let mut PTR_LOOP_1050_4582: u16;
    let mut PTR_LOOP_1050_4584: *mut c_void;
    let mut PTR_LOOP_1050_4586: *mut c_void;
    let mut PTR_LOOP_1050_4588: u16;
    let mut PTR_LOOP_1050_458a: *mut c_void;
    let mut PTR_LOOP_1050_458c: *mut c_void;
    let mut PTR_LOOP_1050_458e: u16;
    let mut PTR_LOOP_1050_4590: *mut c_void;
    let mut PTR_LOOP_1050_4592: *mut c_void;
    let mut PTR_LOOP_1050_4594: u16;
    let mut PTR_LOOP_1050_4596: *mut c_void;
    let mut PTR_LOOP_1050_4598: *mut c_void;
    let mut PTR_LOOP_1050_459a: u16;
    let mut PTR_LOOP_1050_459c: *mut c_void;
    let mut PTR_LOOP_1050_459e: *mut c_void;
    let mut PTR_LOOP_1050_45a0: u16;
    let mut PTR_LOOP_1050_45a2: *mut c_void;
    let mut PTR_LOOP_1050_45a4: *mut c_void;
    let mut PTR_LOOP_1050_45a6: u16;
    let mut PTR_LOOP_1050_45a8: *mut c_void;
    let mut _PTR_LOOP_1050_45aa: i32
    let mut _PTR_LOOP_1050_45b0: i32
    let mut _PTR_LOOP_1050_45b6: i32
    let mut PTR_LOOP_1050_45bc: *mut c_void;
    let mut PTR_LOOP_1050_45be: u16;
    let mut PTR_LOOP_1050_45c0: *mut c_void;
    let mut PTR_LOOP_1050_45c2: *mut c_void;
    let mut PTR_LOOP_1050_45c4: u16;
    let mut PTR_LOOP_1050_45c6: *mut c_void;
    let mut _PTR_LOOP_1050_45c8: i32
    let mut _PTR_LOOP_1050_45ce: i32
    let mut _PTR_LOOP_1050_45d4: i32
    let mut _PTR_LOOP_1050_45da: i32
    let mut PTR_LOOP_1050_45e0: *mut c_void;
    let mut PTR_LOOP_1050_45e2: u16;
    let mut PTR_LOOP_1050_45e4: *mut c_void;
    let mut PTR_LOOP_1050_45e6: *mut c_void;
    let mut PTR_LOOP_1050_45e8: u16;
    let mut PTR_LOOP_1050_45ea: *mut c_void;
    let mut _PTR_LOOP_1050_45ec: i32
    let mut _PTR_LOOP_1050_45f2: i32
    let mut _PTR_LOOP_1050_45f8: i32
    let mut PTR_LOOP_1050_45fe: *mut c_void;
    let mut PTR_LOOP_1050_4600: u16;
    let mut PTR_LOOP_1050_4602: *mut c_void;
    let mut PTR_LOOP_1050_4604: *mut c_void;
    let mut PTR_LOOP_1050_4606: u16;
    let mut PTR_LOOP_1050_4608: *mut c_void;
    let mut _PTR_LOOP_1050_460a: i32
    let mut _PTR_LOOP_1050_4610: i32
    let mut PTR_LOOP_1050_451e: i32
    let mut PTR_LOOP_1050_45ae: i32
    let mut PTR_LOOP_1050_45b4: i32
    let mut PTR_LOOP_1050_45ba: i32
    let mut PTR_LOOP_1050_45cc: i32
    let mut PTR_LOOP_1050_45d2: i32
    let mut PTR_LOOP_1050_45f6: i32
    let mut PTR_LOOP_1050_45fc: i32
    let mut PTR_LOOP_1050_460e: i32
    let mut PTR_LOOP_1050_4614: i32
    let mut _PTR_LOOP_1050_4616: i32
    let mut _PTR_LOOP_1050_461c: i32
    let mut _PTR_LOOP_1050_4622: i32
    let mut _PTR_LOOP_1050_4628: i32
    let mut _PTR_LOOP_1050_462e: i32
    let mut _PTR_LOOP_1050_4634: i32
    let mut PTR_LOOP_1050_4518: i32
    let mut PTR_LOOP_1050_453c: i32
    let mut PTR_LOOP_1050_4542: i32
    let mut PTR_LOOP_1050_456c: i32
    let mut PTR_LOOP_1050_45d8: i32
    let mut PTR_LOOP_1050_45de: i32
    let mut PTR_LOOP_1050_45f0: i32
    let mut PTR_LOOP_1050_461a: i32
    let mut PTR_LOOP_1050_4620: i32
    let mut PTR_LOOP_1050_4626: i32
    let mut PTR_LOOP_1050_462c: i32
    let mut PTR_LOOP_1050_4632: i32
    let mut PTR_LOOP_1050_4638: i32
    let mut _PTR_LOOP_1050_463a: i32
    let mut _PTR_LOOP_1050_4640: i32
    let mut _PTR_LOOP_1050_4646: i32
    let mut _PTR_LOOP_1050_464c: i32
    let mut _PTR_LOOP_1050_4652: i32
    let mut _PTR_LOOP_1050_4658: i32
    let mut PTR_LOOP_1050_465e: *mut c_void;
    let mut PTR_LOOP_1050_4660: u16;
    let mut PTR_LOOP_1050_4664: *mut c_void;
    let mut PTR_LOOP_1050_4666: u16;
    let mut PTR_LOOP_1050_4662: *mut c_void;
    let mut PTR_LOOP_1050_4668: *mut c_void;
    let mut DAT_1050_4452: u16;
    let mut PTR_LOOP_1050_466a: *mut c_void;
    let mut PTR_LOOP_1050_466c: u16;
    let mut PTR_LOOP_1050_466e: *mut c_void;
    let mut PTR_LOOP_1050_4670: *mut c_void;
    let mut PTR_LOOP_1050_4672: u16;
    let mut PTR_LOOP_1050_4676: *mut c_void;
    let mut PTR_LOOP_1050_4678: u16;
    let mut PTR_LOOP_1050_4674: *mut c_void;
    let mut PTR_LOOP_1050_467a: *mut c_void;
    let mut PTR_LOOP_1050_467c: *mut c_void;
    let mut PTR_LOOP_1050_467e: u16;
    let mut PTR_LOOP_1050_4680: *mut c_void;
    let mut PTR_LOOP_1050_4682: *mut c_void;
    let mut PTR_LOOP_1050_4684: u16;
    let mut PTR_LOOP_1050_4686: *mut c_void;
    let mut PTR_LOOP_1050_4688: *mut c_void;
    let mut PTR_LOOP_1050_468a: u16;
    let mut PTR_LOOP_1050_468c: *mut c_void;
    let mut PTR_LOOP_1050_468e: *mut c_void;
    let mut PTR_LOOP_1050_4690: u16;
    let mut PTR_LOOP_1050_4692: *mut c_void;
    let mut PTR_LOOP_1050_4694: *mut c_void;
    let mut PTR_LOOP_1050_4696: u16;
    let mut PTR_LOOP_1050_4698: *mut c_void;
    let mut PTR_LOOP_1050_469a: *mut c_void;
    let mut PTR_LOOP_1050_469c: u16;
    let mut PTR_LOOP_1050_469e: *mut c_void;
    let mut PTR_LOOP_1050_46a0: *mut c_void;
    let mut PTR_LOOP_1050_46a2: u16;
    let mut PTR_LOOP_1050_46a4: *mut c_void;
    let mut PTR_LOOP_1050_46a6: *mut c_void;
    let mut PTR_LOOP_1050_46a8: u16;
    let mut PTR_LOOP_1050_46aa: *mut c_void;
    let mut PTR_LOOP_1050_46ac: *mut c_void;
    let mut PTR_LOOP_1050_46ae: u16;
    let mut PTR_LOOP_1050_46b0: *mut c_void;
    let mut PTR_LOOP_1050_46b2: *mut c_void;
    let mut PTR_LOOP_1050_46b4: u16;
    let mut PTR_LOOP_1050_46b6: *mut c_void;
    let mut PTR_LOOP_1050_46b8: *mut c_void;
    let mut PTR_LOOP_1050_46ba: u16;
    let mut PTR_LOOP_1050_46bc: *mut c_void;
    let mut PTR_LOOP_1050_46be: *mut c_void;
    let mut PTR_LOOP_1050_46c0: u16;
    let mut PTR_LOOP_1050_46c2: *mut c_void;
    let mut PTR_LOOP_1050_46c6: i32
    let mut PTR_LOOP_1050_46c4: i32
    let mut PTR_LOOP_1050_46cc: i32
    let mut PTR_LOOP_1050_46ca: i32
    let mut PTR_LOOP_1050_46d2: i32
    let mut PTR_LOOP_1050_46d0: i32
    let mut PTR_LOOP_1050_46d8: i32
    let mut PTR_LOOP_1050_46d6: i32
    let mut PTR_LOOP_1050_46de: i32
    let mut PTR_LOOP_1050_46dc: i32
    let mut PTR_LOOP_1050_46e2: *mut c_void;
    let mut PTR_LOOP_1050_46e4: u16;
    let mut PTR_LOOP_1050_46e6: *mut c_void;
    let mut PTR_LOOP_1050_46e8: *mut c_void;
    let mut PTR_LOOP_1050_46ea: u16;
    let mut PTR_LOOP_1050_46ec: *mut c_void;
    let mut PTR_LOOP_1050_46ee: *mut c_void;
    let mut PTR_LOOP_1050_46f0: u16;
    let mut PTR_LOOP_1050_46f2: *mut c_void;
    let mut _PTR_LOOP_1050_46f4: i32
    let mut _PTR_LOOP_1050_46fa: i32
    let mut PTR_LOOP_1050_46f8: i32
    let mut PTR_LOOP_1050_46fe: i32
    let mut _PTR_LOOP_1050_4700: i32
    let mut _PTR_LOOP_1050_4706: i32
    let mut PTR_LOOP_1050_470c: *mut c_void;
    let mut PTR_LOOP_1050_470e: u16;
    let mut PTR_LOOP_1050_4710: *mut c_void;
    let mut PTR_LOOP_1050_4712: *mut c_void;
    let mut PTR_LOOP_1050_4714: u16;
    let mut PTR_LOOP_1050_4716: *mut c_void;
    let mut _PTR_LOOP_1050_4718: i32
    let mut _PTR_LOOP_1050_471e: i32
    let mut _PTR_LOOP_1050_4724: i32
    let mut _PTR_LOOP_1050_472a: i32
    let mut _PTR_LOOP_1050_4730: i32
    let mut _PTR_LOOP_1050_4736: i32
    let mut _PTR_LOOP_1050_473c: i32
    let mut _PTR_LOOP_1050_4742: i32
    let mut _PTR_LOOP_1050_4748: i32
    let mut _PTR_LOOP_1050_474e: i32
    let mut _PTR_LOOP_1050_4754: i32
    let mut _PTR_LOOP_1050_475a: i32
    let mut _PTR_LOOP_1050_4760: i32
    let mut PTR_LOOP_1050_463e: i32
    let mut PTR_LOOP_1050_4644: i32
    let mut PTR_LOOP_1050_464a: i32
    let mut PTR_LOOP_1050_4650: i32
    let mut PTR_LOOP_1050_4656: i32
    let mut PTR_LOOP_1050_465c: i32
    let mut PTR_LOOP_1050_46c8: i32
    let mut PTR_LOOP_1050_46ce: i32
    let mut PTR_LOOP_1050_46d4: i32
    let mut PTR_LOOP_1050_46da: i32
    let mut PTR_LOOP_1050_46e0: i32
    let mut PTR_LOOP_1050_4704: i32
    let mut PTR_LOOP_1050_470a: i32
    let mut PTR_LOOP_1050_471c: i32
    let mut PTR_LOOP_1050_4722: i32
    let mut PTR_LOOP_1050_4728: i32
    let mut PTR_LOOP_1050_472e: i32
    let mut PTR_LOOP_1050_4734: i32
    let mut PTR_LOOP_1050_473a: i32
    let mut PTR_LOOP_1050_4740: i32
    let mut PTR_LOOP_1050_4746: i32
    let mut PTR_LOOP_1050_474c: i32
    let mut PTR_LOOP_1050_4752: i32
    let mut PTR_LOOP_1050_4758: i32
    let mut PTR_LOOP_1050_475e: i32
    let mut PTR_LOOP_1050_4764: i32
    let mut _PTR_LOOP_1050_4766: i32
    let mut _PTR_LOOP_1050_476c: i32
    let mut _PTR_LOOP_1050_4772: i32
    let mut _PTR_LOOP_1050_4778: i32
    let mut _PTR_LOOP_1050_477e: i32
    let mut _PTR_LOOP_1050_4784: i32
    let mut _PTR_LOOP_1050_478a: i32
    let mut _PTR_LOOP_1050_4790: i32
    let mut _PTR_LOOP_1050_4796: i32
    let mut _PTR_LOOP_1050_479c: i32
    let mut _PTR_LOOP_1050_47a2: i32
    let mut _PTR_LOOP_1050_47a8: i32
    let mut _PTR_LOOP_1050_47ae: i32
    let mut _PTR_LOOP_1050_47b4: i32
    let mut PTR_LOOP_1050_476a: i32
    let mut PTR_LOOP_1050_4770: i32
    let mut PTR_LOOP_1050_4776: i32
    let mut PTR_LOOP_1050_477c: i32
    let mut PTR_LOOP_1050_4782: i32
    let mut PTR_LOOP_1050_4788: i32
    let mut PTR_LOOP_1050_478e: i32
    let mut PTR_LOOP_1050_4794: i32
    let mut PTR_LOOP_1050_479a: i32
    let mut PTR_LOOP_1050_47a0: i32
    let mut PTR_LOOP_1050_47a6: i32
    let mut PTR_LOOP_1050_47ac: i32
    let mut PTR_LOOP_1050_47b2: i32
    let mut PTR_LOOP_1050_47b8: i32
    let mut _PTR_LOOP_1050_4850: i32
    let mut _PTR_LOOP_1050_4856: i32
    let mut PTR_LOOP_1050_484e: *mut c_void;
    let mut PTR_LOOP_1050_4468: u16;
    let mut PTR_LOOP_1050_4860: *mut c_void;
    let mut PTR_LOOP_1050_485c: *mut c_void;
    let mut PTR_LOOP_1050_485e: u16;
    let mut PTR_LOOP_1050_4862: *mut c_void;
    let mut PTR_LOOP_1050_4864: u16;
    let mut PTR_LOOP_1050_4866: *mut c_void;
    let mut PTR_LOOP_1050_4868: *mut c_void;
    let mut PTR_LOOP_1050_486a: u16;
    let mut PTR_LOOP_1050_486c: *mut c_void;
    let mut PTR_LOOP_1050_486e: *mut c_void;
    let mut PTR_LOOP_1050_4870: u16;
    let mut PTR_LOOP_1050_4872: *mut c_void;
    let mut _PTR_LOOP_1050_4874: i32
    let mut _PTR_LOOP_1050_487a: i32
    let mut PTR_LOOP_1050_4880: *mut c_void;
    let mut PTR_LOOP_1050_4882: u16;
    let mut PTR_LOOP_1050_4886: *mut c_void;
    let mut PTR_LOOP_1050_4888: u16;
    let mut PTR_LOOP_1050_4884: *mut c_void;
    let mut PTR_LOOP_1050_488a: *mut c_void;
    let mut PTR_LOOP_1050_488c: *mut c_void;
    let mut PTR_LOOP_1050_488e: u16;
    let mut PTR_LOOP_1050_4890: *mut c_void;
    let mut PTR_LOOP_1050_4892: *mut c_void;
    let mut PTR_LOOP_1050_4894: u16;
    let mut PTR_LOOP_1050_4898: *mut c_void;
    let mut PTR_LOOP_1050_489a: u16;
    let mut PTR_LOOP_1050_4896: *mut c_void;
    let mut PTR_LOOP_1050_489c: *mut c_void;
    let mut PTR_LOOP_1050_489e: *mut c_void;
    let mut PTR_LOOP_1050_48a0: u16;
    let mut PTR_LOOP_1050_48a2: *mut c_void;
    let mut PTR_LOOP_1050_4486: u16;
    let mut PTR_LOOP_1050_48a6: i32
    let mut PTR_LOOP_1050_48a4: i32
    let mut PTR_LOOP_1050_48aa: *mut c_void;
    let mut PTR_LOOP_1050_48ac: u16;
    let mut PTR_LOOP_1050_48b0: *mut c_void;
    let mut PTR_LOOP_1050_48b2: u16;
    let mut PTR_LOOP_1050_48ae: *mut c_void;
    let mut PTR_LOOP_1050_448c: u16;
    let mut PTR_LOOP_1050_48b4: *mut c_void;
    let mut PTR_LOOP_1050_48b6: *mut c_void;
    let mut PTR_LOOP_1050_48b8: u16;
    let mut PTR_LOOP_1050_48ba: *mut c_void;
    let mut PTR_LOOP_1050_48bc: *mut c_void;
    let mut PTR_LOOP_1050_48be: u16;
    let mut PTR_LOOP_1050_48c2: *mut c_void;
    let mut PTR_LOOP_1050_48c4: u16;
    let mut PTR_LOOP_1050_48c0: u16;
    let mut PTR_LOOP_1050_446e: u16;
    let mut PTR_LOOP_1050_48c6: u16;
    let mut PTR_LOOP_1050_48c8: *mut c_void;
    let mut PTR_LOOP_1050_48ca: u16;
    let mut PTR_LOOP_1050_48cc: u16;
    let mut PTR_LOOP_1050_48ce: *mut c_void;
    let mut PTR_LOOP_1050_48d0: u16;
    let mut PTR_LOOP_1050_48d4: *mut c_void;
    let mut PTR_LOOP_1050_48d6: u16;
    let mut PTR_LOOP_1050_48d2: *mut c_void;
    let mut PTR_LOOP_1050_48d8: *mut c_void;
    let mut DAT_1050_4480: u16;
    let mut PTR_LOOP_1050_48da: *mut c_void;
    let mut PTR_LOOP_1050_48dc: u16;
    let mut PTR_LOOP_1050_48de: *mut c_void;
    let mut PTR_LOOP_1050_48e0: *mut c_void;
    let mut PTR_LOOP_1050_48e2: u16;
    let mut PTR_LOOP_1050_48e4: *mut c_void;
    let mut PTR_LOOP_1050_48e6: *mut c_void;
    let mut PTR_LOOP_1050_48e8: u16;
    let mut PTR_LOOP_1050_48ea: *mut c_void;
    let mut _PTR_LOOP_1050_48ec: i32
    let mut _PTR_LOOP_1050_48f2: i32
    let mut PTR_LOOP_1050_48f8: *mut c_void;
    let mut PTR_LOOP_1050_48fa: u16;
    let mut PTR_LOOP_1050_48fc: *mut c_void;
    let mut PTR_LOOP_1050_48fe: *mut c_void;
    let mut PTR_LOOP_1050_4900: u16;
    let mut PTR_LOOP_1050_4902: *mut c_void;
    let mut _PTR_LOOP_1050_4904: i32
    let mut _PTR_LOOP_1050_490a: i32
    let mut PTR_LOOP_1050_485a: i32
    let mut PTR_LOOP_1050_48f0: i32
    let mut PTR_LOOP_1050_48f6: i32
    let mut PTR_LOOP_1050_4908: i32
    let mut PTR_LOOP_1050_490e: i32
    let mut _PTR_LOOP_1050_4910: i32
    let mut _PTR_LOOP_1050_4916: i32
    let mut PTR_LOOP_1050_4854: i32
    let mut PTR_LOOP_1050_4878: i32
    let mut PTR_LOOP_1050_487e: i32
    let mut PTR_LOOP_1050_48a8: i32
    let mut PTR_LOOP_1050_4914: i32
    let mut PTR_LOOP_1050_491a: i32
    let mut PTR_LOOP_1050_491c: *mut c_void;
    let mut PTR_LOOP_1050_491e: u16;
    let mut PTR_LOOP_1050_4920: *mut c_void;
    let mut PTR_LOOP_1050_4922: *mut c_void;
    let mut PTR_LOOP_1050_4924: u16;
    let mut PTR_LOOP_1050_4926: *mut c_void;
    let mut _PTR_LOOP_1050_4928: i32
    let mut _PTR_LOOP_1050_492e: i32
    let mut _PTR_LOOP_1050_4934: i32
    let mut PTR_LOOP_1050_493a: *mut c_void;
    let mut PTR_LOOP_1050_493c: u16;
    let mut PTR_LOOP_1050_4940: *mut c_void;
    let mut PTR_LOOP_1050_4942: u16;
    let mut PTR_LOOP_1050_493e: *mut c_void;
    let mut PTR_LOOP_1050_4944: *mut c_void;
    let mut _PTR_LOOP_1050_4946: i32
    let mut _PTR_LOOP_1050_494c: i32
    let mut _PTR_LOOP_1050_4952: i32
    let mut _PTR_LOOP_1050_4958: i32
    let mut _PTR_LOOP_1050_495e: i32
    let mut _PTR_LOOP_1050_4964: i32
    let mut _PTR_LOOP_1050_496a: i32
    let mut _PTR_LOOP_1050_4970: i32
    let mut _PTR_LOOP_1050_4976: i32
    let mut _PTR_LOOP_1050_497c: i32
    let mut _PTR_LOOP_1050_4982: i32
    let mut _PTR_LOOP_1050_4988: i32
    let mut _PTR_LOOP_1050_498e: i32
    let mut _PTR_LOOP_1050_4994: i32
    let mut PTR_LOOP_1050_499a: *mut c_void;
    let mut PTR_LOOP_1050_499c: u16;
    let mut PTR_LOOP_1050_49a0: *mut c_void;
    let mut PTR_LOOP_1050_499e: *mut c_void;
    let mut PTR_LOOP_1050_49a2: u16;
    let mut PTR_LOOP_1050_49a4: *mut c_void;
    let mut PTR_LOOP_1050_49a6: *mut c_void;
    let mut PTR_LOOP_1050_49a8: u16;
    let mut PTR_LOOP_1050_49aa: *mut c_void;
    let mut PTR_LOOP_1050_49ac: *mut c_void;
    let mut PTR_LOOP_1050_49ae: u16;
    let mut PTR_LOOP_1050_49b2: *mut c_void;
    let mut PTR_LOOP_1050_49b4: u16;
    let mut PTR_LOOP_1050_49b0: *mut c_void;
    let mut PTR_LOOP_1050_49b6: *mut c_void;
    let mut PTR_DAT_1050_0004_1050_4478: u16;
    let mut PTR_LOOP_1050_49b8: *mut c_void;
    let mut PTR_LOOP_1050_49ba: u16;
    let mut PTR_LOOP_1050_49bc: *mut c_void;
    let mut PTR_LOOP_1050_49be: *mut c_void;
    let mut PTR_LOOP_1050_49c0: u16;
    let mut PTR_LOOP_1050_49c2: *mut c_void;
    let mut PTR_LOOP_1050_49c4: *mut c_void;
    let mut PTR_LOOP_1050_49c6: u16;
    let mut PTR_LOOP_1050_49c8: *mut c_void;
    let mut PTR_LOOP_1050_49ca: *mut c_void;
    let mut PTR_LOOP_1050_49cc: u16;
    let mut PTR_LOOP_1050_49ce: *mut c_void;
    let mut PTR_LOOP_1050_49d0: *mut c_void;
    let mut PTR_LOOP_1050_49d2: u16;
    let mut PTR_LOOP_1050_49d4: *mut c_void;
    let mut PTR_LOOP_1050_49d6: *mut c_void;
    let mut PTR_LOOP_1050_49d8: u16;
    let mut PTR_LOOP_1050_49da: *mut c_void;
    let mut PTR_LOOP_1050_49dc: *mut c_void;
    let mut PTR_LOOP_1050_49de: u16;
    let mut PTR_LOOP_1050_49e0: *mut c_void;
    let mut PTR_LOOP_1050_49e2: *mut c_void;
    let mut PTR_LOOP_1050_49e4: u16;
    let mut PTR_LOOP_1050_49e8: *mut c_void;
    let mut PTR_LOOP_1050_49ea: u16;
    let mut PTR_LOOP_1050_49e6: *mut c_void;
    let mut PTR_LOOP_1050_49ec: *mut c_void;
    let mut PTR_LOOP_1050_49ee: *mut c_void;
    let mut PTR_LOOP_1050_49f0: u16;
    let mut PTR_LOOP_1050_49f2: *mut c_void;
    let mut PTR_LOOP_1050_49f4: *mut c_void;
    let mut PTR_LOOP_1050_49f6: u16;
    let mut PTR_LOOP_1050_49f8: *mut c_void;
    let mut PTR_LOOP_1050_49fa: *mut c_void;
    let mut PTR_LOOP_1050_49fc: u16;
    let mut PTR_LOOP_1050_49fe: *mut c_void;
    let mut PTR_LOOP_1050_4a02: i32
    let mut PTR_LOOP_1050_4a00: i32
    let mut PTR_LOOP_1050_4a08: i32
    let mut PTR_LOOP_1050_4a06: i32
    let mut PTR_LOOP_1050_4a0e: i32
    let mut PTR_LOOP_1050_4a0c: i32
    let mut PTR_LOOP_1050_4a14: i32
    let mut PTR_LOOP_1050_4a12: i32
    let mut PTR_LOOP_1050_4a1a: i32
    let mut PTR_LOOP_1050_4a18: i32
    let mut PTR_LOOP_1050_4a1e: *mut c_void;
    let mut PTR_LOOP_1050_4a20: u16;
    let mut PTR_LOOP_1050_4a22: *mut c_void;
    let mut PTR_LOOP_1050_4a24: *mut c_void;
    let mut PTR_LOOP_1050_4a26: u16;
    let mut PTR_LOOP_1050_4a28: *mut c_void;
    let mut PTR_LOOP_1050_4a2a: *mut c_void;
    let mut PTR_LOOP_1050_4a2c: u16;
    let mut PTR_LOOP_1050_4a2e: *mut c_void;
    let mut _PTR_LOOP_1050_4a30: i32
    let mut _PTR_LOOP_1050_4a36: i32
    let mut PTR_LOOP_1050_492c: i32
    let mut PTR_LOOP_1050_4932: i32
    let mut PTR_LOOP_1050_4938: i32
    let mut PTR_LOOP_1050_494a: i32
    let mut PTR_LOOP_1050_4950: i32
    let mut PTR_LOOP_1050_4a34: i32
    let mut PTR_LOOP_1050_4a3a: i32
    let mut _PTR_LOOP_1050_4a3c: i32
    let mut _PTR_LOOP_1050_4a42: i32
    let mut PTR_LOOP_1050_4956: i32
    let mut PTR_LOOP_1050_495c: i32
    let mut PTR_LOOP_1050_4962: i32
    let mut PTR_LOOP_1050_4968: i32
    let mut PTR_LOOP_1050_496e: i32
    let mut PTR_LOOP_1050_4974: i32
    let mut PTR_LOOP_1050_497a: i32
    let mut PTR_LOOP_1050_4980: i32
    let mut PTR_LOOP_1050_4986: i32
    let mut PTR_LOOP_1050_498c: i32
    let mut PTR_LOOP_1050_4992: i32
    let mut PTR_LOOP_1050_4998: i32
    let mut PTR_LOOP_1050_4a04: i32
    let mut PTR_LOOP_1050_4a0a: i32
    let mut PTR_LOOP_1050_4a10: i32
    let mut PTR_LOOP_1050_4a16: i32
    let mut PTR_LOOP_1050_4a1c: i32
    let mut PTR_LOOP_1050_4a40: i32
    let mut PTR_LOOP_1050_4a46: i32
    let mut PTR_LOOP_1050_4a48: *mut c_void;
    let mut PTR_LOOP_1050_4a4a: u16;
    let mut PTR_LOOP_1050_4a4c: *mut c_void;
    let mut PTR_LOOP_1050_4a4e: *mut c_void;
    let mut PTR_LOOP_1050_4a50: u16;
    let mut PTR_LOOP_1050_4a52: *mut c_void;
    let mut _PTR_LOOP_1050_4a54: i32
    let mut _PTR_LOOP_1050_4a5a: i32
    let mut _PTR_LOOP_1050_4a60: i32
    let mut _PTR_LOOP_1050_4a66: i32
    let mut _PTR_LOOP_1050_4a6c: i32
    let mut _PTR_LOOP_1050_4a72: i32
    let mut _PTR_LOOP_1050_4a78: i32
    let mut _PTR_LOOP_1050_4a7e: i32
    let mut _PTR_LOOP_1050_4a84: i32
    let mut _PTR_LOOP_1050_4a8a: i32
    let mut _PTR_LOOP_1050_4a90: i32
    let mut _PTR_LOOP_1050_4a96: i32
    let mut _PTR_LOOP_1050_4a9c: i32
    let mut _PTR_LOOP_1050_4aa2: i32
    let mut _PTR_LOOP_1050_4aa8: i32
    let mut _PTR_LOOP_1050_4aae: i32
    let mut _PTR_LOOP_1050_4ab4: i32
    let mut _PTR_LOOP_1050_4aba: i32
    let mut _PTR_LOOP_1050_4ac0: i32
    let mut _PTR_LOOP_1050_4ac6: i32
    let mut _PTR_LOOP_1050_4acc: i32
    let mut _PTR_LOOP_1050_4ad2: i32
    let mut _PTR_LOOP_1050_4ad8: i32
    let mut _PTR_LOOP_1050_4ade: i32
    let mut _PTR_LOOP_1050_4ae4: i32
    let mut _PTR_LOOP_1050_4aea: i32
    let mut _PTR_LOOP_1050_4af0: i32
    let mut PTR_LOOP_1050_4a58: i32
    let mut PTR_LOOP_1050_4a5e: i32
    let mut PTR_LOOP_1050_4a64: i32
    let mut PTR_LOOP_1050_4a6a: i32
    let mut PTR_LOOP_1050_4a70: i32
    let mut PTR_LOOP_1050_4a76: i32
    let mut PTR_LOOP_1050_4a7c: i32
    let mut PTR_LOOP_1050_4a82: i32
    let mut PTR_LOOP_1050_4a88: i32
    let mut PTR_LOOP_1050_4a8e: i32
    let mut PTR_LOOP_1050_4a94: i32
    let mut PTR_LOOP_1050_4a9a: i32
    let mut PTR_LOOP_1050_4aa0: i32
    let mut PTR_LOOP_1050_4aa6: i32
    let mut PTR_LOOP_1050_4aac: i32
    let mut PTR_LOOP_1050_4ab2: i32
    let mut PTR_LOOP_1050_4ab8: i32
    let mut PTR_LOOP_1050_4abe: i32
    let mut PTR_LOOP_1050_4ac4: i32
    let mut PTR_LOOP_1050_4aca: i32
    let mut PTR_LOOP_1050_4ad0: i32
    let mut PTR_LOOP_1050_4ad6: i32
    let mut PTR_LOOP_1050_4adc: i32
    let mut PTR_LOOP_1050_4ae2: i32
    let mut PTR_LOOP_1050_4ae8: i32
    let mut PTR_LOOP_1050_4aee: i32
    let mut PTR_LOOP_1050_4af4: i32
    let mut PTR_LOOP_1050_4b9c: *mut c_void;
    let mut _PTR_LOOP_1050_4b9e: i32
    let mut _PTR_LOOP_1050_4ba4: i32
    let mut _PTR_LOOP_1050_4baa: i32
    let mut PTR_LOOP_1050_4ba2: i32
    let mut PTR_LOOP_1050_4ba8: i32
    let mut PTR_LOOP_1050_4bae: i32
    let mut _PTR_LOOP_1050_4bb0: i32
    let mut _PTR_LOOP_1050_4bb6: i32
    let mut PTR_LOOP_1050_4bbc: *mut c_void;
    let mut PTR_LOOP_1050_4bc2: *mut c_void;
    let mut PTR_LOOP_1050_4bbe: u16;
    let mut PTR_LOOP_1050_4bc4: u16;
    let mut PTR_LOOP_1050_4bc0: *mut c_void;
    let mut DAT_1050_4494: u16;
    let mut PTR_LOOP_1050_4bc6: *mut c_void;
    let mut PTR_LOOP_1050_4bc8: *mut c_void;
    let mut PTR_LOOP_1050_4bca: u16;
    let mut PTR_LOOP_1050_4bcc: *mut c_void;
    let mut PTR_LOOP_1050_4bce: *mut c_void;
    let mut PTR_LOOP_1050_4bd0: u16;
    let mut PTR_LOOP_1050_4bd4: *mut c_void;
    let mut PTR_LOOP_1050_4bd6: u16;
    let mut PTR_LOOP_1050_4bd2: *mut c_void;
    let mut PTR_LOOP_1050_4bd8: *mut c_void;
    let mut PTR_LOOP_1050_4bda: *mut c_void;
    let mut PTR_LOOP_1050_4bdc: u16;
    let mut PTR_LOOP_1050_4bde: *mut c_void;
    let mut PTR_LOOP_1050_4be2: i32
    let mut PTR_LOOP_1050_4be0: i32
    let mut PTR_LOOP_1050_4bb4: i32
    let mut PTR_LOOP_1050_4bba: i32
    let mut PTR_LOOP_1050_4be4: i32
    let mut PTR_LOOP_1050_4be6: *mut c_void;
    let mut PTR_LOOP_1050_4be8: u16;
    let mut PTR_LOOP_1050_4bec: *mut c_void;
    let mut PTR_LOOP_1050_4bee: u16;
    let mut PTR_LOOP_1050_4bea: *mut c_void;
    let mut PTR_LOOP_1050_4bf0: *mut c_void;
    let mut DAT_1050_44b2: u16;
    let mut PTR_LOOP_1050_4bf2: *mut c_void;
    let mut PTR_LOOP_1050_4bf4: u16;
    let mut PTR_LOOP_1050_4bf6: *mut c_void;
    let mut PTR_LOOP_1050_4bf8: *mut c_void;
    let mut PTR_LOOP_1050_4bfa: u16;
    let mut PTR_LOOP_1050_4bfe: *mut c_void;
    let mut PTR_LOOP_1050_4c00: u16;
    let mut PTR_LOOP_1050_4bfc: *mut c_void;
    let mut PTR_LOOP_1050_4c02: *mut c_void;
    let mut PTR_LOOP_1050_4c04: *mut c_void;
    let mut PTR_LOOP_1050_4c06: u16;
    let mut PTR_LOOP_1050_4c08: *mut c_void;
    let mut PTR_LOOP_1050_4c0a: *mut c_void;
    let mut PTR_LOOP_1050_4c0c: u16;
    let mut PTR_LOOP_1050_4c0e: *mut c_void;
    let mut PTR_LOOP_1050_4c10: *mut c_void;
    let mut PTR_LOOP_1050_4c12: u16;
    let mut PTR_LOOP_1050_4c14: *mut c_void;
    let mut PTR_LOOP_1050_4c16: *mut c_void;
    let mut PTR_LOOP_1050_4c18: u16;
    let mut PTR_LOOP_1050_4c1a: *mut c_void;
    let mut PTR_LOOP_1050_4c22: *mut c_void;
    let mut PTR_LOOP_1050_4c24: u16;
    let mut PTR_LOOP_1050_4c26: *mut c_void;
    let mut _PTR_LOOP_1050_4c28: i32
    let mut _PTR_LOOP_1050_4c2e: i32
    let mut _PTR_LOOP_1050_4c34: i32
    let mut _PTR_LOOP_1050_4c3a: i32
    let mut _PTR_LOOP_1050_4c40: i32
    let mut _PTR_LOOP_1050_4c46: i32
    let mut _PTR_LOOP_1050_4c4c: i32
    let mut _PTR_LOOP_1050_4c52: i32
    let mut PTR_LOOP_1050_4c1c: *mut c_void;
    let mut PTR_LOOP_1050_4c1e: u16;
    let mut PTR_LOOP_1050_4c58: *mut c_void;
    let mut PTR_LOOP_1050_4c5a: u16;
    let mut PTR_LOOP_1050_4c20: *mut c_void;
    let mut PTR_LOOP_1050_4c5c: *mut c_void;
    let mut PTR_LOOP_1050_4c5e: *mut c_void;
    let mut PTR_LOOP_1050_4c60: u16;
    let mut PTR_LOOP_1050_4c62: *mut c_void;
    let mut _PTR_LOOP_1050_4c64: i32
    let mut _PTR_LOOP_1050_4c6a: i32
    let mut _PTR_LOOP_1050_4c70: i32
    let mut PTR_LOOP_1050_4c76: *mut c_void;
    let mut PTR_LOOP_1050_4c78: u16;
    let mut PTR_LOOP_1050_4c7c: *mut c_void;
    let mut PTR_LOOP_1050_4c7e: u16;
    let mut PTR_LOOP_1050_4c7a: *mut c_void;
    let mut PTR_LOOP_1050_4c80: *mut c_void;
    let mut _PTR_LOOP_1050_4c82: i32
    let mut _PTR_LOOP_1050_4c88: i32
    let mut PTR_LOOP_1050_4c2c: i32
    let mut PTR_LOOP_1050_4c32: i32
    let mut PTR_LOOP_1050_4c38: i32
    let mut PTR_LOOP_1050_4c3e: i32
    let mut PTR_LOOP_1050_4c44: i32
    let mut PTR_LOOP_1050_4c4a: i32
    let mut PTR_LOOP_1050_4c68: i32
    let mut PTR_LOOP_1050_4c6e: i32
    let mut PTR_LOOP_1050_4c74: i32
    let mut PTR_LOOP_1050_4c86: i32
    let mut PTR_LOOP_1050_4c8c: i32
    let mut _PTR_LOOP_1050_4c8e: i32
    let mut _PTR_LOOP_1050_4c94: i32
    let mut _PTR_LOOP_1050_4c9a: i32
    let mut _PTR_LOOP_1050_4ca0: i32
    let mut _PTR_LOOP_1050_4ca6: i32
    let mut _PTR_LOOP_1050_4cac: i32
    let mut _PTR_LOOP_1050_4cb2: i32
    let mut _PTR_LOOP_1050_4cb8: i32
    let mut _PTR_LOOP_1050_4cbe: i32
    let mut _PTR_LOOP_1050_4cc4: i32
    let mut _PTR_LOOP_1050_4cca: i32
    let mut _PTR_LOOP_1050_4cd0: i32
    let mut PTR_LOOP_1050_4cd6: *mut c_void;
    let mut PTR_LOOP_1050_4cd8: u16;
    let mut PTR_LOOP_1050_4cdc: *mut c_void;
    let mut PTR_LOOP_1050_4cde: u16;
    let mut PTR_LOOP_1050_4cda: *mut c_void;
    let mut DAT_1050_44a2: u16;
    let mut PTR_LOOP_1050_4ce0: *mut c_void;
    let mut PTR_LOOP_1050_4ce2: *mut c_void;
    let mut PTR_LOOP_1050_4ce4: u16;
    let mut PTR_LOOP_1050_4ce6: *mut c_void;
    let mut PTR_LOOP_1050_4ce8: *mut c_void;
    let mut PTR_LOOP_1050_4cea: u16;
    let mut PTR_LOOP_1050_4cec: *mut c_void;
    let mut PTR_LOOP_1050_4cee: *mut c_void;
    let mut PTR_LOOP_1050_4cf0: u16;
    let mut PTR_LOOP_1050_4cf2: *mut c_void;
    let mut PTR_LOOP_1050_4cf4: *mut c_void;
    let mut PTR_LOOP_1050_4cf6: u16;
    let mut PTR_LOOP_1050_4cfa: *mut c_void;
    let mut PTR_LOOP_1050_4cfc: u16;
    let mut PTR_LOOP_1050_4cf8: *mut c_void;
    let mut DAT_1050_44aa: u16;
    let mut PTR_LOOP_1050_4cfe: *mut c_void;
    let mut PTR_LOOP_1050_4d00: *mut c_void;
    let mut PTR_LOOP_1050_4d02: u16;
    let mut PTR_LOOP_1050_4d04: *mut c_void;
    let mut PTR_LOOP_1050_4d06: *mut c_void;
    let mut PTR_LOOP_1050_4d08: u16;
    let mut PTR_LOOP_1050_4d0a: *mut c_void;
    let mut PTR_LOOP_1050_4d0c: *mut c_void;
    let mut PTR_LOOP_1050_4d0e: u16;
    let mut PTR_LOOP_1050_4d10: *mut c_void;
    let mut PTR_LOOP_1050_4d12: *mut c_void;
    let mut PTR_LOOP_1050_4d14: u16;
    let mut PTR_LOOP_1050_4d16: *mut c_void;
    let mut PTR_LOOP_1050_4d18: *mut c_void;
    let mut PTR_LOOP_1050_4d1a: u16;
    let mut PTR_LOOP_1050_4d1c: *mut c_void;
    let mut PTR_LOOP_1050_4d1e: *mut c_void;
    let mut PTR_LOOP_1050_4d20: u16;
    let mut PTR_LOOP_1050_4d24: *mut c_void;
    let mut PTR_LOOP_1050_4d26: u16;
    let mut PTR_LOOP_1050_4d22: *mut c_void;
    let mut PTR_LOOP_1050_4d28: *mut c_void;
    let mut PTR_LOOP_1050_4d2a: *mut c_void;
    let mut PTR_LOOP_1050_4d2c: u16;
    let mut PTR_LOOP_1050_4d2e: *mut c_void;
    let mut PTR_LOOP_1050_4d30: *mut c_void;
    let mut PTR_LOOP_1050_4d32: u16;
    let mut PTR_LOOP_1050_4d34: *mut c_void;
    let mut PTR_LOOP_1050_4d36: *mut c_void;
    let mut PTR_LOOP_1050_4d38: u16;
    let mut PTR_LOOP_1050_4d3a: *mut c_void;
    let mut _PTR_LOOP_1050_4d3c: i32
    let mut _PTR_LOOP_1050_4d42: i32
    let mut PTR_LOOP_1050_4c50: i32
    let mut PTR_LOOP_1050_4c56: i32
    let mut PTR_LOOP_1050_4c92: i32
    let mut PTR_LOOP_1050_4c98: i32
    let mut PTR_LOOP_1050_4c9e: i32
    let mut PTR_LOOP_1050_4ca4: i32
    let mut PTR_LOOP_1050_4caa: i32
    let mut PTR_LOOP_1050_4cb0: i32
    let mut PTR_LOOP_1050_4cb6: i32
    let mut PTR_LOOP_1050_4cbc: i32
    let mut PTR_LOOP_1050_4cc2: i32
    let mut PTR_LOOP_1050_4cc8: i32
    let mut PTR_LOOP_1050_4cce: i32
    let mut PTR_LOOP_1050_4cd4: i32
    let mut PTR_LOOP_1050_4d40: i32
    let mut PTR_LOOP_1050_4d46: i32
    let mut _PTR_LOOP_1050_4d48: i32
    let mut _PTR_LOOP_1050_4d4e: i32
    let mut _PTR_LOOP_1050_4d54: i32
    let mut PTR_LOOP_1050_4d5a: *mut c_void;
    let mut PTR_LOOP_1050_4d5c: u16;
    let mut PTR_LOOP_1050_4d5e: *mut c_void;
    let mut PTR_LOOP_1050_4d60: *mut c_void;
    let mut PTR_LOOP_1050_4d62: u16;
    let mut PTR_LOOP_1050_4d66: *mut c_void;
    let mut PTR_LOOP_1050_4d68: u16;
    let mut PTR_LOOP_1050_4d64: *mut c_void;
    let mut PTR_LOOP_1050_4d6a: *mut c_void;
    let mut _PTR_LOOP_1050_4d6c: i32
    let mut _PTR_LOOP_1050_4d72: i32
    let mut PTR_LOOP_1050_4d70: i32
    let mut PTR_LOOP_1050_4d76: i32
    let mut _PTR_LOOP_1050_4d78: i32
    let mut _PTR_LOOP_1050_4d7e: i32
    let mut PTR_LOOP_1050_4d84: *mut c_void;
    let mut PTR_LOOP_1050_4d86: u16;
    let mut PTR_LOOP_1050_4d88: *mut c_void;
    let mut PTR_LOOP_1050_4d8a: *mut c_void;
    let mut PTR_LOOP_1050_4d8c: u16;
    let mut PTR_LOOP_1050_4d8e: *mut c_void;
    let mut _PTR_LOOP_1050_4d90: i32
    let mut _PTR_LOOP_1050_4d96: i32
    let mut _PTR_LOOP_1050_4d9c: i32
    let mut _PTR_LOOP_1050_4da2: i32
    let mut _PTR_LOOP_1050_4da8: i32
    let mut _PTR_LOOP_1050_4dae: i32
    let mut _PTR_LOOP_1050_4db4: i32
    let mut _PTR_LOOP_1050_4dba: i32
    let mut _PTR_LOOP_1050_4dc0: i32
    let mut _PTR_LOOP_1050_4dc6: i32
    let mut _PTR_LOOP_1050_4dcc: i32
    let mut _PTR_LOOP_1050_4dd2: i32
    let mut _PTR_LOOP_1050_4dd8: i32
    let mut _PTR_LOOP_1050_4dde: i32
    let mut _PTR_LOOP_1050_4de4: i32
    let mut _PTR_LOOP_1050_4dea: i32
    let mut _PTR_LOOP_1050_4df0: i32
    let mut _PTR_LOOP_1050_4df6: i32
    let mut _PTR_LOOP_1050_4dfc: i32
    let mut _PTR_LOOP_1050_4e02: i32
    let mut _PTR_LOOP_1050_4e08: i32
    let mut _PTR_LOOP_1050_4e0e: i32
    let mut _PTR_LOOP_1050_4e14: i32
    let mut _PTR_LOOP_1050_4e1a: i32
    let mut _PTR_LOOP_1050_4e20: i32
    let mut _PTR_LOOP_1050_4e26: i32
    let mut _PTR_LOOP_1050_4e2c: i32
    let mut PTR_LOOP_1050_4d4c: i32
    let mut PTR_LOOP_1050_4d52: i32
    let mut PTR_LOOP_1050_4d58: i32
    let mut PTR_LOOP_1050_4d7c: i32
    let mut PTR_LOOP_1050_4d82: i32
    let mut PTR_LOOP_1050_4d94: i32
    let mut PTR_LOOP_1050_4d9a: i32
    let mut PTR_LOOP_1050_4da0: i32
    let mut PTR_LOOP_1050_4da6: i32
    let mut PTR_LOOP_1050_4dac: i32
    let mut PTR_LOOP_1050_4db2: i32
    let mut PTR_LOOP_1050_4db8: i32
    let mut PTR_LOOP_1050_4dbe: i32
    let mut PTR_LOOP_1050_4dc4: i32
    let mut PTR_LOOP_1050_4dca: i32
    let mut PTR_LOOP_1050_4dd0: i32
    let mut PTR_LOOP_1050_4dd6: i32
    let mut PTR_LOOP_1050_4ddc: i32
    let mut PTR_LOOP_1050_4de2: i32
    let mut PTR_LOOP_1050_4de8: i32
    let mut PTR_LOOP_1050_4dee: i32
    let mut PTR_LOOP_1050_4df4: i32
    let mut PTR_LOOP_1050_4dfa: i32
    let mut PTR_LOOP_1050_4e00: i32
    let mut PTR_LOOP_1050_4e06: i32
    let mut PTR_LOOP_1050_4e0c: i32
    let mut PTR_LOOP_1050_4e12: i32
    let mut PTR_LOOP_1050_4e18: i32
    let mut PTR_LOOP_1050_4e1e: i32
    let mut PTR_LOOP_1050_4e24: i32
    let mut PTR_LOOP_1050_4e2a: i32
    let mut PTR_LOOP_1050_4e30: i32
    let mut dat_1050_14cc: *mut c_char;
    let mut _PTR_LOOP_1050_4230: u32;
    let mut s_OpWnd__getKid__Unknown_target_mo_1050_01a3: u32;
    let mut PTR_LOOP_1050_5f6a: u16;
    let mut PTR_LOOP_1050_5f6c: u16;
    let mut PTR_LOOP_1050_6202: i32
    let mut PTR_LOOP_1050_6200: *mut *mut c_void;
    let mut s__C_FILE_INFO__1050_5f5c: u16;
    let mut PTR_LOOP_1050_61ec: i32
    let mut PTR_LOOP_1050_5fbe: u16;
    let mut PTR_LOOP_1050_5fc0: u16;
    let mut uRam100029ed: u16;
    let mut dat_1050_6066: u16;
    let mut DAT_1050_61d2: i32
    let mut DAT_1050_61ce: i16;
    let mut PTR_LOOP_1050_68b4: i32
    let mut PTR_LOOP_1050_61d0: u16;
    let mut _DAT_1050_61ce: u32;
    let mut PTR_USHORT_1050_1050_1050_61de: i32
    let mut PTR_PTR_DAT_1050_5350_1050_61d4_1050_61dc: u16;
    int *_PTR_PTR_1050_61e0;
    let mut DAT_1050_61e8: u16;
    let mut PTR_LOOP_1050_61ea: i32
    let mut PTR_LOOP_1050_5f22: i32
    let mut dat_1050_5f1e: i32
    let mut dat_1050_5f20: u16;
    let mut dat_1050_0002: i32
    let mut dat_1050_5f1a: u16;
    let mut PTR_LOOP_1050_5f1c: i32
    let mut PTR_PTR_1050_1f7e: i32
    let mut s_ABNORMAL_PROGRAM_TERMINATION_1050_6544: *mut c_char;
    i32 PTR_LOOP_1050_5f26;
    let mut dat_1050_5f30: i32
    let mut s_version__d__d_1050_0012: i32
    let mut dat_1050_5f2c: u16;
    let mut dat_1050_5f2e: u16;
    let mut dat_1050_5f32: i32
    let mut dat_1050_5f46: u16;
    let mut dat_1050_5f42: i32
    let mut dat_1050_5f44: i32
    let mut PTR_LOOP_1050_5fd2: u16;
    let mut PTR_LOOP_1050_5fd4: u16;
    let mut PTR_LOOP_1050_5fc2: u16;
    let mut PTR_LOOP_1050_5fc4: u16;
    i32 PTR_LOOP_1050_5fb8;
    let mut _PTR_LOOP_1050_5bc8: i32
    let mut PTR_LOOP_1050_0398: i32
    let mut s_Outpost_1050_00d7: *mut c_char;
    let mut s_SITEICON_1050_428d: *mut c_char;
    let mut s_TILEICON_1050_440c: *mut c_char;
    let mut s_OPButton_1050_5ece: *mut c_char;
    let mut s_VrMode_1050_4422: *mut c_char;
    let mut s_OpAccel_1050_43e8: *mut c_char;
    let mut s_MicroSpinControl_1050_0370: *mut c_char;
    let mut s_DanBrotherton_1050_0302: *mut c_char;
    i32 _PTR_LOOP_1050_02a0;
    let mut _PTR_LOOP_1050_5748: u16;
    let mut u32_1008_389a: u32;
    let mut s_VrMode2_1050_4404: *mut c_char;
    let mut s_TPPOPMENU_1050_43fa: u32;
    i32 PTR_LOOP_1050_0010;
    let mut PTR_LOOP_1050_4fe8: i32
    let mut _PTR_LOOP_1050_5a64: i32
    let mut _PTR_LOOP_1050_06e0: u32;
    i32 USHORT_1050_1028;
    let mut PTR_LOOP_1050_13ae: u16;
    i32 PTR_LOOP_1050_0000;
    let mut _PTR_LOOP_1050_5740: u32;
    let mut s_truck_0x_08lx_unloaded__ld_of__s_1050_5798: u32;
    let mut _PTR_LOOP_1050_5efa: i32
    let mut _PTR_LOOP_1050_5ee8: i32
    let mut PTR_LOOP_1050_5eec: u16;
    i32 PTR_LOOP_1050_5eee;
    let mut _PTR_LOOP_1050_5df0: i32
    i32 dat_1050_5e18;
    let mut s_procHi_1050_5e46: HANDLE16;
    let mut s_procLo_1050_5e4d: HANDLE16;
    let mut s_thisHi_1050_5e54: HANDLE16;
    let mut s_thisLo_1050_5e5b: HANDLE16;
    let mut dat_1050_0ecc: i32
    let mut dat_1050_5df8: i32
    i32 _PTR_LOOP_1050_5bcc;
    let mut s_thisLo_1050_5dcd: HANDLE16;
    let mut s_thisHi_1050_5dd4: HANDLE16;
    let mut s_procLo_1050_5ddb: HANDLE16;
    let mut s_procHi_1050_5de2: HANDLE16;
    let mut dat_1050_5f16: u16;
    let mut s_New_failed_in_Op__Op_1050_0020: i32
    i32 _PTR_LOOP_1050_5a68;
    let mut s_vrpal_bmp_1050_183a: i32
    let mut s_Rebel_1050_4ffc: i32
    let mut PTR_LOOP_1050_5ef8: u16;
    i32 dat_1050_0004;
    unsigned int s_dibtext_bmp_1050_1844;
    //    u16          dat_1050_14cc;
    let mut PTR_LOOP_1050_0396: u16;
    let mut _PTR_LOOP_1050_5b64: u32;
    let mut PTR_LOOP_1050_5b68: u16;
    u8 PTR_LOOP_1050_5b6a;
    let mut PTR_LOOP_1050_5b64: u16;
    let mut PTR_LOOP_1050_423e: i32
    let mut _PTR_LOOP_1050_5cd0: i32
    let mut _PTR_LOOP_1050_5b78: i32
    let mut _PTR_LOOP_1050_423e: i32
    let mut _PTR_LOOP_1050_5b6c: u32;
    let mut _PTR_LOOP_1050_5b70: u32;
    let mut _PTR_LOOP_1050_5b74: u32;
    let mut s_waveaudio_1050_02a4: *mut c_char;
    let mut s_sequencer_1050_02b3: *mut c_char;
    let mut dat_1050_4230: u16;
    let mut dat_1050_4232: u16;
    HINSTANCE16 hinst_1050_5f4c;
    let mut dat_1050_5f84: u32;
    let mut dat_1050_000c: u16;
    let mut dat_1050_0006: u16;
    let mut dat_1050_000a: u16;
    let mut dat_1050_5f0c: u16;
    let mut dat_1050_5f02: u16;
    let mut dat_1050_5f04: u16;
    let mut dat_1050_5f08: u16;
    let mut dat_1050_0312: u16;
    let mut dat_1050_031c: u16;
    let mut dat_1050_0310: u16;
    let mut dat_1050_0388: i16;
    let mut dat_1050_06e0: u32;
    let mut dat_1050_5812: u16;
    let mut dat_1050_5efe: u32;
    let mut dat_1050_5ee0: u16;
    let mut dat_1050_5bc8: u32;
    let mut dat_1050_5df4: i16;
    let mut dat_1050_5e16: u16;
    let mut data_1050_393f: *mut u8;
} Globals;


static u16 LAST_SEGMENT = 0x1538;
static u16 SEG_1000 = 0x1000;
static u16 SEG_1018 = 0x1018;
static u16 SEG_1010 = 0x1010;
static u16 SEG_1008 = 0x1008;
static u16 SEG_1020 = 0x1020;
static u16 SEG_1028 = 0x1028;
static u16 SEG_1030 = 0x1030;
static u16 SEG_1038 = 0x1038;
static u16 SEG_1040 = 0x1040;
static u16 SEG_1048 = 0x1048;
static u16 SEG_1050 = 0x1050;

static u16 DOS_INT_21 = 0x21;


static void *data_1050_4430;
static void *data_1050_4434;
static void *data_1050_4436;
static void *data_1050_4454;
static void *data_1050_443c;
static void *data_1050_4448;
static void *data_1050_446a;
static void *data_1050_447a;
static void *data_1050_443a;
static void *data_1050_4462;
static void *data_1050_4446;
static void *data_1050_4480;
static void *data_1050_447a;
static void *data_1050_4452;
static void *data_1050_4448;
static void *data_1050_4464;
static void *data_1050_4468;
static void *data_1050_4486;
static void *data_1050_4482;
static void *data_1050_4488;
static void *data_1050_448c;
static void *data_1050_4470;
static void *data_1050_4478;
static void *data_1050_448e;
static void *data_1050_4494;
static void *data_1050_44ac;
static void *data_1050_44b2;
static void *data_1050_446e;
static void *data_1050_4496;
static void *data_1050_44a2;
static void *data_1050_44a4;
static void *data_1050_44aa;

#pragma clang diagnostic pop