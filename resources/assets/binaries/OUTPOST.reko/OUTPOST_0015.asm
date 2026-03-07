;;; Segment 0015 (0015:0000)
0015:0000 57 56 8C D9 8E C1 8B FB 8B F0 8B CA D1 E9 FC F3 WV..............
0015:0010 A5 5E 5F C3 90 00 C8 04 00 00 C4 5E 06 26 81 7F .^_........^.&..
0015:0020 14 AD BE 74 13 6A 00 6A 00 6A 0A 90 0E E8 31 1E ...t.j.j.j....1.
0015:0030 B8 FF FF 99 C9 CA 04 00 1E 8E 5E 08 33 DB E8 11 ..........^.3...
0015:0040 00 89 46 FC 89 56 FE 1F 8B 46 FC 8B 56 FE C9 CA ..F..V...F..V...
0015:0050 04 00                                           ..              

;; fn0015_0052: 0015:0052
;;   Called from:
;;     0015:0610 (in fn0015_05E2)
fn0015_0052 proc
	enter	12h,0h
	push	bx
	push	si
	mov	ax,[bx+1Eh]
	mov	dx,[bx+20h]
	mov	[bp-4h],ax
	mov	[bp-2h],dx
	mov	word ptr [bp-6h],0h

l0015_0069:
	mov	bx,[bp-6h]
	add	bx,bx
	mov	si,[bp-14h]
	mov	ax,[bx+si]
	mov	[bp-8h],ax
	or	ax,ax
	jz	00DBh

l0015_007A:
	cmp	word ptr [bp-6h],3h
	jz	00DBh

l0015_0080:
	mov	word ptr [bp-0Ch],0h

l0015_0085:
	mov	bx,[bp-8h]
	mov	ax,[bx+4h]
	mov	[bp-0Ah],ax
	les	bx,[bx+8h]
	cmp	word ptr es:[bx+0Ah],0h
	jnz	00C4h

l0015_0098:
	mov	[bp-10h],bx
	mov	[bp-0Eh],es
	push	ds
	mov	ds,[bp-0Eh]
	xor	bx,bx
	mov	ax,1h
	call	0510h
	mov	[bp-12h],ax
	pop	ds
	cmp	word ptr [bp-12h],0h
	jz	00F9h

l0015_00B4:
	mov	ax,[bp-8h]
	cmp	[bp-0Ah],ax
	jnz	00D0h

l0015_00BC:
	mov	word ptr [bp-0Ah],0h
	jmp	00D0h
0015:00C3          90                                        .            

l0015_00C4:
	cmp	word ptr [bp-0Ch],0h
	jnz	00D0h

l0015_00CA:
	mov	ax,[bp-8h]
	mov	[bp-0Ch],ax

l0015_00D0:
	mov	ax,[bp-0Ah]
	mov	[bp-8h],ax
	cmp	ax,[bp-0Ch]
	jnz	0085h

l0015_00DB:
	inc	word ptr [bp-6h]
	cmp	word ptr [bp-6h],5h
	jc	0069h

l0015_00E4:
	mov	bx,[bp-14h]
	cmp	word ptr [bx+32h],0h
	jz	00F9h

l0015_00ED:
	mov	ax,[bx+32h]
	mov	[bp-12h],ax
	mov	ax,0FFFFh
	call	word ptr [bp-12h]

l0015_00F9:
	mov	ax,[bp-4h]
	mov	bx,[bp-14h]
	mov	dx,[bp-2h]
	sub	ax,[bx+1Eh]
	sbb	dx,[bx+20h]
	pop	si
	leave
	ret
0015:010B                                  00                        .    

;; fn0015_010C: 0015:010C
;;   Called from:
;;     0015:1A45 (in fn0015_1902)
fn0015_010C proc
	enter	6h,0h
	sub	ax,ax
	mov	[bp-4h],ax
	mov	[bp-6h],ax
	les	bx,[bp+0Ch]
	cmp	word ptr es:[bx+14h],0BEADh
	jz	0134h

l0015_0123:
	push	ax
	push	ax
	push	0Ah

l0015_0127:
	nop
	push	cs
	call	1E61h

l0015_012C:
	mov	ax,0FFFFh
	cwd
	leave
	retf	0Ah

l0015_0134:
	mov	word ptr [5F30h],1h
	mov	ax,[bp+6h]
	dec	ax
	jz	014Ah

l0015_0140:
	dec	ax
	jz	0164h

l0015_0143:
	dec	ax
	dec	ax
	jz	015Ch

l0015_0147:
	jmp	012Ch
0015:0149                            90                            .      

l0015_014A:
	mov	word ptr [bp-2h],1h
	cmp	word ptr es:[bx+18h],0h
	jnz	0169h

l0015_0156:
	push	es
	push	bx
	push	4h
	jmp	0127h

l0015_015C:
	mov	word ptr [bp-2h],0h
	jmp	0169h
0015:0163          90                                        .            

l0015_0164:
	mov	word ptr [bp-2h],2h

l0015_0169:
	push	ds
	mov	ds,[bp+0Eh]

l0015_016D:
	mov	ax,[bp+8h]
	mov	dx,[bp+0Ah]
	cmp	[bp-4h],dx
	ja	01A4h

l0015_0178:
	jc	017Fh

l0015_017A:
	cmp	[bp-6h],ax
	jnc	01A4h

l0015_017F:
	push	0h
	push	word ptr [001Ah]
	xor	bx,bx
	mov	ax,[bp-2h]
	xor	dx,dx
	call	03C6h
	or	dx,ax
	jz	01A4h

l0015_0193:
	mov	bx,1Ah
	sub	dx,dx
	mov	ax,[001Ah]
	add	[bp-6h],ax
	adc	[bp-4h],dx
	jmp	016Dh

l0015_01A4:
	pop	ds
	mov	ax,[bp-6h]
	mov	dx,[bp-4h]
	leave
	retf	0Ah
0015:01AF                                              00                .

;; fn0015_01B0: 0015:01B0
;;   Called from:
;;     0015:0317 (in fn0015_0308)
fn0015_01B0 proc
	enter	0Ch,0h
	push	bx
	push	di
	push	si
	mov	di,bx
	mov	word ptr [bp-0Ch],0h
	mov	ax,[di+40h]
	or	ax,[di+3Eh]
	jnz	01C9h

l0015_01C6:
	jmp	0294h

l0015_01C9:
	push	ds
	push	bx
	nop
	push	cs
	call	1532h
	mov	[bp-4h],ax
	mov	[bp-2h],dx
	or	dx,dx
	jz	01DDh

l0015_01DA:
	jmp	0284h

l0015_01DD:
	cmp	ax,0FFF0h
	jc	01E5h

l0015_01E2:
	jmp	0284h

l0015_01E5:
	cmp	ax,2000h
	jc	01F0h

l0015_01EA:
	mov	si,2000h
	jmp	01F2h
0015:01EF                                              90                .

l0015_01F0:
	mov	si,ax

l0015_01F2:
	push	ds
	push	di
	mov	ax,si
	sub	dx,dx
	add	ax,[bp-4h]
	adc	dx,[bp-2h]
	or	dx,dx
	jnz	0207h

l0015_0202:
	cmp	ax,0FFF0h
	jbe	020Ch

l0015_0207:
	xor	dx,dx
	mov	ax,0FFF0h

l0015_020C:
	mov	[bp-0Ah],ax
	mov	[bp-8h],dx
	push	dx
	push	ax
	mov	ax,[di+16h]
	or	ah,10h
	push	ax
	nop
	push	cs
	call	14F2h
	or	ax,ax
	jnz	0256h

l0015_0224:
	shr	si,1h
	cmp	si,0Ch
	jnc	01F2h

l0015_022B:
	add	si,si
	push	ds
	push	di
	push	2h
	nop
	push	cs
	call	1E61h
	or	ax,ax
	jz	024Ah

l0015_023A:
	push	ds
	push	di
	nop
	push	cs
	call	1532h
	mov	[bp-4h],ax
	mov	[bp-2h],dx
	jmp	01F2h
0015:0249                            90                            .      

l0015_024A:
	cmp	word ptr [di+0Ah],1h
	sbb	ax,ax
	inc	ax
	pop	si
	pop	di
	leave
	ret
0015:0255                90                                    .          

l0015_0256:
	push	0h
	push	0Ch
	mov	ax,[bp-4h]
	mov	dx,[bp-2h]
	sub	ax,42h
	sbb	dx,0h
	push	dx
	push	ax
	nop
	push	cs
	call	5390h
	mov	si,ax
	add	si,ax
	add	si,ax
	shl	si,2h
	add	si,di
	add	si,42h
	mov	ax,[bp-4h]
	mov	dx,[bp-2h]
	jmp	02A4h
0015:0283          90                                        .            

l0015_0284:
	push	ds
	push	di
	push	8h
	nop
	push	cs
	call	1E61h
	xor	ax,ax
	pop	si
	pop	di
	leave
	ret
0015:0293          90                                        .            

l0015_0294:
	lea	si,[di+36h]
	push	ds
	push	di
	nop
	push	cs
	call	1532h
	mov	[bp-0Ah],ax
	mov	[bp-8h],dx

l0015_02A4:
	sub	[di+1Eh],ax
	sbb	[di+20h],dx
	or	si,si
	jz	02DDh

l0015_02AE:
	push	0h
	push	0Ch
	push	ds
	push	di
	nop
	push	cs
	call	1532h
	mov	[bp-0Ah],ax
	mov	[bp-8h],dx
	sub	ax,42h
	sbb	dx,0h
	push	dx
	push	ax
	nop
	push	cs
	call	5390h
	mov	cx,ax
	add	ax,ax
	add	ax,cx
	shl	ax,2h
	add	ax,di
	add	ax,36h
	mov	[bp-0Ch],ax

l0015_02DD:
	mov	ax,[bp-0Ah]
	mov	dx,[bp-8h]
	add	[di+1Eh],ax
	adc	[di+20h],dx
	mov	cx,[di+0Ah]

l0015_02EC:
	mov	[si+4h],cx
	mov	cx,si
	mov	bx,si
	add	si,0Ch
	cmp	[bp-0Ch],bx
	ja	02ECh

l0015_02FB:
	mov	bx,[bp-0Eh]
	mov	ax,1h
	mov	[bx+0Ah],cx
	pop	si
	pop	di
	leave
	ret

;; fn0015_0308: 0015:0308
;;   Called from:
;;     0015:0449 (in fn0015_03C6)
fn0015_0308 proc
	enter	6h,0h
	push	ax
	push	di
	push	si
	mov	si,bx
	cmp	word ptr [si+0Ah],0h
	jnz	031Eh

l0015_0317:
	call	01B0h
	or	ax,ax
	jz	0364h

l0015_031E:
	mov	bx,[si+0Ah]
	mov	ax,[bx+4h]
	mov	[si+0Ah],ax
	mov	cx,[bp-8h]
	mov	di,cx
	add	di,cx
	add	di,si
	mov	[bp-6h],di
	cmp	word ptr [di],0h
	jnz	0340h

l0015_0338:
	mov	[bx+6h],bx
	mov	[bx+4h],bx
	jmp	035Dh

l0015_0340:
	mov	ax,[di]
	mov	[bp-4h],ax
	mov	[bx+6h],ax
	mov	di,[bp-4h]
	mov	ax,[di+4h]
	mov	[bx+4h],ax
	mov	di,[di+4h]
	mov	[di+6h],bx
	mov	di,[bp-4h]
	mov	[di+4h],bx

l0015_035D:
	mov	di,[bp-6h]
	mov	ax,bx
	mov	[di],bx

l0015_0364:
	pop	si
	pop	di
	leave
	ret

;; fn0015_0368: 0015:0368
;;   Called from:
;;     0015:057C (in fn0015_0510)
fn0015_0368 proc
	enter	4h,0h
	push	dx
	push	ax
	push	bx
	push	di
	push	si
	mov	si,ax
	cmp	[si+4h],ax
	jnz	0382h

l0015_0378:
	mov	si,dx
	add	si,dx
	mov	word ptr [bx+si],0h
	jmp	03B6h

l0015_0382:
	mov	bx,ax
	mov	si,[bx+6h]
	mov	ax,[bx+4h]
	mov	[si+4h],ax
	mov	si,[bx+4h]
	mov	ax,[bx+6h]
	mov	[si+6h],ax
	mov	bx,[bp-0Ah]
	mov	di,[bp-6h]
	mov	ax,[bp-8h]
	mov	si,di
	add	si,di
	add	si,bx
	mov	[bp-4h],si
	cmp	[si],ax
	jnz	03B6h

l0015_03AC:
	mov	si,ax
	mov	ax,[si+4h]
	mov	si,[bp-4h]
	mov	[si],ax

l0015_03B6:
	mov	si,[bp-8h]
	mov	ax,[bx+0Ah]
	mov	[si+4h],ax
	mov	[bx+0Ah],si
	pop	si
	pop	di
	leave
	ret

;; fn0015_03C6: 0015:03C6
;;   Called from:
;;     0015:018C (in fn0015_010C)
;;     0015:0601 (in fn0015_05E2)
;;     0015:088F (in fn0015_0838)
;;     0015:0BB1 (in fn0015_0B20)
fn0015_03C6 proc
	enter	12h,0h
	push	dx
	push	ax
	push	bx
	mov	[bp-0Ah],bx
	mov	[bp-8h],ds
	mov	ax,[bp+4h]
	mov	dx,[bp+6h]
	add	ax,0FFFh
	adc	dx,0h
	and	ax,0F000h
	add	ax,[bx+1Eh]
	adc	dx,[bx+20h]
	cmp	dx,[bx+28h]
	jc	0404h

l0015_03ED:
	ja	03F4h

l0015_03EF:
	cmp	ax,[bx+26h]
	jbe	0404h

l0015_03F4:
	push	ds
	push	bx
	push	7h
	nop
	push	cs
	call	1E61h

l0015_03FD:
	xor	ax,ax
	cwd
	leave
	ret	4h

l0015_0404:
	cmp	word ptr [bp-16h],3h
	jnz	0422h

l0015_040A:
	mov	al,[bp-14h]
	and	ax,1h
	cmp	ax,1h
	cmc
	sbb	ax,ax
	and	ax,100h
	or	ah,20h
	mov	[bp-12h],ax
	jmp	0427h
0015:0421    90                                            .              

l0015_0422:
	mov	word ptr [bp-12h],1000h

l0015_0427:
	push	word ptr [bp+6h]
	push	word ptr [bp+4h]
	mov	ax,[bx+16h]
	or	ax,[bp-12h]
	push	ax
	nop
	push	cs
	call	131Ch
	mov	[bp-10h],ax
	mov	[bp-0Eh],dx
	or	dx,ax
	jz	03FDh

l0015_0443:
	mov	bx,[bp-18h]
	mov	ax,[bp-16h]
	call	0308h
	mov	[bp-2h],ax
	mov	[bp-6h],ax
	mov	[bp-4h],ds
	or	ax,ax
	jnz	0466h

l0015_0459:
	push	word ptr [bp-0Eh]
	push	word ptr [bp-10h]
	nop
	push	cs
	call	13CEh
	jmp	03FDh

l0015_0466:
	mov	ax,[bp-10h]
	mov	bx,[bp-2h]
	mov	dx,[bp-0Eh]
	mov	[bx+8h],ax
	mov	[bx+0Ah],dx
	push	ds
	mov	ds,[bp-0Eh]
	mov	ax,[bp-16h]
	or	ax,0CAD0h
	mov	[000Ch],ax
	mov	ax,[bp-0Ah]
	mov	dx,[bp-8h]
	mov	[0000h],ax
	mov	[0002h],dx
	mov	ax,[bp-6h]
	mov	dx,[bp-4h]
	mov	[0004h],ax
	mov	[0006h],dx
	mov	word ptr [000Ah],0h
	push	word ptr [bp-0Eh]
	push	word ptr [bp-10h]
	nop
	push	cs
	call	1532h
	mov	[bp+4h],ax
	mov	[bp+6h],dx
	mov	ax,[bp-16h]
	dec	ax
	jz	04CAh

l0015_04BC:
	dec	ax
	dec	ax
	jz	04DEh

l0015_04C0:
	mov	ax,[bp+4h]
	xor	bx,bx
	call	09CAh
	jmp	04D8h

l0015_04CA:
	push	word ptr [bp-8h]
	push	word ptr [bp-0Ah]
	mov	ax,[bp+4h]
	xor	bx,bx
	call	0782h

l0015_04D8:
	mov	[bp-0Ch],ax
	jmp	04E8h
0015:04DD                                        90                    .  

l0015_04DE:
	xor	bx,bx
	mov	ax,[bp-14h]
	call	05B4h
	jmp	04D8h

l0015_04E8:
	pop	ds
	mov	bx,[bp-2h]
	mov	ax,[bp-0Ch]
	mov	[bx],ax
	mov	word ptr [bx+2h],8000h
	mov	ax,[bp+4h]
	mov	bx,[bp-18h]
	mov	dx,[bp+6h]
	add	[bx+1Eh],ax
	adc	[bx+20h],dx
	mov	ax,[bp-10h]
	mov	dx,[bp-0Eh]
	leave
	ret	4h
0015:050F                                              00                .

;; fn0015_0510: 0015:0510
;;   Called from:
;;     0015:00A7 (in fn0015_0052)
fn0015_0510 proc
	enter	10h,0h
	push	ax
	push	bx
	mov	ax,[bx]
	mov	dx,[bx+2h]
	mov	[bp-4h],ax
	mov	[bp-2h],dx
	mov	ax,[bx+4h]
	mov	dx,[bx+6h]
	mov	[bp-8h],ax
	mov	[bp-6h],dx
	mov	al,[bx+0Ch]
	and	ax,7h
	mov	[bp-0Ah],ax
	push	ds
	push	bx
	nop
	push	cs
	call	1532h
	mov	[bp-0Eh],ax
	mov	[bp-0Ch],dx
	push	ds
	mov	ds,[bp-2h]
	cmp	word ptr [bp-12h],0h
	jz	0574h

l0015_054D:
	les	bx,[bp-4h]
	mov	ax,es:[bx+1Eh]
	mov	dx,es:[bx+20h]
	sub	ax,[bp-0Eh]
	sbb	dx,[bp-0Ch]
	cmp	dx,es:[bx+24h]
	ja	0574h

l0015_0564:
	jc	056Ch

l0015_0566:
	cmp	ax,es:[bx+22h]
	jnc	0574h

l0015_056C:
	mov	word ptr [bp-10h],0h
	jmp	0595h
0015:0573          90                                        .            

l0015_0574:
	mov	ax,[bp-8h]
	xor	bx,bx
	mov	dx,[bp-0Ah]
	call	0368h
	mov	ax,[bp-0Eh]
	mov	bx,1Eh
	mov	dx,[bp-0Ch]
	sub	[001Eh],ax
	sbb	[0020h],dx
	mov	word ptr [bp-10h],1h

l0015_0595:
	pop	ds
	cmp	word ptr [bp-10h],0h
	jz	05B0h

l0015_059C:
	mov	bx,[bp-14h]
	mov	word ptr [bx+0Ch],0h
	push	ds
	push	bx
	nop
	push	cs
	call	13CEh
	mov	ax,1h
	leave
	ret

l0015_05B0:
	xor	ax,ax
	leave
	ret

;; fn0015_05B4: 0015:05B4
;;   Called from:
;;     0015:04E3 (in fn0015_03C6)
fn0015_05B4 proc
	push	bp
	mov	bp,sp
	push	ax
	push	si
	mov	si,bx
	mov	word ptr [si+0Ah],1h
	mov	word ptr [si+8h],668h
	mov	al,[bp-2h]
	and	ax,2h
	cmp	ax,1h
	cmc
	sbb	al,al
	and	al,2h
	mov	[si+13h],al
	sub	ax,ax
	mov	[si+10h],ax
	mov	[si+0Eh],ax
	pop	si
	leave
	ret
0015:05E1    00                                            .              

;; fn0015_05E2: 0015:05E2
;;   Called from:
;;     0015:0B09 (in fn0015_0A48)
;;     0015:0BE2 (in fn0015_0B20)
fn0015_05E2 proc
	enter	4h,0h
	push	di
	push	si
	mov	si,bx
	mov	di,ax
	add	word ptr [bp+4h],14h
	adc	word ptr [bp+6h],0h

l0015_05F4:
	push	word ptr [bp+6h]
	push	word ptr [bp+4h]
	mov	bx,si
	mov	ax,3h
	mov	dx,di
	call	03C6h
	mov	[bp-4h],ax
	mov	[bp-2h],dx
	or	dx,ax
	jnz	0652h

l0015_060E:
	mov	bx,si
	call	0052h
	mov	[bp-4h],ax
	mov	[bp-2h],dx
	mov	ax,[bp+4h]
	mov	dx,[bp+6h]
	add	ax,0FFFh
	adc	dx,0h
	and	ax,0F000h
	add	ax,[si+1Eh]
	adc	dx,[si+20h]
	cmp	dx,[si+28h]
	ja	065Eh

l0015_0633:
	jc	063Ah

l0015_0635:
	cmp	ax,[si+26h]
	ja	065Eh

l0015_063A:
	mov	ax,[bp-2h]
	or	ax,[bp-4h]
	jnz	05F4h

l0015_0642:
	push	ds
	push	si
	push	2h
	nop
	push	cs
	call	1E61h
	or	ax,ax
	jnz	05F4h

l0015_064F:
	jmp	065Eh
0015:0651    90                                            .              

l0015_0652:
	mov	dx,[bp-2h]
	add	ax,14h
	pop	si
	pop	di
	leave
	ret	4h

l0015_065E:
	xor	ax,ax
	cwd
	pop	si
	pop	di
	leave
	ret	4h
0015:0667                      00 33 DB 33 C0 E8 A1 FE C3        .3.3.....
0015:0670 C8 10 00 00 52 50 57 56 8B FB 8B 76 04 8B 05 8B ....RPWV...v....
0015:0680 55 02 89 46 F8 89 56 FA 1E 53 90 0E E8 A3 0E 89 U..F..V..S......
0015:0690 46 FC 89 56 FE 83 46 EC 14 83 56 EE 00 8B C6 25 F..V..F...V....%
0015:06A0 01 00 3D 01 00 F5 1B C0 25 00 01 8B CE 83 E1 04 ..=.....%.......
0015:06B0 83 F9 01 F5 1B C9 81 E1 00 04 0B C1 C4 1D 26 0B ..............&.
0015:06C0 47 16 8B F0 8B 46 08 0B 46 06 74 70 89 76 04 8B G....F..F.tp.v..
0015:06D0 45 04 8B 55 06 89 46 F4 89 56 F6 1E 57 FF 76 EE E..U..F..V..W.v.
0015:06E0 FF 76 EC 8B 46 04 80 CC 20 50 90 0E E8 19 0D 8B .v..F... P......
0015:06F0 F0 89 56 F2 0B D0 75 11 FF 76 FA FF 76 F8 6A 02 ..V...u..v..v.j.
0015:0700 90 0E E8 5C 17 0B C0 75 D2 8B 46 F2 0B C6 74 1E ...\...u..F...t.
0015:0710 8B 46 F2 C4 5E F4 26 89 77 08 26 89 47 0A 8D 4C .F..^.&.w.&.G..L
0015:0720 14 C4 5E 06 26 89 0F 26 89 47 02 EB 2A 90 C4 5E ..^.&..&.G..*..^
0015:0730 06 2B C0 26 89 47 02 26 89 07 EB 3E 1E 57 FF 76 .+.&.G.&...>.W.v
0015:0740 EE FF 76 EC 81 CE 00 20 56 90 0E E8 A4 0D 0B C0 ..v.... V.......
0015:0750 74 28 8B F7 8C 5E F2 FF 76 F2 56 90 0E E8 D2 0D t(...^..v.V.....
0015:0760 2B 46 FC 1B 56 FE C4 5E F8 26 01 47 1E 26 11 57 +F..V..^.&.G.&.W
0015:0770 20 B8 01 00 5E 5F C9 C2 06 00 33 C0 5E 5F C9 C2  ...^_....3.^_..
0015:0780 06 00                                           ..              

;; fn0015_0782: 0015:0782
;;   Called from:
;;     0015:04D5 (in fn0015_03C6)
fn0015_0782 proc
	push	bp
	mov	bp,sp
	push	ax
	push	si
	mov	word ptr [bx+0Eh],0h
	lea	ax,[bx+14h]
	mov	[bx+10h],ax
	mov	word ptr [bx+8h],9A0h
	les	si,[bp+4h]
	mov	dx,[bp-2h]
	mov	ax,es:[si+18h]
	call	07ACh
	mov	ax,1h
	pop	si
	leave
	ret	4h

;; fn0015_07AC: 0015:07AC
;;   Called from:
;;     0015:07A1 (in fn0015_0782)
fn0015_07AC proc
	enter	4h,0h
	push	ax
	push	bx
	push	di
	push	si
	mov	si,bx
	mov	bx,dx
	mov	di,[si+10h]
	mov	[si+0Eh],di
	sub	si,di
	add	bx,si
	mov	ax,bx
	mov	cx,bx
	sub	dx,dx
	div	word ptr [bp-6h]
	mov	ax,di
	sub	di,dx
	mov	bx,[bp-8h]
	add	cx,di
	mov	[bx+10h],cx
	sub	cx,[bp-6h]
	cmp	cx,ax
	ja	07E2h

l0015_07DE:
	mov	bx,ax
	jmp	07F3h

l0015_07E2:
	mov	bx,ax
	mov	di,[bp-6h]

l0015_07E7:
	mov	ax,bx
	add	ax,di
	mov	[bx],ax
	mov	bx,ax
	cmp	bx,cx
	jc	07E7h

l0015_07F3:
	mov	word ptr [bx],0h
	pop	si
	pop	di
	leave
	ret
0015:07FB                                  00 C8 04 00 00            .....
0015:0800 C4 5E 06 26 81 7F 14 AD BE 74 13 6A 00 6A 00 6A .^.&.....t.j.j.j
0015:0810 0A 90 0E E8 4B 16 33 C0 99 C9 CA 04 00 90 1E 8E ....K.3.........
0015:0820 5E 08 33 DB E8 11 00 89 46 FC 89 56 FE 1F 8B 46 ^.3.....F..V...F
0015:0830 FC 8B 56 FE C9 CA 04 00                         ..V.....        

;; fn0015_0838: 0015:0838
;;   Called from:
;;     0015:0A91 (in fn0015_0A48)
fn0015_0838 proc
	enter	0Ch,0h
	push	bx
	push	di
	push	si
	mov	si,[bx+2h]
	mov	[bp-2h],si
	cmp	word ptr [bx+2h],0h
	jz	085Bh

l0015_084B:
	cmp	word ptr [si],0h
	jz	0853h

l0015_0850:
	jmp	08E6h

l0015_0853:
	mov	si,[si+4h]
	cmp	si,[bp-2h]
	jnz	084Bh

l0015_085B:
	mov	bx,[bp-0Eh]
	cmp	word ptr [bx+18h],0h
	jnz	0874h

l0015_0864:
	push	ds
	push	bx
	push	4h
	nop
	push	cs
	call	1E61h

l0015_086D:
	xor	ax,ax
	cwd
	pop	si
	pop	di
	leave
	ret

l0015_0874:
	mov	ax,[bx+1Ah]
	mov	[bp-4h],ax

l0015_087A:
	mov	ax,[bp-4h]
	sub	dx,dx
	push	dx
	push	ax
	mov	bx,[bp-0Eh]
	mov	di,ax
	mov	ax,1h
	mov	[bp-8h],di
	mov	[bp-6h],dx
	call	03C6h
	or	dx,ax
	jnz	08D6h

l0015_0896:
	mov	bx,[bp-0Eh]
	mov	ax,[bx+1Eh]
	mov	dx,[bx+20h]
	add	ax,[bp-8h]
	adc	dx,[bp-6h]
	cmp	dx,[bx+28h]
	jc	08B1h

l0015_08AA:
	ja	086Dh

l0015_08AC:
	cmp	ax,[bx+26h]
	ja	086Dh

l0015_08B1:
	mov	ax,[bx+18h]
	add	ax,14h
	shr	word ptr [bp-4h],1h
	mov	cx,[bp-4h]
	cmp	ax,cx
	jbe	087Ah

l0015_08C1:
	add	cx,cx
	mov	[bp-4h],cx
	push	ds
	push	bx
	push	2h
	nop
	push	cs
	call	1E61h
	or	ax,ax
	jz	086Dh

l0015_08D3:
	jmp	087Ah
0015:08D5                90                                    .          

l0015_08D6:
	mov	bx,[bp-0Eh]
	mov	si,[bx+2h]
	mov	ax,[si+4h]
	mov	[bp-2h],ax
	jmp	084Bh
0015:08E5                90                                    .          

l0015_08E6:
	mov	ax,[si+8h]
	mov	dx,[si+0Ah]
	mov	[bp-8h],ax
	mov	[bp-6h],dx
	push	ds
	mov	bx,0Eh
	mov	ds,[bp-6h]
	mov	ax,[bx]
	mov	cx,ax
	mov	[bp-4h],ax
	or	ax,ax
	jz	091Ah

l0015_0904:
	mov	di,ax
	mov	dx,[di]
	mov	[bx],dx
	mov	bx,0Ah
	inc	word ptr [000Ah]
	mov	ax,[bp-4h]
	mov	[bp-0Ch],ax
	mov	[bp-0Ah],ds

l0015_091A:
	pop	ds
	cmp	word ptr [bp-4h],0h
	jz	0932h

l0015_0921:
	mov	bx,[bp-0Eh]
	mov	[bx+2h],si
	mov	ax,[bp-0Ch]
	mov	dx,[bp-0Ah]
	pop	si
	pop	di
	leave
	ret
0015:0931    90                                            .              

l0015_0932:
	mov	word ptr [si],0h
	jmp	0853h
0015:0939                            00 C8 04 00 00 8B 46          ......F
0015:0940 08 8B C8 2B DB 8E C0 26 81 3E 0C 00 D1 CA 74 10 ...+...&.>....t.
0015:0950 53 53 6A 0E 90 0E E8 08 15 33 C0 C9 CA 04 00 90 SSj......3......
0015:0960 1E BB 0E 00 8E 5E 08 8B 07 8B 5E 06 89 07 8B 5E .....^....^....^
0015:0970 06 83 3F 00 75 09 C4 1E 04 00 26 C7 07 01 00 8B ..?.u.....&.....
0015:0980 46 06 89 06 0E 00 BB 0A 00 FF 0E 0A 00 75 08 33 F............u.3
0015:0990 DB B8 01 00 E8 79 FB 1F B8 01 00 C9 CA 04 00 00 .....y..........
0015:09A0 56 8B F3 8B 06 0E 00 89 04 0B C0 75 09 C4 1E 04 V..........u....
0015:09B0 00 26 C7 07 01 00 89 36 0E 00 FF 0E 0A 00 75 08 .&.....6......u.
0015:09C0 33 DB B8 01 00 E8 48 FB 5E C3                   3.....H.^.      

;; fn0015_09CA: 0015:09CA
;;   Called from:
;;     0015:04C5 (in fn0015_03C6)
fn0015_09CA proc
	push	di
	push	si
	mov	di,bx
	lea	cx,[di+14h]
	sub	bx,cx
	add	bx,ax
	sub	bx,6h
	and	bl,0FCh
	add	bx,cx
	mov	word ptr [bx],1h
	mov	[di+0Eh],cx
	mov	[bx+4h],bx
	mov	[bx+2h],bx
	mov	[di+10h],bx
	mov	al,[di+0Ch]
	and	al,7h
	cmp	al,2h
	jnz	09FEh

l0015_09F6:
	mov	word ptr [di+12h],8h
	jmp	0A16h
0015:09FD                                        90                    .  

l0015_09FE:
	les	si,[di]
	mov	ax,es:[si+18h]
	add	ax,3h
	sub	ax,8h
	sbb	dx,dx
	not	dx
	and	ax,dx
	add	ax,8h
	mov	[di+12h],ax

l0015_0A16:
	mov	ax,bx
	mov	si,bx
	sub	bx,cx
	mov	[si-2h],bx
	mov	si,cx
	or	bl,2h
	mov	[si],bx
	mov	bx,ax
	mov	[si+4h],ax
	mov	ax,[bx+2h]
	mov	[si+2h],ax
	mov	si,[bx+2h]
	mov	[si+4h],cx
	mov	[bx+2h],cx
	mov	bx,cx
	mov	word ptr [di+8h],0E08h
	mov	ax,[bx]
	and	al,0FCh
	pop	si
	pop	di
	ret

;; fn0015_0A48: 0015:0A48
;;   Called from:
;;     0015:16A4 (in fn0015_167A)
fn0015_0A48 proc
	enter	4h,0h
	push	di
	push	si
	les	bx,[bp+0Ch]
	cmp	word ptr es:[bx+14h],0BEADh
	jz	0A6Eh

l0015_0A59:
	push	0h
	push	0h
	push	0Ah
	nop
	push	cs
	call	1E61h
	xor	ax,ax
	cwd
	pop	si
	pop	di
	leave
	retf	0Ah
0015:0A6D                                        90                    .  

l0015_0A6E:
	push	ds
	mov	bx,18h
	mov	ds,[bp+0Eh]
	mov	ax,[bx]
	sub	dx,dx
	cmp	[bp+0Ah],dx
	ja	0ADAh

l0015_0A7E:
	jc	0A85h

l0015_0A80:
	cmp	[bp+8h],ax
	ja	0ADAh

l0015_0A85:
	cmp	[bp+0Ah],dx
	jnz	0A8Fh

l0015_0A8A:
	cmp	[bp+8h],dx
	jz	0AC2h

l0015_0A8F:
	xor	bx,bx
	call	0838h
	mov	[bp-4h],ax
	mov	[bp-2h],dx
	or	dx,ax
	jz	0B12h

l0015_0A9E:
	test	byte ptr [bp+6h],1h
	jz	0B12h

l0015_0AA4:
	xor	ax,ax
	mov	si,18h
	mov	cx,[0018h]
	mov	bx,[bp-4h]
	mov	dx,[bp-2h]
	mov	di,bx
	mov	es,dx
	shr	cx,1h

l0015_0AB9:
	rep stosw

l0015_0ABB:
	jnc	0B12h

l0015_0ABD:
	stosb
	jmp	0B12h
0015:0AC0 90 90                                           ..              

l0015_0AC2:
	push	word ptr [bp+0Eh]
	push	word ptr [bp+0Ch]
	push	4h
	nop
	push	cs
	call	1E61h
	sub	ax,ax
	mov	[bp-2h],ax
	mov	[bp-4h],ax
	jmp	0B12h
0015:0AD9                            90                            .      

l0015_0ADA:
	mov	bx,1Ch
	mov	ax,[001Ch]
	cmp	[bp+0Ah],dx
	ja	0AFCh

l0015_0AE6:
	jc	0AEDh

l0015_0AE8:
	cmp	[bp+8h],ax
	ja	0AFCh

l0015_0AED:
	mov	ax,[bp+6h]
	and	al,0FDh
	mov	dx,[bp+8h]
	xor	bx,bx
	call	0B20h
	jmp	0B0Ch

l0015_0AFC:
	push	word ptr [bp+0Ah]
	push	word ptr [bp+8h]
	mov	ax,[bp+6h]
	and	al,0FDh
	xor	bx,bx
	call	05E2h

l0015_0B0C:
	mov	[bp-4h],ax
	mov	[bp-2h],dx

l0015_0B12:
	pop	ds
	mov	ax,[bp-4h]
	mov	dx,[bp-2h]
	pop	si
	pop	di
	leave
	retf	0Ah
0015:0B1F                                              00                .

;; fn0015_0B20: 0015:0B20
;;   Called from:
;;     0015:0AF7 (in fn0015_0A48)
fn0015_0B20 proc
	enter	0Eh,0h
	push	dx
	push	ax
	push	bx
	push	di
	push	si
	mov	si,dx
	and	ax,2h
	mov	[bp-2h],ax
	lea	cx,[si+5h]
	and	cl,0FCh
	sub	cx,8h
	sbb	dx,dx
	not	dx
	and	cx,dx
	add	cx,8h
	mov	si,cx
	mov	bx,ax
	add	bx,ax
	add	bx,[bp-14h]
	mov	di,[bx]
	or	di,di
	jz	0B64h

l0015_0B52:
	mov	[bp-4h],di

l0015_0B55:
	cmp	[di],si
	jc	0B5Ch

l0015_0B59:
	jmp	0BF2h

l0015_0B5C:
	mov	di,[di+4h]
	cmp	di,[bp-4h]
	jnz	0B55h

l0015_0B64:
	test	byte ptr [bp-12h],2h
	jz	0B9Eh

l0015_0B6A:
	test	byte ptr [bp-12h],40h
	jnz	0B9Eh

l0015_0B70:
	mov	bx,[bp-14h]
	cmp	word ptr [bx+32h],0h
	jz	0B9Eh

l0015_0B79:
	mov	ax,[bx+32h]
	mov	[bp-6h],ax
	mov	ax,si
	call	word ptr [bp-6h]
	cmp	ax,si
	jc	0B9Eh

l0015_0B88:
	or	byte ptr [bp-12h],40h

l0015_0B8C:
	mov	bx,[bp-2h]
	add	bx,bx
	add	bx,[bp-14h]
	mov	di,[bx]
	mov	ax,[di+4h]
	mov	[bp-4h],ax
	jmp	0B55h

l0015_0B9E:
	test	byte ptr [bp-12h],10h
	jnz	0BB8h

l0015_0BA4:
	mov	bx,[bp-14h]
	push	0h
	push	word ptr [bx+1Ah]
	mov	ax,[bp-2h]
	xor	dx,dx
	call	03C6h
	or	dx,ax
	jnz	0B8Ch

l0015_0BB8:
	test	byte ptr [bp-12h],20h
	jnz	0BEAh

l0015_0BBE:
	lea	ax,[si+0FFFh]
	and	ax,0F000h
	mov	bx,[bp-14h]
	sub	dx,dx
	add	ax,[bx+1Eh]
	adc	dx,[bx+20h]
	cmp	dx,[bx+28h]
	ja	0BEAh

l0015_0BD5:
	jc	0BDCh

l0015_0BD7:
	cmp	ax,[bx+26h]
	ja	0BEAh

l0015_0BDC:
	push	0h
	push	si
	mov	ax,[bp-12h]
	call	05E2h
	pop	si
	pop	di
	leave
	ret
0015:0BE9                            90                            .      

l0015_0BEA:
	xor	ax,ax
	cwd
	pop	si
	pop	di
	leave
	ret
0015:0BF1    90                                            .              

l0015_0BF2:
	mov	ax,[di+8h]
	mov	dx,[di+0Ah]
	mov	[bp-0Ah],ax
	mov	[bp-8h],dx
	push	ds
	mov	ds,[bp-8h]
	xor	bx,bx
	mov	ax,si
	mov	dx,[bp-12h]
	call	0C32h
	mov	[bp-0Eh],ax
	mov	[bp-0Ch],dx
	pop	ds
	mov	ax,[bp-0Ch]
	or	ax,[bp-0Eh]
	jnz	0C1Eh

l0015_0C1B:
	jmp	0B5Ch

l0015_0C1E:
	mov	bx,[bp-2h]
	add	bx,bx
	add	bx,[bp-14h]
	mov	[bx],di
	mov	ax,[bp-0Eh]
	mov	dx,[bp-0Ch]
	pop	si
	pop	di
	leave
	ret

;; fn0015_0C32: 0015:0C32
;;   Called from:
;;     0015:0C09 (in fn0015_0B20)
fn0015_0C32 proc
	enter	8h,0h
	push	dx
	push	ax
	push	bx
	push	di
	push	si
	mov	di,bx
	mov	bx,[di+0Eh]
	mov	[bp-6h],bx
	mov	word ptr [bp-4h],0h

l0015_0C48:
	mov	cx,[bx]
	cmp	[bp-0Ch],cx
	jbe	0CA6h

l0015_0C4F:
	cmp	[bp-4h],cx
	jnc	0C57h

l0015_0C54:
	mov	[bp-4h],cx

l0015_0C57:
	mov	bx,[bx+2h]
	cmp	bx,[bp-6h]
	jnz	0C48h

l0015_0C5F:
	test	byte ptr [bp-0Ah],2h
	jz	0C94h

l0015_0C65:
	test	byte ptr [bp-0Ah],40h
	jnz	0C94h

l0015_0C6B:
	les	bx,[di]
	cmp	word ptr es:[bx+34h],0h
	jz	0C94h

l0015_0C74:
	mov	ax,es:[bx+34h]
	mov	[bp-8h],ax
	mov	bx,di
	mov	ax,[bp-0Ch]
	xor	dx,dx
	call	word ptr [bp-8h]
	mov	[bp-4h],ax
	cmp	ax,[bp-0Ch]
	jc	0C94h

l0015_0C8D:
	mov	bx,[di+0Eh]
	or	bx,bx
	jnz	0C48h

l0015_0C94:
	mov	ax,[bp-4h]
	and	al,0FCh
	les	bx,[di+4h]
	mov	es:[bx],ax
	xor	ax,ax
	cwd
	pop	si
	pop	di
	leave
	ret

l0015_0CA6:
	and	cl,0FCh
	sub	cx,[bp-0Ch]
	mov	si,[bp-0Eh]
	cmp	[si+12h],cx
	jbe	0CE4h

l0015_0CB4:
	mov	si,bx
	mov	cx,bx
	mov	di,bx
	mov	bx,[si+2h]
	mov	si,[di+4h]
	mov	[si+2h],bx
	mov	si,[di+2h]
	mov	ax,[di+4h]
	mov	[si+4h],ax
	or	byte ptr [di],1h
	mov	ax,[di]
	and	al,0FCh
	add	di,ax
	mov	[bp-0Ch],ax
	mov	ax,[di]
	or	al,2h
	mov	[di],ax
	mov	[bp-6h],cx
	jmp	0D68h

l0015_0CE4:
	mov	di,cx
	test	byte ptr [bp-0Ah],6h
	jz	0D40h

l0015_0CEC:
	mov	si,bx
	mov	al,[si]
	and	ax,2h
	or	ax,[bp-0Ch]
	or	al,1h
	mov	[si],ax
	mov	ax,[si+2h]
	mov	si,[si+4h]
	mov	[si+2h],ax
	mov	si,bx
	mov	ax,[si+4h]
	mov	si,[si+2h]
	mov	[si+4h],ax
	mov	[bp-6h],bx
	add	bx,[bp-0Ch]
	mov	[bx+di-2h],di
	mov	ax,di
	or	al,2h
	mov	[bx],ax
	mov	si,[bp-0Eh]
	mov	ax,[si+10h]
	mov	[bp-4h],ax
	mov	[bx+4h],ax
	mov	si,[bp-4h]
	mov	ax,[si+2h]
	mov	[bx+2h],ax
	mov	si,[si+2h]
	mov	[si+4h],bx
	mov	si,[bp-4h]
	mov	[si+2h],bx
	jmp	0D68h

l0015_0D40:
	mov	ax,di
	add	ax,bx
	mov	si,ax
	mov	[bp-6h],ax
	mov	[si-2h],di
	mov	ax,di
	or	al,2h
	mov	[bx],ax
	mov	bx,[bx+2h]
	mov	si,[bp-6h]
	add	si,[bp-0Ch]
	or	byte ptr [si],2h
	mov	ax,[bp-0Ch]
	mov	si,[bp-6h]
	or	al,1h
	mov	[si],ax

l0015_0D68:
	mov	si,[bp-0Eh]
	mov	[si+0Eh],bx
	test	byte ptr [bp-0Ah],1h
	jz	0D8Bh

l0015_0D74:
	xor	ax,ax
	mov	si,[bp-6h]
	mov	cx,[bp-0Ch]
	sub	cx,2h
	lea	di,[si+2h]
	push	ds
	pop	es
	shr	cx,1h

l0015_0D86:
	rep stosw

l0015_0D88:
	jnc	0D8Bh

l0015_0D8A:
	stosb

l0015_0D8B:
	test	byte ptr [bp-0Ah],2h
	jz	0DB4h

l0015_0D91:
	mov	ax,[bx+4h]
	cmp	[bx+2h],ax
	jnz	0DB4h

l0015_0D99:
	mov	bx,[bp-0Eh]
	mov	si,[bx+10h]
	mov	si,[si+2h]
	mov	ax,[si]
	and	al,0FCh
	les	si,[bx+4h]
	mov	es:[si],ax
	les	bx,[bx+4h]
	or	byte ptr es:[bx+3h],80h

l0015_0DB4:
	mov	bx,[bp-0Eh]
	inc	word ptr [bx+0Ah]
	mov	ax,[bp-6h]
	add	ax,2h
	mov	dx,ds
	pop	si
	pop	di
	leave
	ret
0015:0DC6                   C8 06 00 00 8B 46 08 8B C8 2B       .....F...+
0015:0DD0 DB 8E C0 26 8B 06 0C 00 24 F8 3D D0 CA 74 0F 53 ...&....$.=..t.S
0015:0DE0 53 6A 0E 90 0E E8 79 10 33 C0 C9 CA 04 00 1E BB Sj....y.3.......
0015:0DF0 08 00 8E 5E 08 8B 07 89 46 FA 8B 5E 06 FF 56 FA ...^....F..^..V.
0015:0E00 1F B8 01 00 C9 CA 04 00 57 56 8D 4F FE BF 01 00 ........WV.O....
0015:0E10 8B D9 F6 07 02 75 0F 2B 4F FE 8B 07 8B D9 24 FC .....u.+O.....$.
0015:0E20 01 07 33 FF EB 03 80 27 FE 8B 1F 80 E3 FC 03 D9 ..3....'........
0015:0E30 F6 07 01 75 2D 8B 07 8B F1 24 FC 01 04 3B 1E 0E ...u-....$...;..
0015:0E40 00 75 04 89 0E 0E 00 8B 77 04 8B 47 02 89 44 02 .u......w..G..D.
0015:0E50 8B 77 02 8B 47 04 8B D9 89 44 04 8B 1F 80 E3 FC .w..G....D......
0015:0E60 03 D9 8B F1 8B 04 24 FC 89 47 FE C4 36 04 00 26 ......$..G..6..&
0015:0E70 8B 04 39 47 FE 76 0D 8B F1 8B 04 8B 36 04 00 24 ..9G.v......6..$
0015:0E80 FC 26 89 04 80 27 FD 0B FF 74 38 8B 06 10 00 8B .&...'...t8.....
0015:0E90 D8 39 47 02 74 09 C4 1E 04 00 26 80 67 03 7F 8B .9G.t.....&.g...
0015:0EA0 F1 8B 06 10 00 89 44 04 8B 3E 10 00 8B 45 02 89 ......D..>...E..
0015:0EB0 44 02 8B 3E 10 00 8B 7D 02 89 4D 04 8B 1E 10 00 D..>...}..M.....
0015:0EC0 89 4F 02 FF 0E 0A 00 75 08 33 DB B8 01 00 E8 3F .O.....u.3.....?
0015:0ED0 F6 5E 5F C3 C8 0A 00 00 57 56 8B 46 0E 8B C8 2B .^_.....WV.F...+
0015:0EE0 DB 8E C0 26 8B 06 0C 00 24 F8 3D D0 CA 74 13 53 ...&....$.=..t.S
0015:0EF0 53 6A 0E 90 0E E8 69 0F 33 C0 99 5E 5F C9 CA 0A Sj....i.3..^_...
0015:0F00 00 90 1E 33 DB 8E 5E 0E 8B 07 8B 57 02 89 46 FC ...3..^....W..F.
0015:0F10 89 56 FE F6 46 06 08 74 05 33 C0 99 EB 05 8D 46 .V..F..t.3.....F
0015:0F20 0C 8C D2 89 46 F6 89 56 F8 52 50 FF 76 06 8B 5E ....F..V.RP.v..^
0015:0F30 0C 8B 46 08 8B 56 0A E8 7E 00 89 46 FA 1F 83 7E ..F..V..~..F...~
0015:0F40 FA 00 75 0C 8B 46 0C 8B 56 0E 5E 5F C9 CA 0A 00 ..u..F..V.^_....
0015:0F50 F6 46 06 08 75 4C FF 76 FE FF 76 FC FF 76 0A FF .F..uL.v..v..v..
0015:0F60 76 08 FF 76 06 90 0E E8 DE FA 89 46 F6 89 56 F8 v..v.......F..V.
0015:0F70 0B D0 74 21 8B 46 0C 8B 56 0E 8B 4E FA 1E 8B F0 ..t!.F..V..N....
0015:0F80 8E DA C4 7E F6 D1 E9 F3 A5 13 C9 F3 A4 1F 52 50 ...~..........RP
0015:0F90 90 0E E8 31 FE 8B 46 F6 8B 56 F8 5E 5F C9 CA 0A ...1..F..V.^_...
0015:0FA0 00 90 8B 46 0A 0B 46 08 75 03 E9 4B FF FF 76 FE ...F..F.u..K..v.
0015:0FB0 FF 76 FC 6A 05 E9 3B FF C8 08 00 00 52 50 53 57 .v.j..;.....RPSW
0015:0FC0 56 8B C2 0B 46 F4 75 32 8B 76 06 FF 36 02 00 FF V...F.u2.v..6...
0015:0FD0 36 00 00 6A 04 90 0E E8 87 0E 8B 46 08 0B C6 74 6..j.......F...t
0015:0FE0 0F 8E 46 08 2B C0 26 89 44 02 26 89 04 E9 64 01 ..F.+.&.D.&...d.
0015:0FF0 B8 01 00 5E 5F C9 C2 06 00 90 8A 06 0C 00 25 07 ...^_.........%.
0015:1000 00 74 29 48 75 03 E9 D1 00 48 74 20 48 75 03 E9 .t)Hu....Ht Hu..
0015:1010 E4 00 8B 5E 06 8B 46 08 0B C3 74 D4 8E 46 08 2B ...^..F...t..F.+
0015:1020 C0 26 89 47 02 26 89 07 E9 29 01 90 8B 76 F2 83 .&.G.&...)...v..
0015:1030 EE 02 8B 04 25 FC 7F 2D 02 00 89 46 FE F6 44 01 ....%..-...F..D.
0015:1040 80 74 04 83 6E FE 04 8B 46 FE 2B D2 3B 56 F6 77 .t..n...F.+.;V.w
0015:1050 25 72 05 3B 46 F4 73 1E C4 1E 00 00 26 8B 47 1C %r.;F.s.....&.G.
0015:1060 3B 56 F6 77 11 72 05 3B 46 F4 73 0A 8B 46 FE 5E ;V.w.r.;F.s..F.^
0015:1070 5F C9 C2 06 00 90 8B 46 F4 8B DE E8 DE 00 0B C0 _......F........
0015:1080 74 EA F6 46 04 01 75 03 E9 C9 00 8B 04 25 FC 7F t..F..u......%..
0015:1090 2D 02 00 89 46 FC 8B 46 FE 39 46 F4 76 20 33 C0 -...F..F.9F.v 3.
0015:10A0 8B 5E FE 03 5E F2 8B 4E FC 2B 4E FE 8B FB 1E 07 .^..^..N.+N.....
0015:10B0 D1 E9 F3 AB 72 03 E9 9B 00 AA E9 97 00 90 8B 46 ....r..........F
0015:10C0 FC 39 46 F4 72 03 E9 8B 00 33 C0 8B 5E F4 03 5E .9F.r....3..^..^
0015:10D0 F2 8B 4E FC 2B 4E F4 EB D3 90 C4 1E 00 00 2B D2 ..N.+N........+.
0015:10E0 26 8B 47 18 3B 56 F6 77 6B 72 6B 3B 46 F4 73 64 &.G.;V.wkrk;F.sd
0015:10F0 5E 5F C9 C2 06 00 8B 76 06 8B 46 08 0B C6 74 34 ^_.....v..F...t4
0015:1100 C4 1E 00 00 2B D2 26 8B 47 1C 3B 56 F6 72 25 77 ....+.&.G.;V.r%w
0015:1110 05 3B 46 F4 72 1E 1E FF 76 F2 90 0E E8 65 01 3B .;F.r...v....e.;
0015:1120 56 F6 72 32 77 05 3B 46 F4 76 2B 8B 46 F4 5E 5F V.r2w.;F.v+.F.^_
0015:1130 C9 C2 06 00 FF 76 08 56 FF 76 04 33 DB 8B 46 F4 .....v.V.v.3..F.
0015:1140 8B 56 F6 E8 2A F5 0B C0 75 0A 8B 46 08 0B C6 75 .V..*...u..F...u
0015:1150 03 E9 9C FE 33 C0 5E 5F C9 C2 06 00 C8 06 00 00 ....3.^_........
0015:1160 57 56 8B FB 8B C8 8B 05 25 FC 7F 89 46 FA 8B D1 WV......%...F...
0015:1170 83 C2 05 80 E2 FC 83 EA 08 1B F6 F7 D6 23 D6 83 .............#..
0015:1180 C2 08 8B CA 3B C8 77 52 2B C2 89 46 FE 3B 06 12 ....;.wR+..F.;..
0015:1190 00 73 03 E9 D0 00 8B 5E FA 03 DF F6 07 01 75 26 .s.....^......u&
0015:11A0 8B 07 24 FC 01 46 FE 3B 1E 0E 00 75 07 8B 47 02 ..$..F.;...u..G.
0015:11B0 89 06 0E 00 8B 77 04 8B 47 02 89 44 02 8B 77 02 .....w..G..D..w.
0015:11C0 8B 47 04 89 44 04 C4 1E 04 00 26 8B 07 39 46 FE .G..D.....&..9F.
0015:11D0 76 53 8B 46 FE 26 89 07 EB 4B 8B D8 03 DF F6 07 vS.F.&...K......
0015:11E0 01 74 03 E9 98 00 8B 07 24 FC 03 46 FA 3B C2 73 .t......$..F.;.s
0015:11F0 03 E9 8A 00 3B 1E 0E 00 75 07 8B 47 02 89 06 0E ....;...u..G....
0015:1200 00 8B 77 04 8B 47 02 89 44 02 8B 77 02 8B 47 04 ..w..G..D..w..G.
0015:1210 89 44 04 8B 07 24 FC 03 46 FA 2B C2 89 46 FE 3B .D...$..F.+..F.;
0015:1220 06 12 00 72 49 8B 05 25 03 80 0B C2 89 05 8B 46 ...rI..%.......F
0015:1230 FE 8B DA 0C 02 89 01 03 DF 8B 06 10 00 89 47 04 ..............G.
0015:1240 8B 36 10 00 8B 44 02 89 47 02 8B 36 10 00 8B 74 .6...D..G..6...t
0015:1250 02 89 5C 04 8B 36 10 00 89 5C 02 8B 46 FE 03 D8 ..\..6...\..F...
0015:1260 89 47 FE 80 27 FD B8 01 00 5E 5F C9 C3 90 8B 07 .G..'....^_.....
0015:1270 24 FC 01 05 8B 37 83 E6 FC 80 08 02 EB E8 33 C0 $....7........3.
0015:1280 5E 5F C9 C3 C8 08 00 00 8B 46 08 8B C8 2B DB 8E ^_.......F...+..
0015:1290 C0 89 5E F8 26 8B 06 0C 00 24 F8 3D D0 CA 74 12 ..^.&....$.=..t.
0015:12A0 53 53 6A 0E 90 0E E8 B8 0B B8 FF FF 99 C9 CA 04 SSj.............
0015:12B0 00 90 8B 5E F8 26 8A 47 0C 25 07 00 74 0C 48 74 ...^.&.G.%..t.Ht
0015:12C0 37 48 74 06 48 74 3F EB E0 90 C4 5E 06 26 8B 47 7Ht.Ht?....^.&.G
0015:12D0 FE 8B C8 25 FC 7F 2D 02 00 89 46 FC C7 46 FE 00 ...%..-...F..F..
0015:12E0 00 F6 C5 80 74 08 83 6E FC 04 83 5E FE 00 8B 46 ....t..n...^...F
0015:12F0 FC 8B 56 FE C9 CA 04 00 26 C4 1F 2B D2 26 8B 47 ..V.....&..+.&.G
0015:1300 18 C9 CA 04 00 90 8B D1 2B C9 52 51 90 0E E8 21 ........+.RQ...!
0015:1310 02 2D 14 00 83 DA 00 C9 CA 04 00 90             .-..........    

;; fn0015_131C: 0015:131C
;;   Called from:
;;     0015:0435 (in fn0015_03C6)
;;     0015:1949 (in fn0015_1902)
fn0015_131C proc
	enter	8h,0h
	push	di
	push	si
	mov	bx,[bp+6h]
	mov	si,32h
	mov	word ptr [bp-4h],1h
	test	bh,10h
	jz	1348h

l0015_1332:
	cmp	word ptr [bp+0Ah],0h
	jnz	133Eh

l0015_1338:
	cmp	word ptr [bp+8h],0F0h
	jbe	1348h

l0015_133E:
	mov	word ptr [bp+8h],0FFF0h
	mov	word ptr [bp+0Ah],0h

l0015_1348:
	test	bh,1h
	jz	1350h

l0015_134D:
	mov	si,72h

l0015_1350:
	test	bl,1h
	jz	1359h

l0015_1355:
	or	si,2000h

l0015_1359:
	mov	al,bl
	and	al,4h
	jz	1371h

l0015_135F:
	and	si,0FDh
	mov	ax,[bp+8h]
	mov	dx,[bp+0Ah]
	call	1558h
	mov	[bp-8h],ax
	mov	[bp-6h],dx

l0015_1371:
	mov	di,[bp-4h]

l0015_1374:
	push	si
	push	word ptr [bp+0Ah]
	push	word ptr [bp+8h]
	call	far 045Fh:0038h
	mov	[bp-2h],ax
	or	ax,ax
	jnz	1391h

l0015_1387:
	and	si,0CFh
	mov	ax,di
	dec	di
	or	ax,ax
	jnz	1374h

l0015_1391:
	mov	al,[bp+6h]
	and	al,4h
	jz	13AFh

l0015_1398:
	cmp	word ptr [bp-2h],0h
	jz	13A6h

l0015_139E:
	push	word ptr [bp-2h]
	call	far 045Fh:00A8h

l0015_13A6:
	push	word ptr [bp-6h]
	push	word ptr [bp-8h]
	call	15CEh

l0015_13AF:
	cmp	word ptr [bp-2h],0h
	jz	13C4h

l0015_13B5:
	push	word ptr [bp-2h]
	call	far 045Fh:0058h
	pop	si
	pop	di
	leave
	retf	6h
0015:13C3          90                                        .            

l0015_13C4:
	xor	ax,ax
	cwd
	pop	si
	pop	di
	leave
	retf	6h
0015:13CD                                        00                    .  

;; fn0015_13CE: 0015:13CE
;;   Called from:
;;     0015:0460 (in fn0015_03C6)
;;     0015:05A7 (in fn0015_0510)
;;     0015:1BCC (in fn0015_1B9A)
;;     0015:1C11 (in fn0015_1B9A)
;;     0015:1C30 (in fn0015_1B9A)
fn0015_13CE proc
	enter	2h,0h
	push	word ptr [bp+8h]
	call	far 045Fh:0070h
	mov	[bp-2h],ax
	mov	ax,ds
	cmp	ax,[bp+8h]
	jnz	13E8h

l0015_13E4:
	xor	ax,ax
	mov	ds,ax

l0015_13E8:
	cmp	word ptr [bp-2h],0h
	jz	1402h

l0015_13EE:
	push	word ptr [bp-2h]
	call	far 045Fh:0050h
	cmp	ax,1h
	sbb	ax,ax
	neg	ax
	leave
	retf	4h
0015:1401    90                                            .              

l0015_1402:
	xor	ax,ax
	leave
	retf	4h

;; fn0015_1408: 0015:1408
;;   Called from:
;;     0015:151D (in fn0015_14F2)
fn0015_1408 proc
	enter	0Ch,0h
	push	word ptr [bp+0Eh]
	call	far 045Fh:0070h
	mov	[bp-2h],ax
	mov	word ptr [bp-6h],32h
	mov	word ptr [bp-8h],0h
	mov	word ptr [bp-0Ah],1h
	test	byte ptr [bp+7h],10h
	jz	1442h

l0015_142C:
	cmp	word ptr [bp+0Ah],0h
	jnz	1438h

l0015_1432:
	cmp	word ptr [bp+8h],0F0h
	jbe	1442h

l0015_1438:
	mov	word ptr [bp+8h],0FFF0h
	mov	word ptr [bp+0Ah],0h

l0015_1442:
	test	byte ptr [bp+7h],1h
	jz	144Ch

l0015_1448:
	or	byte ptr [bp-6h],40h

l0015_144C:
	test	word ptr [bp+6h],804h
	jz	1457h

l0015_1453:
	and	byte ptr [bp-6h],0FDh

l0015_1457:
	or	ax,ax
	jnz	145Eh

l0015_145B:
	jmp	14ECh

l0015_145E:
	test	byte ptr [bp+6h],4h
	jz	146Ah

l0015_1464:
	push	ax
	call	far 045Fh:00B0h

l0015_146A:
	cmp	word ptr [bp+0Ah],0h
	jnz	1476h

l0015_1470:
	cmp	word ptr [bp+8h],0F0h
	jbe	1486h

l0015_1476:
	mov	ax,ds
	cmp	ax,[bp+0Eh]
	jnz	1481h

l0015_147D:
	xor	ax,ax
	mov	ds,ax

l0015_1481:
	mov	word ptr [bp-8h],1h

l0015_1486:
	push	word ptr [bp-2h]
	push	word ptr [bp+0Ah]
	push	word ptr [bp+8h]
	push	word ptr [bp-6h]
	call	far 045Fh:0040h
	mov	[bp-4h],ax
	or	ax,ax
	jnz	14ACh

l0015_149E:
	and	byte ptr [bp-6h],0CFh
	mov	ax,[bp-0Ah]
	dec	word ptr [bp-0Ah]
	or	ax,ax
	jnz	1486h

l0015_14AC:
	cmp	word ptr [bp-8h],0h
	jz	14C3h

l0015_14B2:
	cmp	word ptr [bp-4h],0h
	jz	14C0h

l0015_14B8:
	mov	ax,[bp-2h]
	cmp	[bp-4h],ax
	jnz	14C3h

l0015_14C0:
	mov	ds,[bp+0Eh]

l0015_14C3:
	cmp	word ptr [bp-4h],0h
	jz	14D7h

l0015_14C9:
	test	byte ptr [bp+6h],4h
	jz	14D7h

l0015_14CF:
	push	word ptr [bp-4h]
	call	far 045Fh:00A8h

l0015_14D7:
	cmp	word ptr [bp-4h],0h
	jz	14EAh

l0015_14DD:
	push	word ptr [bp-4h]
	call	far 045Fh:0058h
	leave
	retf	0Ah
0015:14E9                            90                            .      

l0015_14EA:
	xor	ax,ax

l0015_14EC:
	cwd
	leave
	retf	0Ah
0015:14F1    00                                            .              

;; fn0015_14F2: 0015:14F2
;;   Called from:
;;     0015:021C (in fn0015_01B0)
fn0015_14F2 proc
	push	bp
	mov	bp,sp
	mov	cx,[bp+6h]
	test	ch,10h
	jnz	1509h

l0015_14FD:
	cmp	word ptr [bp+0Ah],0h
	jnz	152Ch

l0015_1503:
	cmp	word ptr [bp+8h],0F0h
	ja	152Ch

l0015_1509:
	push	word ptr [bp+0Eh]
	push	word ptr [bp+0Ch]
	push	word ptr [bp+0Ah]
	push	word ptr [bp+8h]
	and	ch,0FDh
	or	ch,8h
	push	cx
	nop
	push	cs
	call	1408h
	or	dx,ax
	jz	152Ch

l0015_1525:
	mov	ax,1h
	leave
	retf	0Ah

l0015_152C:
	xor	ax,ax
	leave
	retf	0Ah

;; fn0015_1532: 0015:1532
;;   Called from:
;;     0015:01CC (in fn0015_01B0)
;;     0015:023D (in fn0015_01B0)
;;     0015:029A (in fn0015_01B0)
;;     0015:02B5 (in fn0015_01B0)
;;     0015:04AC (in fn0015_03C6)
;;     0015:0539 (in fn0015_0510)
;;     0015:19D7 (in fn0015_1902)
fn0015_1532 proc
	push	bp
	mov	bp,sp
	push	si
	push	word ptr [bp+8h]
	call	far 045Fh:0070h
	mov	si,ax
	or	si,ax
	jz	1550h

l0015_1544:
	push	si
	call	far 045Fh:0068h
	pop	si
	leave
	retf	4h
0015:154F                                              90                .

l0015_1550:
	xor	ax,ax
	cwd
	pop	si
	leave
	retf	4h

;; fn0015_1558: 0015:1558
;;   Called from:
;;     0015:1368 (in fn0015_131C)
fn0015_1558 proc
	enter	0Ch,0h
	push	dx
	push	ax
	push	si
	sub	ax,ax
	mov	[bp-0Ah],ax
	mov	[bp-0Ch],ax
	mov	[bp-8h],ax
	mov	word ptr [bp-6h],8h
	cmp	dx,8h
	ja	15C4h

l0015_1574:
	jc	157Bh

l0015_1576:
	cmp	[bp-10h],ax
	jnz	15C4h

l0015_157B:
	push	word ptr [bp-6h]
	push	word ptr [bp-8h]
	call	far 045Fh:0098h
	mov	dx,ax
	sub	cx,cx
	mov	si,cx
	mov	[bp-2h],ax
	or	dx,cx
	jz	15ACh

l0015_1593:
	mov	ax,[bp-0Ch]
	mov	dx,[bp-0Ah]
	mov	es,[bp-2h]
	mov	es:[si],ax
	mov	es:[si+2h],dx
	mov	[bp-0Ch],cx
	mov	[bp-0Ah],es
	jmp	157Bh
0015:15AB                                  90                        .    

l0015_15AC:
	mov	ax,[bp-10h]
	mov	dx,[bp-0Eh]
	shr	word ptr [bp-6h],1h
	rcr	word ptr [bp-8h],1h
	cmp	[bp-6h],dx
	ja	157Bh

l0015_15BD:
	jc	15C4h

l0015_15BF:
	cmp	[bp-8h],ax
	jnc	157Bh

l0015_15C4:
	mov	ax,[bp-0Ch]
	mov	dx,[bp-0Ah]
	pop	si
	leave
	ret
0015:15CD                                        00                    .  

;; fn0015_15CE: 0015:15CE
;;   Called from:
;;     0015:13AC (in fn0015_131C)
fn0015_15CE proc
	enter	8h,0h
	push	di
	push	si
	mov	ax,[bp+4h]
	mov	dx,[bp+6h]
	mov	si,ax
	mov	[bp-6h],dx
	or	dx,ax
	jz	1604h

l0015_15E3:
	mov	es,[bp-6h]
	mov	ax,es:[si]
	mov	dx,es:[si+2h]
	mov	di,ax
	mov	[bp-2h],dx
	push	es
	call	far 045Fh:00A0h
	mov	ax,[bp-2h]
	mov	si,di
	mov	[bp-6h],ax
	or	ax,di
	jnz	15E3h

l0015_1604:
	pop	si
	pop	di
	leave
	ret	4h

;; fn0015_160A: 0015:160A
;;   Called from:
;;     0015:1687 (in fn0015_167A)
fn0015_160A proc
	nop
	push	cs
	call	2146h
	or	ax,ax
	jnz	1616h

l0015_1613:
	cwd
	retf
0015:1615                90                                    .          

l0015_1616:
	mov	ax,[5F2Eh]
	or	ax,[5F2Ch]
	jnz	166Dh

l0015_161F:
	mov	ax,1h
	mov	[5F30h],ax
	mov	[5F32h],ax
	push	word ptr [5F46h]
	nop
	push	cs
	call	18ECh
	mov	[5F2Ch],ax
	mov	[5F2Eh],dx
	mov	ax,dx
	or	ax,[5F2Ch]
	jz	166Dh

l0015_1640:
	cmp	word ptr [5F42h],0h
	jz	1655h

l0015_1647:
	push	dx
	push	word ptr [5F2Ch]
	push	word ptr [5F42h]
	nop
	push	cs
	call	1A54h

l0015_1655:
	cmp	word ptr [5F44h],0FFh
	jz	166Dh

l0015_165C:
	push	word ptr [5F2Eh]
	push	word ptr [5F2Ch]
	push	word ptr [5F44h]
	nop
	push	cs
	call	1AFEh

l0015_166D:
	nop
	push	cs
	call	214Ah
	mov	ax,[5F2Ch]
	mov	dx,[5F2Eh]
	retf

;; fn0015_167A: 0015:167A
;;   Called from:
;;     0015:2960 (in fn0015_2950)
fn0015_167A proc
	push	bp
	mov	bp,sp
	mov	ax,[5F2Eh]
	or	ax,[5F2Ch]
	jnz	1694h

l0015_1686:
	nop
	push	cs
	call	160Ah
	or	dx,ax
	jnz	1694h

l0015_168F:
	xor	ax,ax
	cwd
	leave
	retf

l0015_1694:
	push	word ptr [5F2Eh]
	push	word ptr [5F2Ch]
	push	0h
	push	word ptr [bp+6h]
	push	0h
	nop
	push	cs
	call	0A48h
	leave
	retf
0015:16AA                               55 8B EC 8B 46 08           U...F.
0015:16B0 0B 46 06 75 0D FF 76 0A 90 0E E8 BD FF 8B E5 C9 .F.u..v.........
0015:16C0 CB 90 8B 4E 0A 0B C9 75 13 FF 76 08 FF 76 06 90 ...N...u..v..v..
0015:16D0 0E E8 1A 00 8B E5 33 C0 99 C9 CB 90 FF 76 08 FF ......3......v..
0015:16E0 76 06 6A 00 51 6A 00 90 0E E8 E8 F7 C9 CB 55 8B v.j.Qj........U.
0015:16F0 EC 8B 4E 06 8B 46 08 0B C1 74 0A 8B 46 08 50 51 ..N..F...t..F.PQ
0015:1700 90 0E E8 C1 F6 C9 CB 00 C8 04 00 00 57 56 8B 46 ............WV.F
0015:1710 08 0B 46 06 75 08 83 46 06 01 83 56 08 00 8B 76 ..F.u..F...V...v
0015:1720 0C 8B 7E 0A 8B 46 0E 0B C6 74 17 FF 76 0E 56 FF ..~..F...t..v.V.
0015:1730 76 08 FF 76 06 57 90 0E E8 0D F3 89 56 FE 0B D0 v..v.W......V...
0015:1740 75 4A F7 C7 00 80 74 1E A1 3A 5F 0B 06 38 5F 74 uJ....t..:_..8_t
0015:1750 15 6A 01 FF 76 08 FF 76 06 FF 1E 38 5F 83 C4 06 .j..v..v...8_...
0015:1760 0B C0 75 C0 EB 2E A1 36 5F 0B 06 34 5F 74 0D FF ..u....6_..4_t..
0015:1770 76 06 FF 1E 34 5F 83 C4 02 EB E5 90 A1 3E 5F 0B v...4_.......>_.
0015:1780 06 3C 5F 74 0F FF 1E 3C 5F EB 99 90 8B 56 FE 5E .<_t...<_....V.^
0015:1790 5F C9 CB 90 33 C0 99 5E 5F C9 CB 00 C8 04 00 00 _...3..^_.......
0015:17A0 A1 2E 5F 0B 06 2C 5F 74 09 A1 2C 5F 8B 16 2E 5F .._..,_t..,_..._
0015:17B0 EB 05 90 0E E8 53 FE 89 56 FE 52 50 6A 00 6A 00 .....S..V.RPj.j.
0015:17C0 FF 76 06 90 0E E8 40 FF 83 C4 0A C9 CB 00 55 8B .v....@.......U.
0015:17D0 EC 8B 4E 06 8B 46 08 0B C1 74 0A 8B 46 08 50 51 ..N..F...t..F.PQ
0015:17E0 90 0E E8 E1 F5 C9 CB 00 C8 04 00 00 A1 34 5F 8B .............4_.
0015:17F0 16 36 5F 8B D8 89 56 FE 8B 46 06 8B 56 08 A3 34 .6_...V..F..V..4
0015:1800 5F 89 16 36 5F 8B C3 8B 56 FE C9 CB 55 8B EC A1 _..6_...V...U...
0015:1810 2E 5F 0B 06 2C 5F 75 0E 90 0E E8 ED FD 0B D0 75 ._..,_u........u
0015:1820 05 33 C0 99 C9 CB FF 36 2E 5F FF 36 2C 5F 6A 00 .3.....6._.6,_j.
0015:1830 FF 76 06 6A 00 90 0E E8 0E F2 C9 CB C8 04 00 00 .v.j............
0015:1840 8B 46 08 F7 66 06 89 46 FC 89 56 FE 8B DA 2B D2 .F..f..F..V...+.
0015:1850 3B D3 74 06 33 C0 99 C9 CB 90 A1 2E 5F 0B 06 2C ;.t.3......._..,
0015:1860 5F 75 14 90 0E E8 A2 FD A3 2C 5F 89 16 2E 5F 8B _u.......,_..._.
0015:1870 C2 0B 06 2C 5F 74 DD FF 36 2E 5F FF 36 2C 5F FF ...,_t..6._.6,_.
0015:1880 76 FE FF 76 FC 6A 01 90 0E E8 BC F1 C9 CB 55 8B v..v.j........U.
0015:1890 EC 8B 46 08 0B 46 06 75 0D FF 76 0A 90 0E E8 6B ..F..F.u..v....k
0015:18A0 FF 8B E5 C9 CB 90 8B 4E 0A 0B C9 75 13 FF 76 08 .......N...u..v.
0015:18B0 FF 76 06 90 0E E8 1A 00 8B E5 33 C0 99 C9 CB 90 .v........3.....
0015:18C0 FF 76 08 FF 76 06 6A 00 51 6A 00 90 0E E8 04 F6 .v..v.j.Qj......
0015:18D0 C9 CB 55 8B EC 8B 4E 06 8B 46 08 0B C1 74 0A 8B ..U...N..F...t..
0015:18E0 46 08 50 51 90 0E E8 DD F4 C9 CB 90             F.PQ........    

;; fn0015_18EC: 0015:18EC
;;   Called from:
;;     0015:162D (in fn0015_160A)
fn0015_18EC proc
	push	bp
	mov	bp,sp
	push	0Ch
	push	0h
	push	0h
	push	word ptr [bp+6h]
	nop
	push	cs
	call	1902h
	leave
	retf	2h
0015:1901    00                                            .              

;; fn0015_1902: 0015:1902
;;   Called from:
;;     0015:18F9 (in fn0015_18EC)
;;     0045:54E3 (in fn0045_54AA)
fn0015_1902 proc
	enter	4h,0h
	push	di
	push	si
	test	byte ptr [bp+7h],80h
	jz	1927h

l0015_190E:
	mov	bx,1E70h
	mov	cx,15h
	add	bx,1h
	adc	cx,0h
	mov	es,cx
	cmp	word ptr es:[bx],9090h
	jz	1927h

l0015_1923:
	or	byte ptr [bp+6h],1h

l0015_1927:
	mov	ax,5F1Ah
	mov	cx,ds
	or	cx,ax
	jnz	193Ah

l0015_1930:
	xor	ax,ax
	cwd
	pop	si
	pop	di
	leave
	retf	8h
0015:1939                            90                            .      

l0015_193A:
	push	0h
	push	100h
	mov	ax,[bp+6h]
	and	al,0FBh
	or	ah,10h
	push	ax
	nop
	push	cs
	call	131Ch
	mov	si,ax
	mov	[bp-2h],dx
	or	dx,ax
	jnz	1965h

l0015_1956:
	push	0h
	push	0h
	push	2h
	nop
	push	cs
	call	1E61h
	or	ax,ax
	jnz	193Ah

l0015_1965:
	mov	ax,[bp-2h]
	or	ax,si
	jz	1930h

l0015_196C:
	mov	ax,5F1Ah
	mov	es,[bp-2h]
	mov	es:[si+2Eh],ax
	mov	bx,ax
	mov	es:[si+30h],ds
	mov	ax,[bx+4h]
	mov	dx,[bx+6h]
	mov	es:[si+2Ah],ax
	mov	es:[si+2Ch],dx
	mov	[bx+4h],si
	mov	[bx+6h],es
	xor	ax,ax
	mov	cx,5h
	mov	di,si

l0015_1997:
	rep stosw

l0015_1999:
	mov	di,[bp+0Ch]
	mov	es,[bp-2h]
	mov	es:[si+0Ah],ax
	mov	es:[si+0Eh],ax
	mov	es:[si+0Ch],ax
	mov	es:[si+12h],ax
	mov	es:[si+10h],ax
	mov	word ptr es:[si+14h],0BEADh
	mov	ax,[bp+6h]
	and	al,0FDh
	mov	es:[si+16h],ax
	mov	word ptr es:[si+18h],0h
	mov	word ptr es:[si+1Ah],2000h
	mov	word ptr es:[si+1Ch],800h
	push	es
	push	si
	nop
	push	cs
	call	1532h
	mov	es,[bp-2h]
	mov	es:[si+1Eh],ax
	mov	es:[si+20h],dx
	sub	ax,ax
	mov	es:[si+24h],ax
	mov	es:[si+22h],ax
	mov	word ptr es:[si+26h],0FFFEh
	mov	word ptr es:[si+28h],0FFFFh
	mov	es:[si+32h],ax
	mov	es:[si+34h],ax
	mov	es:[si+40h],ax
	mov	es:[si+3Eh],ax
	push	es
	push	si
	push	di
	nop
	push	cs
	call	1AFEh
	or	ax,ax
	jnz	1A26h

l0015_1A18:
	push	word ptr [bp-2h]
	push	si
	push	ax
	nop
	push	cs
	call	1B9Ah
	jmp	1930h
0015:1A25                90                                    .          

l0015_1A26:
	mov	ax,[bp+0Ah]
	or	ax,[bp+8h]
	jz	1A49h

l0015_1A2E:
	push	word ptr [bp-2h]
	push	si
	push	0h
	push	di
	push	word ptr [bp+0Ah]
	push	word ptr [bp+8h]
	nop
	push	cs
	call	52BEh
	push	dx
	push	ax
	push	1h
	nop
	push	cs
	call	010Ch

l0015_1A49:
	mov	ax,si
	mov	dx,[bp-2h]
	pop	si
	pop	di
	leave
	retf	8h

;; fn0015_1A54: 0015:1A54
;;   Called from:
;;     0015:1651 (in fn0015_160A)
fn0015_1A54 proc
	push	bp
	mov	bp,sp
	push	di
	push	si
	mov	di,[bp+8h]
	mov	es,[bp+0Ah]
	cmp	word ptr es:[di+14h],0BEADh
	jz	1A7Ah

l0015_1A67:
	push	0h
	push	0h
	push	0Ah
	nop
	push	cs
	call	1E61h
	xor	ax,ax
	pop	si
	pop	di
	leave
	retf	6h

l0015_1A7A:
	mov	si,[bp+6h]
	mov	ax,si
	call	1AB0h
	mov	si,ax
	mov	es,[bp+0Ah]
	mov	ax,es:[di+18h]
	add	ax,14h
	cmp	ax,si
	jbe	1A96h

l0015_1A92:
	xor	cx,cx
	jmp	1AA7h

l0015_1A96:
	mov	cx,es:[di+1Ah]
	mov	es:[di+1Ah],si
	mov	ax,si
	shr	ax,2h
	mov	es:[di+1Ch],ax

l0015_1AA7:
	mov	ax,cx
	pop	si
	pop	di
	leave
	retf	6h
0015:1AAF                                              00                .

;; fn0015_1AB0: 0015:1AB0
;;   Called from:
;;     0015:1A7F (in fn0015_1A54)
fn0015_1AB0 proc
	push	di
	push	si
	mov	di,ax
	cmp	di,2000h
	jz	1AFAh

l0015_1ABA:
	cmp	di,0F0h
	jc	1AC6h

l0015_1ABF:
	mov	ax,0FFF0h
	pop	si
	pop	di
	ret
0015:1AC5                90                                    .          

l0015_1AC6:
	cmp	di,1000h
	ja	1AD2h

l0015_1ACC:
	mov	ax,1000h
	pop	si
	pop	di
	ret

l0015_1AD2:
	mov	si,2000h
	cmp	di,si
	jbe	1AF0h

l0015_1AD9:
	add	si,si
	jz	1ABFh

l0015_1ADD:
	cmp	si,di
	jc	1AD9h

l0015_1AE1:
	mov	ax,si
	sub	ax,0FFF0h
	sbb	cx,cx
	and	ax,cx
	add	ax,0FFF0h
	pop	si
	pop	di
	ret

l0015_1AF0:
	shr	si,1h
	cmp	si,di
	jnc	1AF0h

l0015_1AF6:
	mov	ax,si
	add	ax,si

l0015_1AFA:
	pop	si
	pop	di
	ret
0015:1AFD                                        00                    .  

;; fn0015_1AFE: 0015:1AFE
;;   Called from:
;;     0015:1669 (in fn0015_160A)
;;     0015:1A10 (in fn0015_1902)
fn0015_1AFE proc
	push	bp
	mov	bp,sp
	push	di
	push	si
	mov	bx,[bp+6h]
	or	bx,bx
	jz	1B12h

l0015_1B0A:
	lea	cx,[bx+1h]
	and	cl,0FEh
	jmp	1B14h

l0015_1B12:
	xor	cx,cx

l0015_1B14:
	les	si,[bp+8h]
	cmp	word ptr es:[si+14h],0BEADh
	jz	1B32h

l0015_1B1F:
	push	0h
	push	0h
	push	0Ah
	nop
	push	cs
	call	1E61h
	xor	ax,ax
	pop	si
	pop	di
	leave
	retf	6h

l0015_1B32:
	mov	di,si
	cmp	cx,bx
	jc	1B54h

l0015_1B38:
	mov	ax,es:[di+1Ah]
	sub	ax,14h
	cmp	ax,cx
	jc	1B54h

l0015_1B43:
	cmp	word ptr es:[di+2h],0h
	jnz	1B5Dh

l0015_1B4A:
	mov	es:[di+18h],cx
	mov	si,1h
	jmp	1B5Fh
0015:1B53          90                                        .            

l0015_1B54:
	push	es
	push	di
	push	3h
	nop
	push	cs
	call	1E61h

l0015_1B5D:
	xor	si,si

l0015_1B5F:
	mov	ax,si
	pop	si
	pop	di
	leave
	retf	6h
0015:1B67                      00 55 8B EC 56 8B 76 06 8E        .U..V.v..
0015:1B70 46 08 26 81 7C 14 AD BE 74 12 6A 00 6A 00 6A 0A F.&.|...t.j.j.j.
0015:1B80 90 0E E8 DC 02 33 C0 5E C9 CA 04 00 06 56 6A 00 .....3.^.....Vj.
0015:1B90 90 0E E8 05 00 5E C9 CA 04 00                   .....^....      

;; fn0015_1B9A: 0015:1B9A
;;   Called from:
;;     0015:1A1E (in fn0015_1902)
fn0015_1B9A proc
	enter	0Ah,0h
	push	si
	les	bx,[bp+8h]
	mov	word ptr es:[bx+14h],0h
	push	ds
	mov	ds,[bp+0Ah]
	mov	word ptr [bp-2h],0h

l0015_1BB1:
	mov	bx,[bp-2h]
	add	bx,bx
	mov	si,[bx]
	or	si,si
	jz	1BDCh

l0015_1BBC:
	les	bx,[si+8h]
	mov	word ptr es:[bx+0Ch],0h
	push	word ptr [si+0Ah]
	push	word ptr [si+8h]
	nop
	push	cs
	call	13CEh
	mov	si,[si+4h]
	mov	bx,[bp-2h]
	add	bx,bx
	cmp	[bx],si
	jnz	1BBCh

l0015_1BDC:
	inc	word ptr [bp-2h]
	cmp	word ptr [bp-2h],5h
	jc	1BB1h

l0015_1BE5:
	pop	ds
	les	bx,[bp+8h]
	mov	ax,es:[bx+10h]
	mov	dx,es:[bx+12h]

l0015_1BF1:
	mov	[bp-6h],ax
	mov	[bp-4h],dx
	mov	ax,dx
	or	ax,[bp-6h]
	jz	1C1Eh

l0015_1BFE:
	les	bx,[bp-6h]
	mov	ax,es:[bx]
	mov	dx,es:[bx+2h]
	mov	[bp-0Ah],ax
	mov	[bp-8h],dx
	push	es
	push	bx
	nop
	push	cs
	call	13CEh
	mov	ax,[bp-0Ah]
	mov	dx,[bp-8h]
	jmp	1BF1h
0015:1C1D                                        90                    .  

l0015_1C1E:
	push	word ptr [bp+0Ah]
	push	word ptr [bp+8h]
	nop
	push	cs
	call	20A2h
	push	word ptr [bp+0Ah]
	push	word ptr [bp+8h]
	nop
	push	cs
	call	13CEh
	mov	ax,1h
	pop	si
	leave
	retf	6h
0015:1C3C                                     4F 75 74 20             Out 
0015:1C40 6F 66 20 6D 65 6D 6F 72 79 2E 20 20 50 6C 65 61 of memory.  Plea
0015:1C50 73 65 20 66 72 65 65 20 73 6F 6D 65 20 6D 65 6D se free some mem
0015:1C60 6F 72 79 2C 20 74 68 65 6E 20 63 68 6F 6F 73 65 ory, then choose
0015:1C70 20 72 65 74 72 79 2E 00 00 00 00 00 00 00 00 00  retry..........
0015:1C80 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ................
0015:1C90 00 4D 45 4D 5F 49 4E 54 45 52 4E 41 4C 5F 45 52 .MEM_INTERNAL_ER
0015:1CA0 52 4F 52 00 00 00 02 00 00 00 00 00 00 00 00 00 ROR.............
0015:1CB0 00 00 00 00 00 00 00 00 00 00 00 00 00 03 00 4D ...............M
0015:1CC0 45 4D 5F 42 4C 4F 43 4B 5F 54 4F 4F 5F 42 49 47 EM_BLOCK_TOO_BIG
0015:1CD0 00 00 00 00 04 00 4D 45 4D 5F 41 4C 4C 4F 43 5F ......MEM_ALLOC_
0015:1CE0 5A 45 52 4F 00 00 00 00 00 00 00 05 00 4D 45 4D ZERO.........MEM
0015:1CF0 5F 52 45 53 49 5A 45 5F 46 41 49 4C 45 44 00 00 _RESIZE_FAILED..
0015:1D00 00 00 06 00 4D 45 4D 5F 4C 4F 43 4B 5F 45 52 52 ....MEM_LOCK_ERR
0015:1D10 4F 52 00 00 00 00 00 00 00 07 00 4D 45 4D 5F 45 OR.........MEM_E
0015:1D20 58 43 45 45 44 45 44 5F 43 45 49 4C 49 4E 47 00 XCEEDED_CEILING.
0015:1D30 08 00 4D 45 4D 5F 54 4F 4F 5F 4D 41 4E 59 5F 50 ..MEM_TOO_MANY_P
0015:1D40 41 47 45 53 00 00 00 09 00 4D 45 4D 5F 54 4F 4F AGES.....MEM_TOO
0015:1D50 5F 4D 41 4E 59 5F 54 41 53 4B 53 00 00 00 0A 00 _MANY_TASKS.....
0015:1D60 4D 45 4D 5F 42 41 44 5F 4D 45 4D 5F 50 4F 4F 4C MEM_BAD_MEM_POOL
0015:1D70 00 00 00 00 00 0B 00 4D 45 4D 5F 42 41 44 5F 42 .......MEM_BAD_B
0015:1D80 4C 4F 43 4B 00 00 00 00 00 00 00 00 0C 00 4D 45 LOCK..........ME
0015:1D90 4D 5F 42 41 44 5F 46 52 45 45 5F 42 4C 4F 43 4B M_BAD_FREE_BLOCK
0015:1DA0 00 00 00 0D 00 4D 45 4D 5F 42 41 44 5F 48 41 4E .....MEM_BAD_HAN
0015:1DB0 44 4C 45 00 00 00 00 00 00 00 0E 00 4D 45 4D 5F DLE.........MEM_
0015:1DC0 42 41 44 5F 50 4F 49 4E 54 45 52 00 00 00 00 00 BAD_POINTER.....
0015:1DD0 00 0E 00 4D 45 4D 5F 57 52 4F 4E 47 5F 54 41 53 ...MEM_WRONG_TAS
0015:1DE0 4B 00 00 00 00 00 00 00 53 6D 61 72 74 48 65 61 K.......SmartHea
0015:1DF0 70 20 4C 69 62 72 61 72 79 00                   p Library.      

;; fn0015_1DFA: 0015:1DFA
;;   Called from:
;;     0015:21C3 (in fn0015_21B6)
fn0015_1DFA proc
	push	bp
	mov	bp,sp
	mov	al,[bp+6h]
	and	ax,4h
	cmp	ax,1h
	sbb	cx,cx
	and	cx,8200h
	add	ch,18h
	or	ax,ax
	jz	1E19h

l0015_1E13:
	mov	ax,1800h
	jmp	1E2Ah
0015:1E18                         90                              .       

l0015_1E19:
	mov	al,[bp+6h]
	and	ax,2h
	cmp	ax,1h
	sbb	ax,ax
	and	ax,0FE00h
	add	ah,92h

l0015_1E2A:
	mov	dx,ax
	mov	bx,[bp+0Ah]
	or	bx,bx
	jz	1E58h

l0015_1E33:
	lar	ax,bx
	jnz	1E58h

l0015_1E38:
	and	ax,cx
	cmp	ax,dx
	jnz	1E58h

l0015_1E3E:
	mov	cx,[bp+4h]
	jcxz	1E52h

l0015_1E43:
	lsl	ax,bx
	mov	bx,[bp+8h]
	dec	cx
	add	bx,cx
	jc	1E58h

l0015_1E4E:
	cmp	ax,bx
	jc	1E58h

l0015_1E52:
	xor	ax,ax
	leave
	ret	8h

l0015_1E58:
	mov	ax,1h
	leave
	ret	8h
0015:1E5F                                              B8                .
0015:1E60 00                                              .               

;; fn0015_1E61: 0015:1E61
;;   Called from:
;;     0015:0128 (in fn0015_010C)
;;     0015:0232 (in fn0015_01B0)
;;     0015:0289 (in fn0015_01B0)
;;     0015:03F9 (in fn0015_03C6)
;;     0015:0647 (in fn0015_05E2)
;;     0015:0869 (in fn0015_0838)
;;     0015:08CB (in fn0015_0838)
;;     0015:0A60 (in fn0015_0A48)
;;     0015:0ACB (in fn0015_0A48)
;;     0015:195D (in fn0015_1902)
;;     0015:1A6E (in fn0015_1A54)
;;     0015:1B26 (in fn0015_1AFE)
;;     0015:1B59 (in fn0015_1AFE)
fn0015_1E61 proc
	cmp	word ptr cs:[1E71h],9090h
	jnz	1E6Ch

l0015_1E6A:
	mov	ax,ss

l0015_1E6C:
	jmp	1E70h
0015:1E6F                                              00                .

;; SHI_INVOKEERRORHANDLER1: 0015:1E70
;;   Called from:
;;     0015:1E6C (in fn0015_1E61)
SHI_INVOKEERRORHANDLER1 proc
	mov	ax,ds
	nop
	enter	3Eh,0h
	push	di
	push	ds
	mov	ds,ax
	mov	ax,[bp+8h]
	mov	dx,[bp+0Ah]
	mov	[bp-3Ch],ax
	mov	[bp-3Ah],dx
	mov	ax,[bp+6h]
	mov	[bp-3Eh],ax
	mov	ax,5F1Ah
	mov	bx,ax
	mov	[bp-2h],ds
	mov	cx,ds
	or	cx,ax
	jnz	1EA4h

l0015_1E9B:
	xor	ax,ax
	pop	ds
	pop	di
	leave
	retf	6h
0015:1EA3          90                                        .            

l0015_1EA4:
	mov	[bp-4h],bx
	mov	ax,[5F1Ch]
	or	ax,[5F1Ah]
	jz	1EDAh

l0015_1EB0:
	push	word ptr [5F1Ch]
	push	word ptr [5F1Ah]
	nop
	push	cs
	call	21B6h
	or	ax,ax
	jz	1ECAh

l0015_1EC1:
	mov	ax,[5F1Ah]
	mov	dx,[5F1Ch]
	jmp	1EDDh

l0015_1ECA:
	mov	ax,1F7Eh
	mov	dx,15h
	mov	[5F1Ah],ax
	mov	[5F1Ch],dx
	jmp	1EDDh
0015:1ED9                            90                            .      

l0015_1EDA:
	xor	ax,ax
	cwd

l0015_1EDD:
	mov	bx,ax
	mov	[bp-2h],dx
	mov	ax,dx
	or	ax,bx
	jz	1E9Bh

l0015_1EE8:
	mov	[bp-4h],bx
	push	ds
	push	5F1Ah
	xor	ax,ax
	call	1F24h
	or	ax,ax
	jz	1F04h

l0015_1EF8:
	sub	ax,ax
	mov	[bp-2h],ax
	mov	[bp-4h],ax
	xor	di,di
	jmp	1F0Eh

l0015_1F04:
	lea	ax,[bp-3Eh]
	push	ss
	push	ax
	call	dword ptr [bp-4h]
	mov	di,ax

l0015_1F0E:
	mov	ax,[bp-2h]
	or	ax,[bp-4h]
	jz	1F1Bh

l0015_1F16:
	nop
	push	cs
	call	1F68h

l0015_1F1B:
	mov	ax,di
	pop	ds
	pop	di
	leave
	retf	6h
0015:1F23          00                                        .            

;; fn0015_1F24: 0015:1F24
;;   Called from:
;;     0015:1EF1 (in SHI_INVOKEERRORHANDLER1)
fn0015_1F24 proc
	enter	2h,0h
	push	di
	push	si
	mov	cx,[bp+4h]
	mov	di,ax
	mov	bx,cx
	mov	es,[bp+6h]
	mov	si,es:[bx+0Ch]
	cmp	si,ax
	ja	1F40h

l0015_1F3C:
	inc	word ptr es:[bx+0Ch]

l0015_1F40:
	cmp	si,di
	jbe	1F53h

l0015_1F44:
	push	38Dh
	push	0D940h
	push	0h
	push	0h
	nop
	push	cs
	call	214Ch

l0015_1F53:
	cmp	si,di
	jbe	1F60h

l0015_1F57:
	mov	ax,1h
	pop	si
	pop	di
	leave
	ret	4h

l0015_1F60:
	xor	ax,ax
	pop	si
	pop	di
	leave
	ret	4h

;; fn0015_1F68: 0015:1F68
;;   Called from:
;;     0015:1F17 (in SHI_INVOKEERRORHANDLER1)
fn0015_1F68 proc
	mov	ax,5F1Ah
	mov	cx,ds
	or	cx,ax
	jz	1F7Dh

l0015_1F71:
	dec	word ptr [5F26h]
	jns	1F7Dh

l0015_1F77:
	mov	word ptr [5F26h],0h

l0015_1F7D:
	retf
0015:1F7E                                           C8 02               ..
0015:1F80 00 00 56 C4 5E 06 B8 1A 5F 26 8B 0F 8C DA 0B D0 ..V.^..._&......
0015:1F90 75 08 33 C0 5E C9 CA 04 00 90 8B C1 3D 0F 00 74 u.3.^.......=..t
0015:1FA0 15 77 0C 2C 02 74 0F FE C8 7C 04 2C 0B 7E 0D 33 .w.,.t...|.,.~.3
0015:1FB0 F6 B9 01 00 EB 08 BE 01 00 EB 03 90 33 F6 8B C1 ............3...
0015:1FC0 E8 0F 00 52 50 56 6A 00 90 0E E8 7F 01 5E C9 CA ...RPVj......^..
0015:1FD0 04 00 8B D8 83 FB 02 75 07 B8 3C 1C BA 15 00 C3 .......u..<.....
0015:1FE0 6B C3 17 05 7A 1C BA 15 00 C3                   k...z.....      

;; fn0015_1FEA: 0015:1FEA
;;   Called from:
;;     0045:54D2 (in fn0045_54AA)
fn0015_1FEA proc
	mov	ax,5F1Ah
	mov	cx,ds
	or	cx,ax
	jz	200Bh

l0015_1FF3:
	mov	ax,[5F22h]
	inc	word ptr [5F22h]
	or	ax,ax
	jnz	200Bh

l0015_1FFE:
	mov	ax,[5F20h]
	or	ax,[5F1Eh]
	jz	200Bh

l0015_2007:
	inc	word ptr [5F22h]

l0015_200B:
	mov	ax,5F1Ah
	mov	cx,ds
	or	cx,ax
	jz	2018h

l0015_2014:
	mov	ax,1h
	retf

l0015_2018:
	xor	ax,ax
	retf
0015:201B                                  00 56 8B F3 0B            .V...
0015:2020 C0 75 06 89 44 06 89 44 04 8B 44 06 0B 44 04 74 .u..D..D..D..D.t
0015:2030 38 FF 74 06 FF 74 04 90 0E E8 30 00 0B C0 74 10 8.t..t....0...t.
0015:2040 FF 74 06 FF 74 04 6A 01 90 0E E8 4D FB EB 12 90 .t..t.j....M....
0015:2050 C4 5C 04 26 8B 47 2A 26 8B 57 2C 89 44 04 89 54 .\.&.G*&.W,.D..T
0015:2060 06 8B 44 06 0B 44 04 75 C8 5E C3 00 55 8B EC 56 ..D..D.u.^..U..V
0015:2070 8B 76 06 FF 76 08 56 6A 00 6A 42 68 02 01 90 0E .v..v.Vj.jBh....
0015:2080 E8 4F 01 0B C0 74 13 8E 46 08 26 81 7C 14 AD BE .O...t..F.&.|...
0015:2090 75 08 B8 01 00 5E C9 CA 04 00 33 C0 5E C9 CA 04 u....^....3.^...
0015:20A0 00 00                                           ..              

;; fn0015_20A2: 0015:20A2
;;   Called from:
;;     0015:1C25 (in fn0015_1B9A)
fn0015_20A2 proc
	enter	0Ch,0h
	push	di
	push	si
	mov	cx,[bp+6h]
	mov	bx,cx
	mov	es,[bp+8h]
	mov	ax,es:[bx+2Eh]
	mov	dx,es:[bx+30h]
	mov	[bp-0Ch],ax
	mov	[bp-0Ah],dx
	xor	bx,bx
	xor	si,si
	mov	di,bx
	mov	[bp-6h],si
	mov	si,ax
	mov	es,dx
	mov	ax,es:[si+4h]
	mov	dx,es:[si+6h]
	mov	bx,ax
	mov	[bp-2h],dx
	or	dx,ax
	jz	2140h

l0015_20DC:
	mov	ax,[bp-2h]
	cmp	bx,cx
	jnz	20E8h

l0015_20E3:
	cmp	ax,[bp+8h]
	jz	2106h

l0015_20E8:
	mov	di,bx
	mov	[bp-6h],ax
	mov	es,ax
	mov	ax,es:[bx+2Ah]
	mov	dx,es:[bx+2Ch]
	mov	bx,ax
	mov	[bp-2h],dx
	or	dx,ax
	jnz	20DCh

l0015_2100:
	pop	si
	pop	di
	leave
	retf	4h

l0015_2106:
	mov	ax,[bp-6h]
	or	ax,di
	jz	212Ah

l0015_210D:
	mov	es,[bp-2h]
	mov	ax,es:[bx+2Ah]
	mov	dx,es:[bx+2Ch]
	mov	es,[bp-6h]
	mov	es:[di+2Ah],ax
	mov	es:[di+2Ch],dx
	pop	si
	pop	di
	leave
	retf	4h
0015:2129                            90                            .      

l0015_212A:
	mov	es,[bp-2h]
	mov	ax,es:[bx+2Ah]
	mov	dx,es:[bx+2Ch]
	les	bx,[bp-0Ch]
	mov	es:[bx+4h],ax
	mov	es:[bx+6h],dx

l0015_2140:
	pop	si
	pop	di
	leave
	retf	4h

;; fn0015_2146: 0015:2146
;;   Called from:
;;     0015:160B (in fn0015_160A)
fn0015_2146 proc
	mov	ax,1h
	retf

;; fn0015_214A: 0015:214A
;;   Called from:
;;     0015:166E (in fn0015_160A)
fn0015_214A proc
	retf
0015:214B                                  90                        .    

;; fn0015_214C: 0015:214C
;;   Called from:
;;     0015:1F4F (in fn0015_1F24)
fn0015_214C proc
	push	bp
	mov	bp,sp
	push	di
	push	si
	cmp	word ptr [bp+8h],1h
	sbb	si,si
	add	si,2h
	or	si,2110h
	push	0h
	call	far 045Fh:0000h
	mov	di,[bp+0Ah]

l0015_2168:
	push	0h
	push	word ptr [bp+0Ch]
	push	di
	push	15h
	push	1DE8h
	push	si
	call	far 045Fh:0048h
	dec	ax
	jz	21AEh

l0015_217D:
	dec	ax
	jl	218Bh

l0015_2180:
	jo	218Bh

l0015_2182:
	dec	ax
	jle	219Ch

l0015_2185:
	dec	ax
	jz	21A4h

l0015_2188:
	dec	ax
	jz	21AEh

l0015_218B:
	test	si,2000h
	jz	21AEh

l0015_2191:
	and	si,0DFEFh
	or	si,1010h
	jmp	2168h
0015:219B                                  90                        .    

l0015_219C:
	nop
	push	cs
	call	3E9Eh
	jmp	21AEh
0015:21A3          90                                        .            

l0015_21A4:
	mov	ax,1h
	pop	si
	pop	di
	leave
	retf	8h
0015:21AD                                        90                    .  

l0015_21AE:
	xor	ax,ax
	pop	si
	pop	di
	leave
	retf	8h

;; fn0015_21B6: 0015:21B6
;;   Called from:
;;     0015:1EB9 (in SHI_INVOKEERRORHANDLER1)
fn0015_21B6 proc
	push	bp
	mov	bp,sp
	push	word ptr [bp+8h]
	push	word ptr [bp+6h]
	push	4h
	push	0h
	call	1DFAh
	cmp	ax,1h
	sbb	ax,ax
	neg	ax
	leave
	retf	4h
0015:21D1    00 55 8B EC 2E F7 06 5F 1E 02 00 74 04 E9 43  .U....._...t..C
0015:21E0 00 90 FF 76 0E FF 76 0C FF 76 06 6A 00 E8 0A FC ...v..v..v.j....
0015:21F0 0B C0 74 06 33 C0 C9 CA 0A 00 F6 46 06 04 75 24 ..t.3......F..u$
0015:2200 66 33 DB 8B 5E 0E 66 0F 03 D3 75 E8 8B 5E 0C 66 f3..^.f...u..^.f
0015:2210 8B 4E 08 66 E3 24 66 49 66 03 D9 72 D7 66 3B D3 .N.f.$fIf..r.f;.
0015:2220 72 D2 EB 16 FF 76 0E FF 76 0C 8B 46 08 8B 56 0A r....v..v..F..V.
0015:2230 8B 5E 06 E8 8A 00 0B C0 74 BA B8 01 00 C9 CA 0A .^......t.......
0015:2240 00 90 C8 06 00 00 53 50 57 56 8B 46 06 0B 46 04 ......SPWV.F..F.
0015:2250 74 64 83 7E 06 00 74 06 BE FF FF EB 04 90 8B 76 td.~..t........v
0015:2260 04 8B 46 08 2B D2 03 C6 13 D2 74 02 2B F0 2B C0 ..F.+.....t.+.+.
0015:2270 29 76 04 19 46 06 FF 76 0A FF 76 08 FF 76 F6 56 )v..F..v..v..v.V
0015:2280 FF 56 F8 8B F8 0B F8 75 1D 2B C0 2B D2 8B CE 01 .V.....u.+.+....
0015:2290 4E 08 13 D0 B9 20 00 D3 E2 01 56 0A 8B 46 06 0B N.... ....V..F..
0015:22A0 46 04 75 AE EB 10 8B C7 2B D2 03 46 04 13 56 06 F.u.....+..F..V.
0015:22B0 5E 5F C9 C2 08 00 33 C0 99 5E 5F C9 C2 08 00 00 ^_....3..^_.....
0015:22C0 55 8B EC FF 76 06 FF 76 04 52 50 8B C3 8D 1E FA U...v..v.RP.....
0015:22D0 1D E8 6E FF 0B D0 75 08 B8 01 00 C9 C2 04 00 90 ..n...u.........
0015:22E0 33 C0 C9 C2 04 00 00 00 00 00 00 00 00 00 00 00 3...............
0015:22F0 00 00 00 00 00 00 B8 00                         ........        

l0015_22F8:
	mov	al,0FFh
	push	ax
	nop
	push	cs
	call	24DBh

;; fn0015_2300: 0015:2300
fn0015_2300 proc
	xor	bp,bp
	push	bp
	call	far 045Fh:00C0h
	or	ax,ax
	jz	22F8h

l0015_230C:
	mov	[5F7Eh],es
	add	cx,100h
	jc	22F8h

l0015_2316:
	mov	[5F48h],cx
	mov	[5F4Ah],si
	mov	[5F4Ch],di
	mov	[5F4Eh],bx
	mov	[5F50h],es
	mov	[5F52h],dx
	mov	ax,0FFFFh
	push	ax
	call	far 045Fh:0080h
	call	far 045Fh:0010h
	xchg	ah,al
	mov	[5F80h],ax
	mov	ah,30h
	test	word ptr cs:[22F6h],1h
	jz	2353h

l0015_234C:
	call	far 045Fh:00C8h
	jmp	2355h

l0015_2353:
	int	21h

l0015_2355:
	mov	[5F84h],ax
	xchg	ah,al
	mov	[5F82h],ax
	test	word ptr cs:[22F6h],1h
	jnz	236Bh

l0015_2366:
	mov	al,0h
	mov	[5F87h],al

l0015_236B:
	xor	ax,ax
	push	ax
	call	far 045Fh:0088h
	push	word ptr [5F4Ch]
	call	far 045Fh:0078h
	or	ax,ax
	jnz	2383h

l0015_2380:
	jmp	22F8h

l0015_2383:
	nop
	push	cs
	call	23EAh
	nop
	push	cs
	call	262Ch
	nop
	push	cs
	call	27D6h
	call	55ACh
	push	word ptr [5FC0h]
	push	word ptr [5FBEh]
	push	word ptr [5FBCh]
	push	word ptr [5FBAh]
	push	word ptr [5FB8h]
	nop
	push	cs
	call	23BEh
	add	sp,0Ah
	push	ax
	nop
	push	cs
	call	24CDh
	mov	ax,15h
	jmp	289Ah
0015:23BD                                        00                    .  

;; fn0015_23BE: 0015:23BE
;;   Called from:
;;     0015:23AA (in fn0015_2300)
fn0015_23BE proc
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	push	word ptr [5F4Ch]
	push	word ptr [5F4Ah]
	push	word ptr [5F50h]
	push	word ptr [5F4Eh]
	push	word ptr [5F52h]
	call	far 0045h:54AAh
	sub	bp,2h
	mov	sp,bp
	pop	ds
	pop	bp
	dec	bp
	retf

;; fn0015_23EA: 0015:23EA
;;   Called from:
;;     0015:2384 (in fn0015_2300)
fn0015_23EA proc
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	mov	ax,3500h
	test	word ptr cs:[22F6h],1h
	jz	2407h

l0015_2400:
	call	far 045Fh:00C8h
	jmp	2409h

l0015_2407:
	int	21h

l0015_2409:
	mov	[5F6Ah],bx
	mov	[5F6Ch],es
	push	cs
	pop	ds
	mov	ax,2500h
	mov	dx,2890h
	test	word ptr cs:[22F6h],1h
	jz	2429h

l0015_2422:
	call	far 045Fh:00C8h
	jmp	242Bh

l0015_2429:
	int	21h

l0015_242B:
	push	cs
	call	29DCh
	mov	ds,ax
	mov	cx,[6202h]
	jcxz	2460h

l0015_2437:
	mov	es,[5F7Eh]
	mov	si,es:[002Ch]
	mov	ax,[6204h]
	mov	dx,[6206h]
	xor	bx,bx
	call	dword ptr [6200h]
	jnc	2452h

l0015_244F:
	jmp	25CCh

l0015_2452:
	mov	ax,[6208h]
	mov	dx,[620Ah]
	mov	bx,3h
	call	dword ptr [6200h]

l0015_2460:
	mov	es,[5F7Eh]
	mov	cx,es:[002Ch]
	jcxz	24A9h

l0015_246B:
	mov	es,cx
	xor	di,di

l0015_246F:
	cmp	byte ptr es:[di],0h
	jz	24A9h

l0015_2475:
	mov	cx,0Dh
	mov	si,5F5Ch
	rep cmpsb
	jz	248Ah

l0015_247F:
	mov	cx,7FFFh
	xor	ax,ax

l0015_2484:
	repne scasb

l0015_2486:
	jnz	24A9h

l0015_2488:
	jmp	246Fh

l0015_248A:
	push	es
	push	ds
	pop	es
	pop	ds
	mov	si,di
	mov	di,5F90h
	mov	cl,4h

l0015_2495:
	lodsb
	sub	al,41h
	jc	24A7h

l0015_249A:
	shl	al,cl
	xchg	dx,ax
	lodsb
	sub	al,41h
	jc	24A7h

l0015_24A2:
	or	al,dl
	stosb
	jmp	2495h

l0015_24A7:
	push	es
	pop	ds

l0015_24A9:
	mov	si,620Ch
	mov	di,620Ch
	call	2594h
	mov	si,620Ch
	mov	di,620Ch
	call	2594h
	mov	si,61EEh
	mov	di,61FEh
	call	2594h
	sub	bp,2h
	mov	sp,bp
	pop	ds
	pop	bp
	dec	bp
	retf

;; fn0015_24CD: 0015:24CD
;;   Called from:
;;     0015:23B3 (in fn0015_2300)
fn0015_24CD proc
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	xor	cx,cx
	jmp	250Ah

;; fn0015_24DB: 0015:24DB
;;   Called from:
;;     0015:22FC (in fn0015_2300)
fn0015_24DB proc
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	mov	cx,1h
	jmp	250Ah
0015:24EA                               8C D8 90 45 55 8B           ...EU.
0015:24F0 EC 1E 8E D8 56 57 B9 00 01 EB 0F 8C D8 90 45 55 ....VW........EU
0015:2500 8B EC 1E 8E D8 56 57 B9 01 01                   .....VW...      

;; fn0015_250A: 0015:250A
;;   Called from:
;;     0015:24D9 (in fn0015_24CD)
;;     0015:24E8 (in fn0015_24DB)
fn0015_250A proc
	mov	[5FC9h],ch
	push	cx
	or	cl,cl
	jnz	252Fh

l0015_2513:
	mov	si,68B6h
	mov	di,68B6h
	call	2594h
	mov	si,620Ch
	mov	di,6210h
	call	2594h
	mov	si,[bp+6h]
	push	si
	call	55ACh
	add	sp,2h

l0015_252F:
	mov	si,6210h
	mov	di,6210h
	call	2594h
	mov	si,6210h
	mov	di,6210h
	call	2594h
	call	256Bh
	pop	ax
	or	ah,ah
	jnz	2560h

l0015_2549:
	mov	ax,[bp+6h]
	mov	ah,4Ch
	test	word ptr cs:[22F6h],1h
	jz	255Eh

l0015_2557:
	call	far 045Fh:00C8h
	jmp	2560h

l0015_255E:
	int	21h

l0015_2560:
	pop	di
	pop	si
	sub	bp,2h
	mov	sp,bp
	pop	ds
	pop	bp
	dec	bp
	retf

;; fn0015_256B: 0015:256B
;;   Called from:
;;     0015:2541 (in fn0015_250A)
fn0015_256B proc
	mov	cx,[6202h]
	jcxz	2578h

l0015_2571:
	mov	bx,2h
	call	dword ptr [6200h]

l0015_2578:
	push	ds
	lds	dx,[5F6Ah]
	mov	ax,2500h
	test	word ptr cs:[22F6h],1h
	jz	2590h

l0015_2589:
	call	far 045Fh:00C8h
	jmp	2592h

l0015_2590:
	int	21h

l0015_2592:
	pop	ds
	ret

;; fn0015_2594: 0015:2594
;;   Called from:
;;     0015:24AF (in fn0015_23EA)
;;     0015:24B8 (in fn0015_23EA)
;;     0015:24C1 (in fn0015_23EA)
;;     0015:2519 (in fn0015_250A)
;;     0015:2522 (in fn0015_250A)
;;     0015:2535 (in fn0015_250A)
;;     0015:253E (in fn0015_250A)
fn0015_2594 proc
	cmp	si,di
	jnc	25A6h

l0015_2598:
	sub	di,4h
	mov	ax,[di]
	or	ax,[di+2h]
	jz	2594h

l0015_25A2:
	call	dword ptr [di]
	jmp	2594h

l0015_25A6:
	ret
0015:25A7                      00                                .        

;; fn0015_25A8: 0015:25A8
;;   Called from:
;;     0015:289C (in fn0015_289A)
fn0015_25A8 proc
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	mov	ax,0FCh
	push	ax
	push	cs
	call	2913h
	mov	ax,0FFh
	push	ax
	push	cs
	call	2913h
	sub	bp,2h
	mov	sp,bp
	pop	ds
	pop	bp
	dec	bp
	retf
0015:25CB                                  00                        .    

l0015_25CC:
	mov	ax,2h
	jmp	289Ah
0015:25D2       5B 40 24 FE 2B C4 73 4C F7 D8 36 39 06 0A   [@$.+.sL..69..
0015:25E0 00 77 43 36 39 06 0C 00 76 04 36 A3 0C 00 8B E0 .wC69...v.6.....
0015:25F0 FF E3 5B 5A 40 24 FE 2B C4 73 19 F7 D8 36 39 06 ..[Z@$.+.s...69.
0015:2600 0A 00 77 10 36 39 06 0C 00 76 04 36 A3 0C 00 8B ..w.69...v.6....
0015:2610 E0 52 53 CB 90 0E E8 C3 03 8E D8 8B 16 CE 5F 42 .RS..........._B
0015:2620 74 04 FF 2E CE 5F B8 00 00 E9 6E 02             t...._....n.    

;; fn0015_262C: 0015:262C
;;   Called from:
;;     0015:2389 (in fn0015_2300)
fn0015_262C proc
	pop	word ptr [5FD2h]
	pop	word ptr [5FD4h]
	mov	ax,104h
	mov	cx,8h
	call	2950h
	mov	[5FC4h],dx
	mov	[5FC2h],ax
	push	dx
	push	ax
	push	word ptr [5F4Ch]
	push	dx
	push	ax
	mov	ax,104h
	push	ax
	call	far 045Fh:0090h
	pop	bx
	pop	es
	add	bx,ax
	mov	byte ptr es:[bx],0h
	mov	dx,1h
	push	ds
	pop	es
	mov	di,1h
	mov	si,81h
	mov	ds,[5F7Eh]

l0015_266C:
	lodsb
	cmp	al,20h
	jz	266Ch

l0015_2671:
	cmp	al,9h
	jz	266Ch

l0015_2675:
	cmp	al,0Dh
	jz	26E8h

l0015_2679:
	or	al,al
	jz	26E8h

l0015_267D:
	inc	di

l0015_267E:
	dec	si

l0015_267F:
	lodsb
	cmp	al,20h
	jz	266Ch

l0015_2684:
	cmp	al,9h
	jz	266Ch

l0015_2688:
	cmp	al,0Dh
	jz	26E8h

l0015_268C:
	or	al,al
	jz	26E8h

l0015_2690:
	cmp	al,22h
	jz	26B8h

l0015_2694:
	cmp	al,5Ch
	jz	269Bh

l0015_2698:
	inc	dx
	jmp	267Fh

l0015_269B:
	xor	cx,cx

l0015_269D:
	inc	cx
	lodsb
	cmp	al,5Ch
	jz	269Dh

l0015_26A3:
	cmp	al,22h
	jz	26ABh

l0015_26A7:
	add	dx,cx
	jmp	267Eh

l0015_26AB:
	mov	ax,cx
	shr	cx,1h
	adc	dx,cx
	test	al,1h
	jnz	267Fh

l0015_26B5:
	jmp	26B8h

l0015_26B7:
	dec	si

l0015_26B8:
	lodsb
	cmp	al,0Dh
	jz	26E8h

l0015_26BD:
	or	al,al
	jz	26E8h

l0015_26C1:
	cmp	al,22h
	jz	267Fh

l0015_26C5:
	cmp	al,5Ch
	jz	26CCh

l0015_26C9:
	inc	dx
	jmp	26B8h

l0015_26CC:
	xor	cx,cx

l0015_26CE:
	inc	cx
	lodsb
	cmp	al,5Ch
	jz	26CEh

l0015_26D4:
	cmp	al,22h
	jz	26DCh

l0015_26D8:
	add	dx,cx
	jmp	26B7h

l0015_26DC:
	mov	ax,cx
	shr	cx,1h
	adc	dx,cx
	test	al,1h
	jnz	26B8h

l0015_26E6:
	jmp	267Fh

l0015_26E8:
	push	es
	pop	ds
	mov	[5FB8h],di
	add	dx,di
	inc	di
	shl	di,1h
	shl	di,1h
	add	dx,di
	inc	dx
	and	dl,0FEh
	sub	sp,dx
	mov	ax,sp
	mov	[5FBAh],ax
	mov	[5FBCh],ss
	mov	bx,ax
	add	di,bx
	push	ss
	pop	es
	lds	si,[5FC2h]
	mov	ss:[bx],si
	mov	ss:[bx+2h],ds
	add	bx,4h
	push	ax
	push	cs
	call	29DCh
	mov	ds,ax
	pop	ax
	mov	ds,[5F7Eh]
	mov	si,81h
	jmp	272Eh

l0015_272B:
	xor	ax,ax
	stosb

l0015_272E:
	lodsb
	cmp	al,20h
	jz	272Eh

l0015_2733:
	cmp	al,9h
	jz	272Eh

l0015_2737:
	cmp	al,0Dh
	jnz	273Eh

l0015_273B:
	jmp	27C1h

l0015_273E:
	or	al,al
	jnz	2744h

l0015_2742:
	jmp	27C1h

l0015_2744:
	mov	ss:[bx],di
	mov	ss:[bx+2h],ss
	add	bx,4h

l0015_274E:
	dec	si

l0015_274F:
	lodsb
	cmp	al,20h
	jz	272Bh

l0015_2754:
	cmp	al,9h
	jz	272Bh

l0015_2758:
	cmp	al,0Dh
	jz	27BEh

l0015_275C:
	or	al,al
	jz	27BEh

l0015_2760:
	cmp	al,22h
	jz	278Bh

l0015_2764:
	cmp	al,5Ch
	jz	276Bh

l0015_2768:
	stosb
	jmp	274Fh

l0015_276B:
	xor	cx,cx

l0015_276D:
	inc	cx
	lodsb
	cmp	al,5Ch
	jz	276Dh

l0015_2773:
	cmp	al,22h
	jz	277Dh

l0015_2777:
	mov	al,5Ch

l0015_2779:
	rep stosb

l0015_277B:
	jmp	274Eh

l0015_277D:
	mov	al,5Ch
	shr	cx,1h

l0015_2781:
	rep stosb

l0015_2783:
	jnc	278Bh

l0015_2785:
	mov	al,22h
	stosb
	jmp	274Fh

l0015_278A:
	dec	si

l0015_278B:
	lodsb
	cmp	al,0Dh
	jz	27BEh

l0015_2790:
	or	al,al
	jz	27BEh

l0015_2794:
	cmp	al,22h
	jz	274Fh

l0015_2798:
	cmp	al,5Ch
	jz	279Fh

l0015_279C:
	stosb
	jmp	278Bh

l0015_279F:
	xor	cx,cx

l0015_27A1:
	inc	cx
	lodsb
	cmp	al,5Ch
	jz	27A1h

l0015_27A7:
	cmp	al,22h
	jz	27B1h

l0015_27AB:
	mov	al,5Ch

l0015_27AD:
	rep stosb

l0015_27AF:
	jmp	278Ah

l0015_27B1:
	mov	al,5Ch
	shr	cx,1h

l0015_27B5:
	rep stosb

l0015_27B7:
	jnc	274Fh

l0015_27B9:
	mov	al,22h
	stosb
	jmp	278Bh

l0015_27BE:
	xor	ax,ax
	stosb

l0015_27C1:
	push	cs
	call	29DCh
	mov	ds,ax
	mov	word ptr ss:[bx],0h
	mov	word ptr ss:[bx+2h],0h
	jmp	dword ptr [5FD2h]

;; fn0015_27D6: 0015:27D6
;;   Called from:
;;     0015:238E (in fn0015_2300)
fn0015_27D6 proc
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	sub	sp,6h
	push	ds
	call	far 045Fh:0018h
	or	ax,ax
	jz	27F0h

l0015_27ED:
	mov	dx,0h

l0015_27F0:
	mov	bx,dx
	mov	es,dx
	mov	[bp-4h],es
	mov	[bp-8h],ds
	xor	ax,ax
	xor	si,si
	xor	di,di
	mov	cx,0FFFFh
	or	bx,bx
	jz	2815h

l0015_2807:
	cmp	byte ptr es:[0000h],0h
	jz	2815h

l0015_280F:
	repne scasb
	inc	si
	scasb
	jnz	280Fh

l0015_2815:
	mov	ax,di
	inc	ax
	and	al,0FEh
	inc	si
	mov	di,si
	shl	si,1h
	shl	si,1h
	mov	cx,9h
	call	2950h
	push	dx
	push	ax
	mov	ax,si
	call	2950h
	mov	[5FBEh],ax
	mov	[5FC0h],dx
	mov	[bp-6h],dx
	push	es
	pop	ds
	mov	cx,di
	mov	bx,ax
	xor	si,si
	pop	di
	pop	es
	dec	cx
	jcxz	287Dh

l0015_2845:
	mov	ax,[si]
	push	ds
	mov	ds,[bp-8h]
	cmp	ax,[5F5Ch]
	pop	ds
	jnz	2867h

l0015_2852:
	push	cx
	push	si
	push	di
	push	es
	mov	es,[bp-8h]
	mov	di,5F5Ch
	mov	cx,6h
	rep cmpsw
	pop	es
	pop	di
	pop	si
	pop	cx
	jz	2872h

l0015_2867:
	mov	ds,[bp-6h]
	mov	[bx],di
	mov	[bx+2h],es
	add	bx,4h

l0015_2872:
	mov	ds,[bp-4h]

l0015_2875:
	lodsb
	stosb
	or	al,al
	jnz	2875h

l0015_287B:
	loop	2845h

l0015_287D:
	mov	ds,[bp-6h]
	mov	[bx],cx
	mov	[bx+2h],cx
	pop	ds
	sub	bp,2h
	mov	sp,bp
	pop	ds
	pop	bp
	dec	bp
	retf
0015:288F                                              00                .
0015:2890 90 0E E8 47 01 8E D8 B8 03 00                   ...G......      

;; fn0015_289A: 0015:289A
;;   Called from:
;;     0015:23BA (in fn0015_2300)
;;     0015:25CF (in fn0015_23EA)
;;     0015:2976 (in fn0015_2950)
;;     0015:55B4 (in fn0015_55B1)
fn0015_289A proc
	push	ax
	push	ax
	push	cs
	call	25A8h
	push	cs
	call	2913h
	push	cs
	call	28DCh
	xor	bx,bx
	or	ax,ax
	jz	28CBh

l0015_28AE:
	mov	di,ax
	mov	ax,9h
	cmp	byte ptr [di],4Dh
	jnz	28BBh

l0015_28B8:
	mov	ax,0Fh

l0015_28BB:
	add	di,ax
	push	di
	push	ds
	pop	es
	mov	al,0Dh
	mov	cx,22h

l0015_28C5:
	repne scasb

l0015_28C7:
	mov	[di-1h],bl
	pop	ax

l0015_28CB:
	push	bx
	push	ds
	push	ax
	call	far 045Fh:0028h
	mov	ax,0FFh
	push	ax
	call	far 045Fh:0008h

;; fn0015_28DC: 0015:28DC
;;   Called from:
;;     0015:28A4 (in fn0015_289A)
;;     0015:28D7 (in fn0015_289A)
;;     0015:2928 (in fn0015_2913)
fn0015_28DC proc
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	push	si
	push	di
	push	ds
	pop	es
	mov	dx,[bp+6h]
	mov	si,63FEh

l0015_28F0:
	lodsw
	cmp	ax,dx
	jz	2905h

l0015_28F5:
	inc	ax
	xchg	si,ax
	jz	2905h

l0015_28F9:
	xchg	di,ax
	xor	ax,ax
	mov	cx,0FFFFh
	repne scasb
	mov	si,di
	jmp	28F0h

l0015_2905:
	xchg	si,ax
	pop	di
	pop	si
	sub	bp,2h
	mov	sp,bp
	pop	ds
	pop	bp
	dec	bp
	retf	2h

;; fn0015_2913: 0015:2913
;;   Called from:
;;     0015:25B6 (in fn0015_25A8)
;;     0015:25BE (in fn0015_25A8)
;;     0015:28A0 (in fn0015_289A)
fn0015_2913 proc
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	push	di
	cmp	word ptr [61ECh],0h
	jz	2944h

l0015_2925:
	push	word ptr [bp+6h]
	push	cs
	call	28DCh
	or	ax,ax
	jz	2944h

l0015_2930:
	xchg	dx,ax
	mov	di,dx
	xor	ax,ax
	mov	cx,0FFFFh
	repne scasb
	not	cx
	dec	cx
	mov	bx,[5F8Ah]
	call	55B1h

l0015_2944:
	pop	di
	sub	bp,2h
	mov	sp,bp
	pop	ds
	pop	bp
	dec	bp
	retf	2h

;; fn0015_2950: 0015:2950
;;   Called from:
;;     0015:263A (in fn0015_262C)
;;     0015:2824 (in fn0015_27D6)
;;     0015:282B (in fn0015_27D6)
fn0015_2950 proc
	push	bp
	mov	bp,sp
	push	bx
	push	es
	push	cx
	mov	cx,1000h
	xchg	[6066h],cx
	push	cx
	push	ax
	nop
	push	cs
	call	167Ah
	pop	bx
	pop	word ptr [6066h]
	pop	cx
	mov	bx,dx
	or	bx,ax
	jz	2974h

l0015_2970:
	pop	es
	pop	bx
	jmp	2979h

l0015_2974:
	mov	ax,cx
	jmp	289Ah

l0015_2979:
	mov	sp,bp
	pop	bp
	ret
0015:297D                                        00 72 1F              .r.
0015:2980 33 C0 83 ED 02 8B E5 1F 5D 4D CB 73 F3 50 E8 24 3.......]M.s.P.$
0015:2990 00 58 32 E4 83 ED 02 8B E5 1F 5D 4D CB 73 07 E8 .X2.......]M.s..
0015:29A0 13 00 B8 FF FF 99 83 ED 02 8B E5 1F 5D 4D CB 32 ............]M.2
0015:29B0 E4 E8 01 00 CB A2 88 5F 0A E4 75 1B 3C 22 73 0C ......._..u.<"s.
0015:29C0 3C 20 72 04 B0 05 EB 06 3C 13 76 02 B0 13 BB D6 < r.....<.v.....
0015:29D0 5F D7 98 A3 78 5F C3 8A C4 EB F7 00             _...x_......    

;; fn0015_29DC: 0015:29DC
;;   Called from:
;;     0015:242B (in fn0015_23EA)
;;     0015:271B (in fn0015_262C)
;;     0015:27C1 (in fn0015_262C)
fn0015_29DC proc
	cmp	byte ptr cs:[29ECh],0B8h
	jz	29E7h

l0015_29E4:
	mov	ax,ss
	retf

l0015_29E7:
	mov	ax,cs:[29EDh]
	retf

;; __EXPORTEDSTUB: 0015:29EC
__EXPORTEDSTUB proc
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	xor	ax,ax
	lea	sp,[bp-2h]
	pop	ds
	pop	bp
	dec	bp
	retf
0015:29FF                                              90                .
0015:2A00 45 55 8B EC 1E 83 EC 14 57 56 BF FF FF 8B 46 06 EU......WV....F.
0015:2A10 8B F0 8B D8 F6 47 0A 40 74 08 C6 47 0A 00 E9 D5 .....G.@t..G....
0015:2A20 00 90 F6 44 0A 83 75 03 E9 C7 00 1E 56 E8 74 05 ...D..u.....V.t.
0015:2A30 83 C4 04 8B F8 8B DE 81 EB 10 62 8B 87 04 63 89 ..........b...c.
0015:2A40 46 FC 1E 56 E8 69 02 83 C4 04 8A 44 0B 2A E4 89 F..V.i.....D.*..
0015:2A50 46 EA 3B 06 8A 5F 7E 18 33 C0 50 FF 76 EA 90 0E F.;.._~.3.P.v...
0015:2A60 E8 4E 2B 83 C4 04 0B C0 7D 18 B8 01 00 EB 15 90 .N+.....}.......
0015:2A70 8A 44 0B 2A E4 50 90 0E E8 83 0B 83 C4 02 0B C0 .D.*.P..........
0015:2A80 7C E8 33 C0 89 46 EC 0B C0 75 64 39 46 FC 74 62 |.3..F...ud9F.tb
0015:2A90 B8 EA 5F 1E 50 8D 4E F2 16 51 90 0E E8 9F 12 83 .._.P.N..Q......
0015:2AA0 C4 08 8D 46 F4 89 46 EE 8C 56 F0 80 7E F2 5C 74 ...F..F..V..~.\t
0015:2AB0 15 B8 EC 5F 1E 50 8D 46 F2 16 50 90 0E E8 2A 12 ..._.P.F..P...*.
0015:2AC0 83 C4 08 EB 04 90 FF 4E EE B8 0A 00 50 FF 76 F0 .......N....P.v.
0015:2AD0 FF 76 EE FF 76 FC 90 0E E8 A7 13 83 C4 08 8D 46 .v..v..........F
0015:2AE0 F2 16 50 90 0E E8 66 26 83 C4 04 0B C0 74 03 BF ..P...f&.....t..
0015:2AF0 FF FF C6 44 0A 00 8B C7 5E 5F 8D 66 FE 1F 5D 4D ...D....^_.f..]M
0015:2B00 CB 90 45 55 8B EC 1E 83 EC 08 90 0E E8 9B 0A 89 ..EU............
0015:2B10 56 FC 0B D0 75 06 33 C0 99 EB 19 90 FF 76 FC 50 V...u.3......v.P
0015:2B20 FF 76 0E FF 76 0C FF 76 0A FF 76 08 FF 76 06 90 .v..v..v..v..v..
0015:2B30 0E E8 00 02 8D 66 FE 1F 5D 4D CB 90 45 55 8B EC .....f..]M..EU..
0015:2B40 1E 33 C0 50 FF 76 0C FF 76 0A FF 76 08 FF 76 06 .3.P.v..v..v..v.
0015:2B50 90 0E E8 AD FF 8D 66 FE 1F 5D 4D CB 45 55 8B EC ......f..]M.EU..
0015:2B60 1E 83 EC 06 57 56 8B 76 06 1E 56 E8 06 03 83 C4 ....WV.v..V.....
0015:2B70 04 8B F8 8D 46 0E 16 50 FF 76 0C FF 76 0A 1E 56 ....F..P.v..v..V
0015:2B80 90 0E E8 2F 05 83 C4 0C 89 46 F8 1E 56 57 E8 6F .../.....F..VW.o
0015:2B90 03 83 C4 06 8B 46 F8 5E 5F 8D 66 FE 1F 5D 4D CB .....F.^_.f..]M.
0015:2BA0 55 8B EC 90 0E E8 7C 04 A0 C9 5F 0A C0 74 05 90 U.....|..._..t..
0015:2BB0 0E E8 A8 13 5D CB 8C D8 90 45 55 8B EC 1E 8E D8 ....]....EU.....
0015:2BC0 56 57 8B 76 08 8A 44 0A A8 82 74 6B A8 40 75 67 VW.v..D...tk.@ug
0015:2BD0 C7 44 04 00 00 A8 01 74 0B A8 10 74 5A 8B 4C 06 .D.....t...tZ.L.
0015:2BE0 89 0C 24 FE 0C 02 24 EF 88 44 0A 8B FE 81 EF 10 ..$...$..D......
0015:2BF0 62 81 C7 00 63 33 DB 8A 5C 0B A8 08 75 52 A8 04 b...c3..\...uR..
0015:2C00 75 1F F6 05 01 75 49 83 3E EC 61 00 74 32 81 FE u....uI.>.a.t2..
0015:2C10 1C 62 74 06 81 FE 28 62 75 26 F6 87 90 5F 40 74 .bt...(bu&..._@t
0015:2C20 1F B9 01 00 8D 7E 06 51 16 57 53 0E E8 C3 0D 83 .....~.Q.WS.....
0015:2C30 C4 08 B9 01 00 EB 46 B8 FF FF 80 4C 0A 20 EB 65 ......F....L. .e
0015:2C40 53 1E 56 E8 A2 00 83 C4 04 5B F6 44 0A 08 74 D1 S.V......[.D..t.
0015:2C50 8B 0C 8B 54 06 2B CA 42 89 14 8B 55 02 4A 89 54 ...T.+.B...U.J.T
0015:2C60 04 E3 25 51 51 FF 74 08 FF 74 06 53 0E E8 82 0D ..%QQ.t..t.S....
0015:2C70 83 C4 08 59 C4 7C 06 8B 56 06 26 88 15 3B C1 75 ...Y.|..V.&..;.u
0015:2C80 B6 33 C0 8A 46 06 EB 1D 33 C0 F6 87 90 5F 20 74 .3..F...3...._ t
0015:2C90 E3 B9 02 00 51 50 50 53 0E E8 9A 09 83 C4 08 33 ....QPPS.......3
0015:2CA0 C0 8B C8 EB CF 5F 5E 83 ED 02 8B E5 1F 5D 4D CB ....._^......]M.
0015:2CB0 55 8B EC 56 8B 76 04 8A 44 0A A8 83 74 26 A8 08 U..V.v..D...t&..
0015:2CC0 74 22 FF 74 08 FF 74 06 90 0E E8 21 EA 83 C4 04 t".t..t....!....
0015:2CD0 80 64 0A F7 33 C0 89 44 06 89 44 08 89 04 89 44 .d..3..D..D....D
0015:2CE0 02 89 44 04 5E 5D C3 00 55 8B EC 56 8B 76 04 B8 ..D.^]..U..V.v..
0015:2CF0 00 02 50 90 0E E8 82 E9 59 8B DE 81 EB 10 62 81 ..P.....Y.....b.
0015:2D00 C3 00 63 0B D2 74 0B 80 4C 0A 08 C7 47 02 00 02 ..c..t..L...G...
0015:2D10 EB 0E 80 4C 0A 04 C7 47 02 01 00 8C DA 8D 47 01 ...L...G......G.
0015:2D20 89 54 02 89 04 89 54 08 89 44 06 C7 44 04 00 00 .T....T..D..D...
0015:2D30 5E 5D C3 00 45 55 8B EC 1E 83 EC 0C 57 56 A0 62 ^]..EU......WV.b
0015:2D40 60 88 46 FA C7 46 F8 00 00 C4 5E 0A 26 8A 07 98 `.F..F....^.&...
0015:2D50 3D 77 00 74 57 77 08 2C 61 74 5B 2C 11 74 07 33 =w.tWw.,at[,.t.3
0015:2D60 C0 99 E9 06 01 90 33 F6 C6 46 FC 01 C7 46 F6 01 ......3..F...F..
0015:2D70 00 FF 46 0A C4 5E 0A 26 80 3F 00 75 03 E9 8A 00 ..F..^.&.?.u....
0015:2D80 83 7E F6 00 75 03 E9 81 00 26 8A 07 98 3D 74 00 .~..u....&...=t.
0015:2D90 74 3C 77 10 2C 2B 74 24 2C 37 74 3E FE C8 74 46 t<w.,+t$,7t>..tF
0015:2DA0 2C 0B 74 54 C7 46 F6 00 00 EB C6 90 BE 01 03 C6 ,.tT.F..........
0015:2DB0 46 FC 02 EB B7 90 BE 09 01 EB F4 90 F7 C6 02 00 F...............
0015:2DC0 75 E2 83 CE 02 83 E6 FE C6 46 FC 80 EB A3 F7 C6 u........F......
0015:2DD0 00 C0 75 D0 81 CE 00 40 EB 97 F7 C6 00 C0 75 C4 ..u....@......u.
0015:2DE0 81 CE 00 80 EB 8B 83 7E F8 00 75 B8 C7 46 F8 01 .......~..u..F..
0015:2DF0 00 80 4E FA 40 E9 79 FF 83 7E F8 00 75 A6 C7 46 ..N.@.y..~..u..F
0015:2E00 F8 01 00 80 66 FA BF E9 67 FF B8 A4 01 50 FF 76 ....f...g....P.v
0015:2E10 0E 56 FF 76 08 FF 76 06 90 0E E8 ED 08 83 C4 0A .V.v..v.........
0015:2E20 89 46 F4 0B C0 7D 03 E9 35 FF FF 06 EE 5F 8B 46 .F...}..5...._.F
0015:2E30 10 8B F8 8B C8 81 E9 10 62 81 C1 00 63 8B D8 8A ........b...c...
0015:2E40 46 FC 88 47 0A 2B C0 89 45 02 89 05 89 45 08 89 F..G.+..E....E..
0015:2E50 45 06 8A 46 F4 88 45 0B 8B D9 8A 46 FA 88 07 33 E..F..E....F...3
0015:2E60 C0 89 45 04 89 47 04 8B C7 8C DA 5E 5F 8D 66 FE ..E..G.....^_.f.
0015:2E70 1F 5D 4D CB 55 8B EC 56 57 83 3E EC 61 00 74 7A .]M.U..VW.>.a.tz
0015:2E80 8B 76 04 8B FE 81 EF 10 62 81 C7 00 63 BB F2 5F .v......b...c.._
0015:2E90 81 FE 1C 62 74 16 BB F6 5F 81 FE 28 62 74 0D A0 ...bt..._..(bt..
0015:2EA0 8A 5F 38 44 0B 72 53 80 0D 10 EB 4E F6 44 0A 0C ._8D.rS....N.D..
0015:2EB0 75 48 F6 05 01 75 43 8B 07 8B 57 02 8B C8 0B CA uH...uC...W.....
0015:2EC0 74 21 89 44 06 89 54 08 89 04 89 54 02 C7 44 04 t!.D..T....T..D.
0015:2ED0 00 02 C7 45 02 00 02 80 4C 0A 02 C6 05 11 B8 01 ...E....L.......
0015:2EE0 00 EB 19 53 B8 00 02 50 90 0E E8 8D E7 5B 5B 0B ...S...P.....[[.
0015:2EF0 D2 74 07 89 07 89 57 02 EB C8 33 C0 5F 5E 5D C3 .t....W...3._^].
0015:2F00 55 8B EC 56 57 8B 76 06 8B FE 81 EF 10 62 81 C7 U..VW.v......b..
0015:2F10 00 63 F6 05 10 74 2C 33 DB 8A 5C 0B F6 87 90 5F .c...t,3..\...._
0015:2F20 40 74 20 1E 56 E8 7C 00 83 C4 04 83 7E 04 00 74 @t .V.|.....~..t
0015:2F30 12 33 C0 88 05 89 45 02 89 04 89 44 02 89 44 06 .3....E....D..D.
0015:2F40 89 44 08 5F 5E 5D C3 00 45 55 8B EC 1E 56 8B 46 .D._^]..EU...V.F
0015:2F50 08 0B 46 06 75 08 33 C0 50 E8 DC 00 EB 3E FF 76 ..F.u.3.P....>.v
0015:2F60 08 FF 76 06 E8 3D 00 83 C4 04 0B C0 74 06 B8 FF ..v..=......t...
0015:2F70 FF EB 29 90 8B 76 06 81 EE 10 62 81 C6 00 63 F6 ..)..v....b...c.
0015:2F80 04 40 74 18 C4 5E 06 2A E4 26 8A 47 0B 50 90 0E .@t..^.*.&.G.P..
0015:2F90 E8 77 10 83 C4 02 3D 01 00 F5 1B C0 5E 8D 66 FE .w....=.....^.f.
0015:2FA0 1F 5D 4D CB 55 8B EC 83 EC 02 57 56 33 FF 8B 46 .]M.U.....WV3..F
0015:2FB0 04 8B D8 8B F0 8A 4F 0A 8B D1 80 E1 03 80 F9 02 ......O.........
0015:2FC0 75 49 F6 C2 08 75 0B 81 EB 10 62 F6 87 00 63 01 uI...u....b...c.
0015:2FD0 74 39 8B 04 2B 44 06 89 46 FE 0B C0 7E 2D 50 FF t9..+D..F...~-P.
0015:2FE0 74 08 FF 74 06 8A 44 0B 2A E4 50 90 0E E8 02 0A t..t..D.*.P.....
0015:2FF0 83 C4 08 3B 46 FE 75 0C F6 44 0A 80 74 0D 80 64 ...;F.u..D..t..d
0015:3000 0A FD EB 07 80 4C 0A 20 BF FF FF 8B 44 06 8B 54 .....L. ....D..T
0015:3010 08 89 04 89 54 02 C7 44 04 00 00 8B C7 5E 5F 8B ....T..D.....^_.
0015:3020 E5 5D C3 90 45 55 8B EC 1E B8 01 00 50 E8 08 00 .]..EU......P...
0015:3030 8D 66 FE 1F 5D 4D CB 90 55 8B EC 83 EC 02 57 56 .f..]M..U.....WV
0015:3040 BE 10 62 33 FF 89 7E FE EB 21 83 7E 04 00 75 18 ..b3..~..!.~..u.
0015:3050 F6 44 0A 02 74 12 1E 56 90 0E E8 EB FE 83 C4 04 .D..t..V........
0015:3060 40 75 05 C7 46 FE FF FF 83 C6 0C 39 36 F0 5F 72 @u..F......96._r
0015:3070 1D 83 7E 04 01 75 D3 F6 44 0A 83 74 CD 1E 56 90 ..~..u..D..t..V.
0015:3080 0E E8 C4 FE 83 C4 04 40 74 DE 47 EB DB 90 83 7E .......@t.G....~
0015:3090 04 01 75 04 8B C7 EB 03 8B 46 FE 5E 5F 8B E5 5D ..u......F.^_..]
0015:30A0 C2 02 00 90 13 31 1E 31 34 31 68 31 94 31 9C 31 .....1.141h1.1.1
0015:30B0 C5 31 F7 31 8C D8 90 45 55 8B EC 1E 8E D8 B8 14 .1.1...EU.......
0015:30C0 02 0E E8 2D F5 56 57 33 C0 89 46 F6 88 46 F9 C4 ...-.VW3..F..F..
0015:30D0 76 0A 26 AC 89 76 0A 88 46 FC 0A C0 74 06 83 7E v.&..v..F...t..~
0015:30E0 F6 00 7D 06 8B 46 F6 E9 B5 04 BB FE 5F 2C 20 3C ..}..F......_, <
0015:30F0 58 77 05 D7 24 0F EB 02 B0 00 B1 03 D2 E0 02 46 Xw..$..........F
0015:3100 F9 D7 FE C1 D2 E8 88 46 F9 98 8B D8 D1 E3 2E FF .......F........
0015:3110 A7 A4 30 8A 56 FC B9 01 00 E8 36 04 EB B1 33 C0 ..0.V.....6...3.
0015:3120 89 46 EE 89 46 F4 89 46 EC C7 46 FA 20 00 48 89 .F..F..F..F. .H.
0015:3130 46 F2 EB 9B 8A 46 FC 3C 2D 75 06 80 4E FA 04 EB F....F.<-u..N...
0015:3140 8E 3C 2B 75 06 80 4E FA 01 EB 84 3C 20 75 07 80 .<+u..N....< u..
0015:3150 4E FA 02 E9 79 FF 3C 23 75 07 80 4E FA 80 E9 6E N...y.<#u..N...n
0015:3160 FF 80 4E FA 08 E9 67 FF 8A 4E FC 80 F9 2A 75 0F ..N...g..N...*u.
0015:3170 E8 5C 03 0B C0 79 17 F7 D8 80 4E FA 04 EB 0F 80 .\...y....N.....
0015:3180 E9 30 32 ED 8B 46 F4 BB 0A 00 F7 E3 03 C1 89 46 .02..F.........F
0015:3190 F4 E9 3B FF C7 46 F2 00 00 E9 33 FF 8A 4E FC 80 ..;..F....3..N..
0015:31A0 F9 2A 75 0C E8 28 03 0B C0 79 14 B8 FF FF EB 0F .*u..(...y......
0015:31B0 80 E9 30 32 ED 8B 46 F2 BB 0A 00 F7 E3 03 C1 89 ..02..F.........
0015:31C0 46 F2 E9 0A FF 8A 46 FC 3C 6C 75 06 80 4E FA 10 F.....F.<lu..N..
0015:31D0 EB 22 3C 46 75 06 80 4E FA 20 EB 18 3C 4E 75 06 ."<Fu..N. ..<Nu.
0015:31E0 80 4E FB 10 EB 0E 3C 4C 75 06 80 4E FB 04 EB 04 .N....<Lu..N....
0015:31F0 80 4E FB 08 E9 D8 FE 8A 46 FC 3C 64 75 03 E9 94 .N......F.<du...
0015:3200 01 3C 69 75 03 E9 8D 01 3C 75 75 03 E9 8A 01 3C .<iu....<uu....<
0015:3210 58 75 03 E9 89 01 3C 78 75 03 E9 88 01 3C 6F 75 Xu....<xu....<ou
0015:3220 03 E9 A2 01 3C 63 74 1A 3C 73 74 27 3C 6E 74 51 ....<ct.<st'<ntQ
0015:3230 3C 70 74 60 3C 45 74 07 3C 47 74 03 E9 BB 00 E9 <pt`<Et.<Gt.....
0015:3240 B5 00 E8 8A 02 8D BE EA FD 16 07 AA 4F B9 01 00 ............O...
0015:3250 E9 F1 01 E8 90 02 0B FF 75 12 8C C0 0B C0 75 0C ........u.....u.
0015:3260 1E 07 BF 57 60 8B 0E 5D 60 E9 D8 01 57 8B 4E F2 ...W`..]`...W.N.
0015:3270 E3 07 32 C0 F2 AE 75 01 4F 59 2B F9 87 CF E9 C3 ..2...u.OY+.....
0015:3280 01 E8 62 02 8B 46 F6 AB F6 46 FA 10 74 03 33 C0 ..b..F...F..t.3.
0015:3290 AB E9 3B FE F6 46 FA 30 75 05 E8 32 02 EB 39 E8 ..;..F.0u..2..9.
0015:32A0 36 02 F6 46 FB 18 75 30 C6 46 FD 07 B9 10 00 16 6..F..u0.F......
0015:32B0 07 52 33 D2 8D BE F2 FD BE 04 00 E8 B0 02 B9 10 .R3.............
0015:32C0 00 8D BE ED FD 58 33 D2 BE 04 00 E8 A0 02 C6 86 .....X3.........
0015:32D0 EE FD 3A B9 09 00 EB 18 C6 46 FD 07 B9 10 00 16 ..:......F......
0015:32E0 07 33 D2 8D BE ED FD BE 04 00 E8 81 02 B9 04 00 .3..............
0015:32F0 8D BE EA FD E9 4D 01 FF 46 EC 80 4E FA 40 8A 46 .....M..F..N.@.F
0015:3300 FC 0C 20 98 8B F0 83 7E F2 00 7F 13 74 07 C7 46 .. ....~....t..F
0015:3310 F2 06 00 EB 0A 83 F8 67 75 05 C7 46 F2 01 00 8D .......gu..F....
0015:3320 BE EA FD FF 76 EC FF 76 F2 56 16 57 FF 76 10 FF ....v..v.V.W.v..
0015:3330 76 0E F6 46 FB 04 74 0A FF 1E 7C 60 83 46 0E 0A v..F..t...|`.F..
0015:3340 EB 08 FF 1E 68 60 83 46 0E 08 83 C4 0E F6 46 FA ....h`.F......F.
0015:3350 80 74 0F 83 7E F2 00 75 09 16 57 FF 1E 74 60 83 .t..~..u..W..t`.
0015:3360 C4 04 83 FE 67 75 10 F7 46 FA 80 00 75 09 16 57 ....gu..F...u..W
0015:3370 FF 1E 70 60 83 C4 04 16 07 26 80 3D 2D 75 05 47 ..p`.....&.=-u.G
0015:3380 80 4E FB 01 B9 FF FF 57 B0 00 F2 AE 4F 59 2B F9 .N.....W....OY+.
0015:3390 87 CF E9 AF 00 80 4E FA 40 C6 46 F8 0A EB 35 C6 ......N.@.F...5.
0015:33A0 46 FD 07 EB 04 C6 46 FD 27 F6 46 FA 80 74 11 C7 F.....F.'.F..t..
0015:33B0 46 EE 02 00 C6 46 F0 30 B2 51 02 56 FD 88 56 F1 F....F.0.Q.V..V.
0015:33C0 C6 46 F8 10 EB 0E F6 46 FA 80 74 04 80 4E FB 02 .F.....F..t..N..
0015:33D0 C6 46 F8 08 F6 46 FA 10 74 05 E8 FB 00 EB 0E E8 .F...F..t.......
0015:33E0 ED 00 F6 46 FA 40 74 03 99 EB 02 33 D2 F6 46 FA ...F.@t....3..F.
0015:33F0 40 74 0F 0B D2 7D 0B 80 4E FB 01 F7 D8 83 D2 00 @t...}..N.......
0015:3400 F7 DA 83 7E F2 00 7D 07 C7 46 F2 01 00 EB 04 80 ...~..}..F......
0015:3410 66 FA F7 8B D8 0B DA 75 05 C7 46 EE 00 00 8D 7E f......u..F....~
0015:3420 E9 16 07 8A 4E F8 32 ED 8B 76 F2 E8 40 01 F6 46 ....N.2..v..@..F
0015:3430 FB 02 74 0E E3 06 26 80 3D 30 74 06 4F 26 C6 05 ..t...&.=0t.O&..
0015:3440 30 41 EB 00 F6 46 FA 40 74 31 F6 46 FB 01 74 0B 0A...F.@t1.F..t.
0015:3450 C6 46 F0 2D C7 46 EE 01 00 EB 20 F6 46 FA 01 74 .F.-.F.... .F..t
0015:3460 0B C6 46 F0 2B C7 46 EE 01 00 EB 0F F6 46 FA 02 ..F.+.F......F..
0015:3470 74 09 C6 46 F0 20 C7 46 EE 01 00 8B 46 F4 2B C1 t..F. .F....F.+.
0015:3480 2B 46 EE 7D 02 33 C0 06 57 51 F6 46 FA 0C 75 07 +F.}.3..WQ.F..u.
0015:3490 8B C8 B2 20 E8 BB 00 50 16 07 8D 7E F0 8B 4E EE ... ...P...~..N.
0015:34A0 E8 91 00 58 F6 46 FA 08 74 0D F6 46 FA 04 75 07 ...X.F..t..F..u.
0015:34B0 8B C8 B2 30 E8 9B 00 59 5F 07 50 E8 76 00 58 F6 ...0...Y_.P.v.X.
0015:34C0 46 FA 04 74 07 8B C8 B2 20 E8 86 00 E9 00 FC C4 F..t.... .......
0015:34D0 76 0E 26 AD 89 76 0E C3 C4 76 0E 26 AD 8B D0 26 v.&..v...v.&...&
0015:34E0 AD 92 89 76 0E C3 F6 46 FA 20 74 08 E8 E9 FF 8E ...v...F. t.....
0015:34F0 C2 8B F8 C3 E8 D8 FF 8B F8 0B C0 75 03 8E C0 C3 ...........u....
0015:3500 1E 07 C3 98 06 57 C4 5E 06 26 FF 4F 04 78 10 26 .....W.^.&.O.x.&
0015:3510 8B 3F 26 FF 07 26 8E 47 02 AA 33 C0 5F 07 C3 51 .?&..&.G..3._..Q
0015:3520 52 06 53 50 0E E8 8E F6 83 C4 06 5A 59 83 F8 FF R.SP.......ZY...
0015:3530 75 E8 EB E8 E3 1B 8B F7 01 4E F6 57 33 FF 26 AC u........N.W3.&.
0015:3540 E8 C0 FF 0B F8 E2 F7 0B FF 5F 74 05 C7 46 F6 FF ........._t..F..
0015:3550 FF C3 E3 19 01 4E F6 57 33 FF 8A C2 E8 A4 FF 0B .....N.W3.......
0015:3560 F8 E2 F7 0B FF 5F 74 05 C7 46 F6 FF FF C3 FD 57 ....._t..F.....W
0015:3570 93 0B F6 7F 0A 0B DB 75 06 0B D2 75 02 EB 1A 92 .......u...u....
0015:3580 33 D2 F7 F1 93 F7 F1 92 87 D3 04 30 3C 39 76 03 3..........0<9v.
0015:3590 02 46 FD AA 8B C2 4E EB D8 59 2B CF 47 FC C3 5F .F....N..Y+.G.._
0015:35A0 5E 83 ED 02 8B E5 1F 5D 4D CB 45 55 8B EC 1E 83 ^......]M.EU....
0015:35B0 EC 04 56 BE 10 62 2B C0 89 46 FC 89 46 FA EB 03 ..V..b+..F..F...
0015:35C0 83 C6 0C 39 36 F0 5F 72 26 F6 44 0A 83 75 F1 C6 ...96._r&.D..u..
0015:35D0 44 0A 00 C7 44 04 00 00 2B C0 89 44 08 89 44 06 D...D...+..D..D.
0015:35E0 89 44 02 89 04 C6 44 0B FF 89 76 FA 8C 5E FC 8B .D....D...v..^..
0015:35F0 46 FA 8B 56 FC 5E 8D 66 FE 1F 5D 4D CB 90 8C D8 F..V.^.f..]M....
0015:3600 90 45 55 8B EC 1E 8E D8 8B 5E 06 3B 1E 8A 5F 72 .EU......^.;.._r
0015:3610 06 B8 00 09 F9 EB 1B B4 3E 2E F7 06 F6 22 01 00 ........>...."..
0015:3620 74 07 9A C8 00 5F 04 EB 02 CD 21 72 05 C6 87 90 t...._....!r....
0015:3630 5F 00 E9 49 F3 00 8C D8 90 45 55 8B EC 1E 8E D8 _..I.....EU.....
0015:3640 83 EC 04 8B 5E 06 3B 1E 8A 5F 72 11 83 3E EC 61 ....^.;.._r..>.a
0015:3650 00 74 0A 83 FB 02 77 05 B8 00 09 EB 41 83 3E 64 .t....w.....A.>d
0015:3660 60 00 74 7F F7 46 0A 00 80 74 78 83 7E 0C 00 74 `.t..F...tx.~..t
0015:3670 2A 33 C9 8B D1 B8 01 42 2E F7 06 F6 22 01 00 74 *3.....B...."..t
0015:3680 07 9A C8 00 5F 04 EB 02 CD 21 72 7B F7 46 0C 02 ...._....!r{.F..
0015:3690 00 75 0E 03 46 08 13 56 0A 79 48 B8 00 16 F9 EB .u..F..V.yH.....
0015:36A0 66 89 56 FC 89 46 FA 8B D1 B8 02 42 2E F7 06 F6 f.V..F.....B....
0015:36B0 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 03 46 "..t...._....!.F
0015:36C0 08 13 56 0A 79 1D 8B 4E FC 8B 56 FA B8 00 42 2E ..V.y..N..V...B.
0015:36D0 F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD ..."..t...._....
0015:36E0 21 EB B8 8B 56 08 8B 4E 0A 8A 46 0C B4 42 2E F7 !...V..N..F..B..
0015:36F0 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 .."..t...._....!
0015:3700 72 05 80 A7 90 5F FD E9 93 F2 8C D8 90 45 55 8B r...._.......EU.
0015:3710 EC 1E 8E D8 83 EC 04 8A 7E 0C 8B 46 0E 89 46 0C ........~..F..F.
0015:3720 EB 0F 8C D8 90 45 55 8B EC 1E 8E D8 83 EC 04 32 .....EU........2
0015:3730 FF 88 7E FC 8B 46 0A 8B C8 C6 46 FA 00 A9 00 80 ..~..F....F.....
0015:3740 75 10 A9 00 40 75 07 F6 06 61 60 80 75 04 C6 46 u...@u...a`.u..F
0015:3750 FA 80 1E C5 56 06 24 03 0A C7 B4 3D 2E F7 06 F6 ....V.$....=....
0015:3760 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 1F 73 "..t...._....!.s
0015:3770 12 83 F8 02 75 09 F7 C1 00 01 74 03 E9 47 01 F9 ....u.....t..G..
0015:3780 E9 1A F2 93 8B C1 25 00 05 3D 00 05 75 19 B4 3E ......%..=..u..>
0015:3790 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 ...."..t...._...
0015:37A0 CD 21 B8 00 11 EB D8 C6 46 FB 01 B8 00 44 2E F7 .!......F....D..
0015:37B0 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 .."..t...._....!
0015:37C0 F6 C2 80 74 04 80 4E FA 40 F6 46 FA 40 74 03 E9 ...t..N.@.F.@t..
0015:37D0 A1 01 8B 46 0A A9 00 02 74 4F A9 03 00 74 19 33 ...F....tO...t.3
0015:37E0 C9 B4 40 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F ..@...."..t...._
0015:37F0 04 EB 02 CD 21 E9 7B 01 B4 3E 2E F7 06 F6 22 01 ....!.{..>....".
0015:3800 00 74 07 9A C8 00 5F 04 EB 02 CD 21 1E C5 56 06 .t...._....!..V.
0015:3810 B8 00 43 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F ..C...."..t...._
0015:3820 04 EB 02 CD 21 1F E9 BA 00 F6 46 FA 80 75 03 E9 ....!.....F..u..
0015:3830 41 01 A9 02 00 75 03 E9 39 01 B9 FF FF 8B D1 B8 A....u..9.......
0015:3840 02 42 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 .B...."..t...._.
0015:3850 EB 02 CD 21 F7 D9 1E 16 1F 8D 56 FD B4 3F 2E F7 ...!......V..?..
0015:3860 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 .."..t...._....!
0015:3870 1F 0B C0 74 35 80 7E FD 1A 75 2F F7 D9 8B D1 B8 ...t5.~..u/.....
0015:3880 02 42 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 .B...."..t...._.
0015:3890 EB 02 CD 21 33 C9 B4 40 2E F7 06 F6 22 01 00 74 ...!3..@...."..t
0015:38A0 07 9A C8 00 5F 04 EB 02 CD 21 33 C9 8B D1 B8 00 ...._....!3.....
0015:38B0 42 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB B...."..t...._..
0015:38C0 02 CD 21 E9 AD 00 C6 46 FB 00 8B 4E 0C E8 11 01 ..!....F...N....
0015:38D0 89 4E 0C F6 46 FC FF 75 07 F7 46 0A 02 00 75 03 .N..F..u..F...u.
0015:38E0 80 E1 FE 1E C5 56 06 B4 3C 2E F7 06 F6 22 01 00 .....V..<...."..
0015:38F0 74 07 9A C8 00 5F 04 EB 02 CD 21 1F 73 03 E9 9C t...._....!.s...
0015:3900 F0 93 F6 46 FC FF 75 07 F7 46 0A 02 00 75 64 B4 ...F..u..F...ud.
0015:3910 3E 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB >...."..t...._..
0015:3920 02 CD 21 8A 46 0A 24 03 0A 46 FC 1E C5 56 06 B4 ..!.F.$..F...V..
0015:3930 3D 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB =...."..t...._..
0015:3940 02 CD 21 1F 72 B8 93 F6 46 FB 01 75 26 F7 46 0C ..!.r...F..u&.F.
0015:3950 01 00 74 1F 80 C9 01 1E C5 56 06 B8 01 43 2E F7 ..t......V...C..
0015:3960 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 .."..t...._....!
0015:3970 1F 72 8B F6 46 FA 40 75 64 1E C5 56 06 B8 00 43 .r..F.@ud..V...C
0015:3980 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 ...."..t...._...
0015:3990 CD 21 1F 8B C1 32 C9 83 E0 01 74 02 B1 10 F7 46 .!...2....t....F
0015:39A0 0A 08 00 74 03 80 C9 20 3B 1E 8A 5F 72 1A B4 3E ...t... ;.._r..>
0015:39B0 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 ...."..t...._...
0015:39C0 CD 21 B8 00 18 E9 B7 FD 0A 4E FA 80 C9 01 88 8F .!.......N......
0015:39D0 90 5F 8B C3 83 ED 02 8B E5 1F 5D 4D CB 32 C9 EB ._........]M.2..
0015:39E0 C7 A1 7A 5F F7 D0 23 C1 33 C9 A8 80 75 03 80 C9 ..z_..#.3...u...
0015:39F0 01 C3 8C D8 90 45 55 8B EC 1E 8E D8 83 EC 0A 8B .....EU.........
0015:3A00 5E 06 A1 8A 5F 89 46 F4 83 3E EC 61 00 74 0F A1 ^..._.F..>.a.t..
0015:3A10 8E 5F 83 FB 02 77 07 8B 1E 8A 5F 89 5E 06 3B D8 ._...w...._.^.;.
0015:3A20 72 07 B8 00 09 F9 E9 74 EF F6 87 90 5F 20 74 1B r......t...._ t.
0015:3A30 B8 02 42 33 C9 8B D1 2E F7 06 F6 22 01 00 74 07 ..B3......."..t.
0015:3A40 9A C8 00 5F 04 EB 02 CD 21 72 DB F6 87 90 5F 80 ..._....!r...._.
0015:3A50 74 7D 8C 5E F8 8E 46 0A C5 56 08 33 C0 89 46 FC t}.^..F..V.3..F.
0015:3A60 89 46 FA FC 57 56 8B FA 8B F2 89 66 F6 8B 4E 0C .F..WV.....f..N.
0015:3A70 E3 3F B0 0A F2 AE 75 52 1E 8E 5E F8 90 0E E8 2B .?....uR..^....+
0015:3A80 01 3D A8 00 76 4C 1F 83 EC 02 8B DC BA 00 02 3D .=..vL.........=
0015:3A90 28 02 73 03 BA 80 00 2B E2 8B D4 8B FA 16 07 8B (.s....+........
0015:3AA0 4E 0C AC 3C 0A 74 0D 3B FB 74 1A AA E2 F4 E8 28 N..<.t.;.t.....(
0015:3AB0 00 E9 94 00 B0 0D 3B FB 75 03 E8 1C 00 AA B0 0A ......;.u.......
0015:3AC0 FF 46 FA EB E2 E8 11 00 EB E1 5E 5F 8E 5E F8 E9 .F........^_.^..
0015:3AD0 87 00 B8 FC FF 0E E8 19 EB 50 53 51 1E 06 1F 8B .........PSQ....
0015:3AE0 CF 2B CA E3 2C 51 8B 5E 06 3B 5E F4 72 05 E8 C0 .+..,Q.^.;^.r...
0015:3AF0 1A EB 14 B4 40 2E F7 06 F6 22 01 00 74 07 9A C8 ....@...."..t...
0015:3B00 00 5F 04 EB 02 CD 21 59 72 0E 01 46 FC 3B C8 77 ._....!Yr..F.;.w
0015:3B10 07 1F 59 5B 58 8B FA C3 9F 1F 83 C4 08 83 7E FC ..Y[X.........~.
0015:3B20 00 75 25 9E 73 04 B4 09 EB 24 8E 5E F8 F6 87 90 .u%.s....$.^....
0015:3B30 5F 40 74 0E 8E 5E 0A 8B 5E 08 80 3F 1A 75 03 F8 _@t..^..^..?.u..
0015:3B40 EB 0C F9 B8 00 1C EB 06 8B 46 FC 2B 46 FA 8B 66 .........F.+F..f
0015:3B50 F6 5E 5F 8E 5E F8 E9 44 EE 8B 4E 0C 0B C9 75 05 .^_.^..D..N...u.
0015:3B60 8B C1 E9 38 EE 1E C5 56 08 3B 5E F4 72 05 E8 40 ...8...V.;^.r..@
0015:3B70 1A EB 14 B4 40 2E F7 06 F6 22 01 00 74 07 9A C8 ....@...."..t...
0015:3B80 00 5F 04 EB 02 CD 21 1E 07 1F 73 04 B4 09 EB C6 ._....!...s.....
0015:3B90 0B C0 75 C2 F6 87 90 5F 40 74 0B 8B DA 26 80 3F ..u...._@t...&.?
0015:3BA0 1A 75 03 F8 EB B0 F9 B8 00 1C EB AA 59 5A A1 48 .u..........YZ.H
0015:3BB0 5F 3B C4 73 07 2B C4 F7 D8 52 51 CB 33 C0 EB F9 _;.s.+...RQ.3...
0015:3BC0 51 57 F6 47 02 01 74 68 E8 EC 00 8B FE 8B 04 A8 QW.G..th........
0015:3BD0 01 74 03 2B C8 49 41 41 8B 77 04 0B F6 74 51 03 .t.+.IAA.w...tQ.
0015:3BE0 CE 73 09 33 C0 BA F0 FF E3 35 EB 44 90 0E E8 EB .s.3.....5.D....
0015:3BF0 ED 8E C0 26 A1 66 60 3D 00 10 74 16 BA 00 80 3B ...&.f`=..t....;
0015:3C00 D0 72 06 D1 EA 75 F8 EB 22 83 FA 08 72 1D D1 E2 .r...u.."...r...
0015:3C10 8B C2 48 8B D0 03 C1 73 02 33 C0 F7 D2 23 C2 52 ..H....s.3...#.R
0015:3C20 E8 2E 00 5A 73 0D 83 FA F0 74 05 B8 10 00 EB E2 ...Zs....t......
0015:3C30 F9 EB 1B 8B D0 2B 57 04 89 47 04 89 7F 0A 8B 77 .....+W..G.....w
0015:3C40 0C 4A 89 14 42 03 F2 C7 04 FE FF 89 77 0C 5F 59 .J..B.......w._Y
0015:3C50 C3 8B D0 F6 47 02 04 74 02 EB 51 52 51 53 8B 77 ....G..t..QRQS.w
0015:3C60 06 2E 8B 1E F6 22 33 C9 0B D2 75 07 F7 C3 10 00 ....."3...u.....
0015:3C70 75 40 41 B8 02 00 F7 C3 01 00 75 03 B8 20 00 56 u@A.......u.. .V
0015:3C80 51 52 50 9A 40 00 5F 04 0B C0 74 26 3B C6 75 1C QRP.@._...t&;.u.
0015:3C90 56 9A 68 00 5F 04 0B D0 74 12 5B 59 5A 8B C2 F6 V.h._...t.[YZ...
0015:3CA0 47 02 04 74 04 4A 89 57 FE F8 EB 0A B8 12 00 E9 G..t.J.W........
0015:3CB0 E8 EB 5B 59 5A F9 C3 57 8B 77 0A 3B 77 0C 75 03 ..[YZ..W.w.;w.u.
0015:3CC0 8B 77 08 AD 83 F8 FE 74 08 8B FE 24 FE 03 F0 EB .w.....t...$....
0015:3CD0 F2 4F 4F 8B F7 5F C3 00 55 8B EC FF 76 08 FF 76 .OO.._..U...v..v
0015:3CE0 06 90 0E E8 94 03 8B E5 5D CB 55 8B EC 8B D7 8B ........].U.....
0015:3CF0 DE 1E C4 7E 06 33 C0 B9 FF FF F2 AE 8D 75 FF C4 ...~.3.......u..
0015:3D00 7E 0A B9 FF FF F2 AE F7 D1 74 03 2B F9 41 2B F9 ~........t.+.A+.
0015:3D10 8C C0 8E D8 8E 46 08 87 FE 8B 46 06 0B C9 75 05 .....F....F...u.
0015:3D20 A5 49 49 EB 08 F7 C6 01 00 74 02 A4 49 D1 E9 F3 .II......t..I...
0015:3D30 A5 13 C9 F3 A4 8B F3 8B FA 1F 8C C2 5D CB 55 8B ............].U.
0015:3D40 EC 8B D7 8B DE 1E C5 76 0A 8B FE 8C D8 8E C0 33 .......v.......3
0015:3D50 C0 B9 FF FF F2 AE F7 D1 C4 7E 06 8B C7 74 04 A5 .........~...t..
0015:3D60 49 EB 06 A8 01 74 02 A4 49 D1 E9 F3 A5 13 C9 F3 I....t..I.......
0015:3D70 A4 8B F3 8B FA 1F 8C C2 5D CB 55 8B EC 8B D7 8B ........].U.....
0015:3D80 DE 1E C5 76 06 C4 7E 0A 33 C0 B9 FF FF F2 AE F7 ...v..~.3.......
0015:3D90 D1 2B F9 F3 A6 74 05 1B C0 83 D8 FF 1F 8B F3 8B .+...t..........
0015:3DA0 FA 5D CB 00                                     .]..            

;; fn0015_3DA4: 0015:3DA4
;;   Called from:
;;     0015:3EE9 (in fn0015_3EC0)
;;     0015:3F06 (in fn0015_3EC0)
fn0015_3DA4 proc
	push	bp
	mov	bp,sp
	mov	dx,di
	les	di,[bp+6h]
	xor	ax,ax
	mov	cx,0FFFFh
	repne scasb
	not	cx
	jnz	3DB8h

l0015_3DB7:
	dec	cx

l0015_3DB8:
	xchg	cx,ax
	mov	di,dx
	pop	bp
	retf
0015:3DBD                                        00                    .  

;; fn0015_3DBE: 0015:3DBE
;;   Called from:
;;     0015:444C (in fn0015_440C)
;;     0015:4540 (in fn0015_440C)
fn0015_3DBE proc
	push	bp
	mov	bp,sp
	push	di
	push	si
	push	ds
	les	di,[bp+6h]
	lds	si,[bp+0Ah]
	mov	bx,di
	mov	cx,[bp+0Eh]
	jcxz	3DDDh

l0015_3DD1:
	lodsb
	or	al,al
	jz	3DD9h

l0015_3DD6:
	stosb
	loop	3DD1h

l0015_3DD9:
	xor	al,al

l0015_3DDB:
	rep stosb

l0015_3DDD:
	mov	ax,bx
	mov	dx,es
	pop	ds
	pop	si
	pop	di
	mov	sp,bp
	pop	bp
	retf

;; fn0015_3DE8: 0015:3DE8
;;   Called from:
;;     0015:3F2F (in fn0015_3EC0)
fn0015_3DE8 proc
	push	bp
	mov	bp,sp
	push	di
	push	si
	push	ds
	mov	cx,[bp+0Eh]
	jcxz	3E1Ah

l0015_3DF3:
	mov	bx,cx
	les	di,[bp+6h]
	mov	si,di
	xor	ax,ax

l0015_3DFC:
	repne scasb

l0015_3DFE:
	neg	cx
	add	cx,bx
	mov	di,si
	lds	si,[bp+0Ah]
	rep cmpsb
	mov	al,[si-1h]
	xor	cx,cx
	cmp	al,es:[di-1h]
	ja	3E18h

l0015_3E14:
	jz	3E1Ah

l0015_3E16:
	dec	cx
	dec	cx

l0015_3E18:
	not	cx

l0015_3E1A:
	mov	ax,cx
	pop	ds
	pop	si
	pop	di
	mov	sp,bp
	pop	bp
	retf
0015:3E23          00 E9 05 00 00                            .....        

;; fn0015_3E28: 0015:3E28
;;   Called from:
;;     0015:4472 (in fn0015_440C)
;;     0015:44B6 (in fn0015_440C)
;;     0015:44EE (in fn0015_440C)
fn0015_3E28 proc
	jmp	3E2Ch
0015:3E2B                                  00                        .    

l0015_3E2C:
	push	bp
	mov	bp,sp
	push	di
	push	si
	push	ds
	lds	si,[bp+6h]
	xor	ax,ax
	cwd
	xor	bx,bx

l0015_3E3A:
	lodsb
	cmp	al,20h
	jz	3E3Ah

l0015_3E3F:
	cmp	al,9h
	jz	3E3Ah

l0015_3E43:
	push	ax
	cmp	al,2Dh
	jz	3E4Ch

l0015_3E48:
	cmp	al,2Bh
	jnz	3E4Dh

l0015_3E4C:
	lodsb

l0015_3E4D:
	cmp	al,39h
	ja	3E70h

l0015_3E51:
	sub	al,30h
	jc	3E70h

l0015_3E55:
	shl	bx,1h
	rcl	dx,1h
	mov	cx,bx
	mov	di,dx
	shl	bx,1h
	rcl	dx,1h
	shl	bx,1h
	rcl	dx,1h
	add	bx,cx
	adc	dx,di
	add	bx,ax
	adc	dx,0h
	jmp	3E4Ch

l0015_3E70:
	pop	ax
	cmp	al,2Dh
	xchg	bx,ax
	jnz	3E7Dh

l0015_3E76:
	neg	ax
	adc	dx,0h
	neg	dx

l0015_3E7D:
	pop	ds
	pop	si
	pop	di
	pop	bp
	retf
0015:3E82       55 8B EC 56 57 B3 01 8B 4E 0C 8B 46 06 33   U..VW...N..F.3
0015:3E90 D2 83 F9 0A 75 01 99 1E C5 7E 08 E9 BD 0A       ....u....~....  

;; fn0015_3E9E: 0015:3E9E
;;   Called from:
;;     0015:219D (in fn0015_214C)
fn0015_3E9E proc
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	mov	ax,0h
	push	ax
	push	ds
	mov	ax,6544h
	push	ax
	call	far 045Fh:0028h
	sub	bp,2h
	mov	sp,bp
	pop	ds
	pop	bp
	dec	bp
	retf
0015:3EBF                                              00                .

;; fn0015_3EC0: 0015:3EC0
;;   Called from:
;;     0015:441D (in fn0015_440C)
fn0015_3EC0 proc
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	sub	sp,4h
	push	si
	mov	ax,[5FBEh]
	mov	dx,[5FC0h]
	mov	[bp-6h],ax
	mov	[bp-4h],dx
	or	dx,ax
	jz	3F50h

l0015_3EDA:
	mov	ax,[bp+8h]
	or	ax,[bp+6h]
	jz	3F50h

l0015_3EE2:
	push	word ptr [bp+8h]
	push	word ptr [bp+6h]
	nop
	push	cs
	call	3DA4h
	add	sp,4h
	mov	si,ax

l0015_3EF2:
	les	bx,[bp-6h]
	mov	ax,es:[bx+2h]
	or	ax,es:[bx]
	jz	3F50h

l0015_3EFE:
	push	word ptr es:[bx+2h]
	push	word ptr es:[bx]
	nop
	push	cs
	call	3DA4h
	add	sp,4h
	cmp	ax,si
	jbe	3F4Ah

l0015_3F11:
	les	bx,[bp-6h]
	les	bx,es:[bx]
	cmp	byte ptr es:[bx+si],3Dh
	jnz	3F4Ah

l0015_3F1D:
	push	si
	push	word ptr [bp+8h]
	push	word ptr [bp+6h]
	les	bx,[bp-6h]
	push	word ptr es:[bx+2h]
	push	word ptr es:[bx]
	nop
	push	cs
	call	3DE8h
	add	sp,0Ah
	or	ax,ax
	jnz	3F4Ah

l0015_3F3A:
	les	bx,[bp-6h]
	mov	ax,es:[bx]
	mov	dx,es:[bx+2h]
	add	ax,si
	inc	ax
	jmp	3F53h
0015:3F49                            90                            .      

l0015_3F4A:
	add	word ptr [bp-6h],4h
	jmp	3EF2h

l0015_3F50:
	xor	ax,ax
	cwd

l0015_3F53:
	pop	si
	lea	sp,[bp-2h]
	pop	ds
	pop	bp
	dec	bp
	retf
0015:3F5B                                  90 45 55 8B EC            .EU..
0015:3F60 1E 57 56 33 FF 39 3E EC 61 74 05 BE 34 62 EB 09 .WV3.9>.at..4b..
0015:3F70 BE 10 62 EB 04 90 83 C6 0C 39 36 F0 5F 72 11 1E ..b......96._r..
0015:3F80 56 90 0E E8 7A EA 83 C4 04 40 74 EA 47 EB E7 90 V...z....@t.G...
0015:3F90 8B C7 5E 5F 8D 66 FE 1F 5D 4D CB 90 45 55 8B EC ..^_.f..]M..EU..
0015:3FA0 1E 83 EC 04 57 56 C6 06 B2 68 42 8B 46 06 8B 56 ....WV...hB.F..V
0015:3FB0 08 A3 AE 68 89 16 B0 68 BE A8 68 89 04 89 54 02 ...h...h..h...T.
0015:3FC0 C7 06 AC 68 FF 7F 8D 46 0E 16 50 FF 76 0C FF 76 ...h...F..P.v..v
0015:3FD0 0A 1E 56 90 0E E8 DC F0 83 C4 0C 8B F8 FF 0E AC ..V.............
0015:3FE0 68 78 0F C4 1E A8 68 FF 06 A8 68 26 C6 07 00 EB hx....h...h&....
0015:3FF0 0E 90 1E 56 33 C0 50 90 0E E8 BA EB 83 C4 06 8B ...V3.P.........
0015:4000 C7 5E 5F 8D 66 FE 1F 5D 4D CB 45 55 8B EC 1E 57 .^_.f..]M.EU...W
0015:4010 56 8B 76 06 0B F6 7C 06 39 36 8E 5F 7F 0C C7 06 V.v...|.96._....
0015:4020 78 5F 09 00 B8 FF FF EB 48 90 83 3E EC 61 00 74 x_......H..>.a.t
0015:4030 0F 39 36 8A 5F 7E 05 83 FE 02 7F 04 33 C0 EB 31 .96._~......3..1
0015:4040 A0 82 5F 8A 26 83 5F 3D 1E 03 7C F0 F6 84 90 5F .._.&._=..|...._
0015:4050 01 74 13 56 90 0E E8 1B 11 83 C4 02 8B F8 0B F8 .t.V............
0015:4060 74 0D 89 3E 88 5F C7 06 78 5F 09 00 BF FF FF 8B t..>._..x_......
0015:4070 C7 5E 5F 8D 66 FE 1F 5D 4D CB 8C D8 90 45 55 8B .^_.f..]M....EU.
0015:4080 EC 1E 8E D8 FF 76 08 2E F7 06 F6 22 01 00 74 11 .....v....."..t.
0015:4090 E8 4D 01 83 C4 02 0B C0 74 0C 50 50 9A 60 00 5F .M......t.PP.`._
0015:40A0 04 9A 50 00 5F 04 83 ED 02 8B E5 1F 5D 4D CB 8C ..P._.......]M..
0015:40B0 D8 90 45 55 8B EC 1E 8E D8 83 EC 02 56 57 8B 5E ..EU........VW.^
0015:40C0 0A 8B 46 06 F7 E3 8B C8 8B FA 8B 46 08 F7 E3 03 ..F........F....
0015:40D0 C7 8B D0 0B C1 75 03 E9 D0 00 33 F6 8D 47 FF 83 .....u....3..G..
0015:40E0 FA 02 77 04 72 0B E3 09 23 C3 74 03 E9 BB 00 EB ..w.r...#.t.....
0015:40F0 28 83 FA 01 73 0F 81 C1 FF 0F 81 E1 00 F0 0B C9 (...s...........
0015:4100 75 17 42 EB 14 23 C3 74 10 33 C0 F7 F3 8B F2 03 u.B..#.t.3......
0015:4110 CA 73 03 E9 94 00 BA 01 00 52 51 2E 8B 1E F6 22 .s.......RQ...."
0015:4120 B8 02 00 F7 C3 01 00 75 03 B8 20 00 53 50 52 51 .......u.. .SPRQ
0015:4130 9A 38 00 5F 04 5B 0B C0 74 38 F7 C3 01 00 74 32 .8._.[..t8....t2
0015:4140 50 50 50 9A 58 00 5F 04 0B C0 74 03 E9 8B 00 0B PPP.X._...t.....
0015:4150 C2 75 03 E9 84 00 8B C2 50 E8 CE 00 83 C4 04 59 .u......P......Y
0015:4160 0B C0 75 0E 51 51 9A 60 00 5F 04 9A 50 00 5F 04 ..u.QQ.`._..P._.
0015:4170 33 C0 59 5A 0B C0 74 32 89 46 FC FC 33 FF 8B D9 3.YZ..t2.F..3...
0015:4180 85 D2 74 16 8E C0 33 C0 B9 00 80 F3 AB 40 B9 20 ..t...3......@. 
0015:4190 00 D3 E0 8C C1 03 C1 4A 75 EA 8B CB E3 06 8E C0 .......Ju.......
0015:41A0 33 C0 F3 AA 8B 56 FC 96 EB 25 33 C0 99 8B 0E 8E 3....V...%3.....
0015:41B0 61 0B 0E 8C 61 74 18 FF 76 08 FF 76 06 FF 76 0A a...at..v..v..v.
0015:41C0 FF 1E 8C 61 83 C4 06 99 0B C0 74 03 E9 EF FE 5F ...a......t...._
0015:41D0 5E 83 ED 02 8B E5 1F 5D 4D CB B8 12 00 E9 BA E6 ^......]M.......
0015:41E0 55 8B EC 83 EC 08 A1 90 61 8B 16 92 61 89 46 FC U.......a...a.F.
0015:41F0 89 56 FE 8B 0E 94 61 80 E1 FC 03 C1 89 46 F8 EB .V....a......F..
0015:4200 05 90 83 46 FC 04 8B 46 FC 39 46 F8 76 16 8B 46 ...F...F.9F.v..F
0015:4210 04 C4 5E FC 26 39 07 75 E9 26 C7 07 00 00 26 8B ..^.&9.u.&....&.
0015:4220 47 02 EB 02 33 C0 8B E5 5D C3 55 8B EC 83 EC 0A G...3...].U.....
0015:4230 A1 90 61 8B 16 92 61 89 46 FC 89 56 FE 8B 0E 94 ..a...a.F..V....
0015:4240 61 80 E1 FC 03 C1 89 46 F8 EB 05 90 83 46 FC 04 a......F.....F..
0015:4250 8B 46 FC 39 46 F8 76 18 C4 5E FC 26 83 3F 00 75 .F.9F.v..^.&.?.u
0015:4260 EB 8B 46 06 26 89 47 02 8B 46 04 26 89 07 EB 6A ..F.&.G..F.&...j
0015:4270 A1 94 61 05 28 00 89 46 F6 50 FF 36 92 61 FF 36 ..a.(..F.P.6.a.6
0015:4280 90 61 90 0E E8 23 D4 83 C4 06 89 46 FC 89 56 FE .a...#.....F..V.
0015:4290 0B D0 75 04 33 C0 EB 42 8B 56 FE A3 90 61 89 16 ..u.3..B.V...a..
0015:42A0 92 61 8B 46 04 8B 0E 94 61 80 E1 FC 01 4E FC C4 .a.F....a....N..
0015:42B0 5E FC 26 89 07 8B 4E 06 26 89 4F 02 8B 4E F6 89 ^.&...N.&.O..N..
0015:42C0 0E 94 61 B9 24 00 51 33 C9 51 8D 4F 04 89 4E FC ..a.$.Q3.Q.O..N.
0015:42D0 06 51 90 0E E8 2F 06 8B 46 04 8B E5 5D C3 8C D8 .Q.../..F...]...
0015:42E0 90 45 55 8B EC 1E 8E D8 56 57 1E C5 7E 06 8B 05 .EU.....VW..~...
0015:42F0 8B 5D 02 8B 4D 04 8B 55 06 8B 75 08 FF 75 0A C5 .]..M..U..u..u..
0015:4300 7E 0E 8E 05 8E 5D 06 5F 2E F7 06 F6 22 01 00 74 ~....]._...."..t
0015:4310 07 9A C8 00 5F 04 EB 02 CD 21 57 1E C5 7E 0E 8C ...._....!W..~..
0015:4320 05 8F 45 06 C5 7E 0A 89 05 89 5D 02 89 4D 04 89 ..E..~....]..M..
0015:4330 55 06 89 75 08 8F 45 0A 72 04 33 F6 EB 0E 1F 1E U..u..E.r.3.....
0015:4340 0E E8 6B E6 C5 7E 0A BE 01 00 8B 05 89 75 0C 1F ..k..~.......u..
0015:4350 5F 5E 83 ED 02 8B E5 1F 5D 4D CB 00             _^......]M..    

;; fn0015_435C: 0015:435C
;;   Called from:
;;     0045:54C1 (in fn0045_54AA)
fn0015_435C proc
	mov	ax,ds
	nop
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ds,ax
	push	si
	mov	ah,2Ah
	test	word ptr cs:[22F6h],1h
	jz	4379h

l0015_4372:
	call	far 045Fh:00C8h
	jmp	437Bh

l0015_4379:
	int	21h

l0015_437B:
	mov	bx,dx
	mov	si,cx
	mov	ah,2Ch
	test	word ptr cs:[22F6h],1h
	jz	4391h

l0015_438A:
	call	far 045Fh:00C8h
	jmp	4393h

l0015_4391:
	int	21h

l0015_4393:
	mov	ah,0h
	mov	al,dh
	push	ax
	mov	al,cl
	push	ax
	mov	al,ch
	push	ax
	push	ax
	mov	ah,2Ah
	test	word ptr cs:[22F6h],1h
	jz	43B1h

l0015_43AA:
	call	far 045Fh:00C8h
	jmp	43B3h

l0015_43B1:
	int	21h

l0015_43B3:
	cmp	bx,dx
	pop	ax
	jz	43C0h

l0015_43B8:
	cmp	al,17h
	jnz	43C0h

l0015_43BC:
	mov	dx,bx
	mov	cx,si

l0015_43C0:
	mov	ah,0h
	mov	al,dl
	push	ax
	mov	al,dh
	push	ax
	sub	cx,7BCh
	push	cx
	nop
	push	cs
	call	462Eh
	add	sp,0Ch
	cmp	word ptr [bp+8h],0h
	jz	43E5h

l0015_43DB:
	les	bx,[bp+6h]
	mov	es:[bx+2h],dx
	mov	es:[bx],ax

l0015_43E5:
	pop	si
	sub	bp,2h
	mov	sp,bp
	pop	ds
	pop	bp
	dec	bp
	retf
0015:43EF                                              00                .

;; fn0015_43F0: 0015:43F0
;;   Called from:
;;     0015:4652 (in fn0015_462E)
fn0015_43F0 proc
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	cmp	word ptr [68B4h],0h
	jnz	4405h

l0015_43FC:
	nop
	push	cs
	call	440Ch
	inc	word ptr [68B4h]

l0015_4405:
	lea	sp,[bp-2h]
	pop	ds
	pop	bp
	dec	bp
	retf

;; fn0015_440C: 0015:440C
;;   Called from:
;;     0015:43FD (in fn0015_43F0)
fn0015_440C proc
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	sub	sp,4h
	push	si
	xor	si,si
	mov	ax,61CAh
	push	ds
	push	ax
	nop
	push	cs
	call	3EC0h
	add	sp,4h
	mov	[bp-6h],ax
	mov	[bp-4h],dx
	or	dx,ax
	jnz	4431h

l0015_442E:
	jmp	4552h

l0015_4431:
	les	bx,[bp-6h]
	cmp	byte ptr es:[bx],0h
	jnz	443Dh

l0015_443A:
	jmp	4552h

l0015_443D:
	mov	ax,3h
	push	ax
	push	es
	push	bx
	push	word ptr [61DEh]
	push	word ptr [61DCh]
	nop
	push	cs
	call	3DBEh
	add	sp,0Ah
	add	word ptr [bp-6h],3h
	les	bx,[bp-6h]
	cmp	byte ptr es:[bx],2Dh
	jnz	4467h

l0015_4460:
	inc	si
	lea	ax,[bx+1h]
	mov	[bp-6h],ax

l0015_4467:
	mov	ax,0E10h
	cwd
	push	dx
	push	ax
	push	es
	push	word ptr [bp-6h]
	nop
	push	cs
	call	3E28h
	add	sp,4h
	push	dx
	push	ax
	nop
	push	cs
	call	52BEh
	mov	[61CEh],ax
	mov	[61D0h],dx

l0015_4487:
	les	bx,[bp-6h]
	cmp	byte ptr es:[bx],2Bh
	jz	449Ch

l0015_4490:
	cmp	byte ptr es:[bx],30h
	jl	44A2h

l0015_4496:
	cmp	byte ptr es:[bx],39h
	jg	44A2h

l0015_449C:
	inc	word ptr [bp-6h]
	jmp	4487h
0015:44A1    90                                            .              

l0015_44A2:
	cmp	byte ptr es:[bx],3Ah
	jnz	4512h

l0015_44A8:
	mov	ax,3Ch
	cwd
	push	dx
	push	ax
	inc	word ptr [bp-6h]
	push	es
	push	word ptr [bp-6h]
	nop
	push	cs
	call	3E28h
	add	sp,4h
	push	dx
	push	ax
	nop
	push	cs
	call	52BEh
	add	[61CEh],ax
	adc	[61D0h],dx
	jmp	44D7h

l0015_44CE:
	cmp	byte ptr es:[bx],39h
	jg	44E0h

l0015_44D4:
	inc	word ptr [bp-6h]

l0015_44D7:
	les	bx,[bp-6h]
	cmp	byte ptr es:[bx],30h
	jge	44CEh

l0015_44E0:
	cmp	byte ptr es:[bx],3Ah
	jnz	4512h

l0015_44E6:
	inc	word ptr [bp-6h]
	push	es
	push	word ptr [bp-6h]
	nop
	push	cs
	call	3E28h
	add	sp,4h
	add	[61CEh],ax
	adc	[61D0h],dx
	jmp	4509h
0015:44FF                                              90                .

l0015_4500:
	cmp	byte ptr es:[bx],39h
	jg	4512h

l0015_4506:
	inc	word ptr [bp-6h]

l0015_4509:
	les	bx,[bp-6h]
	cmp	byte ptr es:[bx],30h
	jge	4500h

l0015_4512:
	or	si,si
	jz	4523h

l0015_4516:
	neg	word ptr [61CEh]
	adc	word ptr [61D0h],0h
	neg	word ptr [61D0h]

l0015_4523:
	les	bx,[bp-6h]
	mov	al,es:[bx]
	cbw
	mov	[61D2h],ax
	or	ax,ax
	jz	454Ah

l0015_4531:
	mov	ax,3h
	push	ax
	push	es
	push	bx
	push	word ptr [61E2h]
	push	word ptr [61E0h]
	nop
	push	cs
	call	3DBEh
	add	sp,0Ah
	jmp	4552h
0015:4549                            90                            .      

l0015_454A:
	les	bx,[61E0h]
	mov	byte ptr es:[bx],0h

l0015_4552:
	pop	si
	lea	sp,[bp-2h]
	pop	ds
	pop	bp
	dec	bp
	retf

;; fn0015_455A: 0015:455A
;;   Called from:
;;     0015:4708 (in fn0015_462E)
fn0015_455A proc
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	sub	sp,4h
	push	si
	les	bx,[bp+6h]
	cmp	word ptr es:[bx+0Ah],43h
	jge	4570h

l0015_456D:
	jmp	4623h

l0015_4570:
	cmp	word ptr es:[bx+8h],3h
	jge	457Ah

l0015_4577:
	jmp	4623h

l0015_457A:
	cmp	word ptr es:[bx+8h],9h
	jle	4584h

l0015_4581:
	jmp	4623h

l0015_4584:
	cmp	word ptr es:[bx+8h],3h
	jle	4592h

l0015_458B:
	cmp	word ptr es:[bx+8h],9h
	jl	460Eh

l0015_4592:
	mov	si,es:[bx+0Ah]
	cmp	si,56h
	jle	45B2h

l0015_459B:
	cmp	word ptr es:[bx+8h],3h
	jnz	45B2h

l0015_45A2:
	mov	bx,es:[bx+8h]
	add	bx,bx
	mov	ax,[bx+61B0h]
	add	ax,7h
	jmp	45BCh
0015:45B1    90                                            .              

l0015_45B2:
	mov	bx,es:[bx+8h]
	add	bx,bx
	mov	ax,[bx+61B2h]

l0015_45BC:
	mov	[bp-4h],ax
	test	si,3h
	jnz	45C8h

l0015_45C5:
	inc	word ptr [bp-4h]

l0015_45C8:
	mov	ax,7h
	cwd
	push	dx
	push	ax
	mov	cx,16Dh
	lea	ax,[si-46h]
	imul	cx
	lea	cx,[si-1h]
	sar	cx,1h
	sar	cx,1h
	add	ax,cx
	add	ax,[bp-4h]
	cwd
	sub	ax,0Dh
	sbb	dx,0h
	push	dx
	push	ax
	nop
	push	cs
	call	52F0h
	sub	ax,[bp-4h]
	neg	ax
	les	bx,[bp+6h]
	cmp	word ptr es:[bx+8h],3h
	jnz	4614h

l0015_45FF:
	cmp	ax,es:[bx+0Eh]
	jl	460Eh

l0015_4605:
	jnz	4623h

l0015_4607:
	cmp	word ptr es:[bx+4h],2h
	jl	4623h

l0015_460E:
	mov	ax,1h
	jmp	4625h
0015:4613          90                                        .            

l0015_4614:
	cmp	es:[bx+0Eh],ax
	jl	460Eh

l0015_461A:
	jnz	4623h

l0015_461C:
	cmp	word ptr es:[bx+4h],1h
	jl	460Eh

l0015_4623:
	xor	ax,ax

l0015_4625:
	pop	si
	lea	sp,[bp-2h]
	pop	ds
	pop	bp
	dec	bp
	retf
0015:462D                                        90                    .  

;; fn0015_462E: 0015:462E
;;   Called from:
;;     0015:43CE (in fn0015_435C)
fn0015_462E proc
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	sub	sp,1Ah
	push	di
	push	si
	mov	si,[bp+6h]
	mov	bx,[bp+8h]
	add	bx,bx
	mov	di,[bx+61AEh]
	test	si,3h
	jnz	4651h

l0015_464A:
	cmp	word ptr [bp+8h],2h
	jle	4651h

l0015_4650:
	inc	di

l0015_4651:
	nop
	push	cs
	call	43F0h
	mov	ax,3Ch
	cwd
	push	dx
	push	ax
	push	dx
	push	ax
	mov	ax,18h
	cwd
	push	dx
	push	ax
	mov	ax,si
	mov	cx,16Dh
	imul	cx
	mov	cx,ax
	mov	ax,[bp+0Ah]
	mov	bx,dx
	cwd
	mov	[bp-1Ch],ax
	mov	[bp-1Ah],dx
	lea	ax,[si+3h]
	sar	ax,1h
	sar	ax,1h
	cwd
	add	ax,[bp-1Ch]
	adc	dx,[bp-1Ah]
	add	cx,ax
	adc	bx,dx
	mov	ax,di
	cwd
	add	cx,di
	adc	bx,dx
	add	cx,0E44h
	adc	bx,0h
	push	bx
	push	cx
	nop
	push	cs
	call	52BEh
	mov	cx,ax
	mov	ax,[bp+0Ch]
	mov	bx,dx
	cwd
	add	cx,ax
	adc	bx,dx
	push	bx
	push	cx
	nop
	push	cs
	call	52BEh
	mov	cx,ax
	mov	ax,[bp+0Eh]
	mov	bx,dx
	cwd
	add	cx,ax
	adc	bx,dx
	push	bx
	push	cx
	nop
	push	cs
	call	52BEh
	mov	cx,ax
	mov	ax,[bp+10h]
	mov	bx,dx
	cwd
	add	cx,ax
	adc	bx,dx
	add	cx,[61CEh]
	adc	bx,[61D0h]
	mov	[bp-18h],cx
	mov	[bp-16h],bx
	mov	ax,[bp+0Ah]
	add	ax,di
	mov	[bp-6h],ax
	lea	ax,[si+50h]
	mov	[bp-0Ah],ax
	mov	ax,[bp+8h]
	dec	ax
	mov	[bp-0Ch],ax
	mov	ax,[bp+0Ch]
	mov	[bp-10h],ax
	cmp	word ptr [61D2h],0h
	jz	471Ch

l0015_4702:
	lea	ax,[bp-14h]
	push	ss
	push	ax
	nop
	push	cs
	call	455Ah
	add	sp,4h
	or	ax,ax
	jz	471Ch

l0015_4713:
	sub	word ptr [bp-18h],0E10h
	sbb	word ptr [bp-16h],0h

l0015_471C:
	mov	ax,[bp-18h]
	mov	dx,[bp-16h]
	pop	si
	pop	di
	lea	sp,[bp-2h]
	pop	ds
	pop	bp
	dec	bp
	retf
0015:472B                                  90 55 8B EC 57            .U..W
0015:4730 C4 7E 06 8B DF 33 C0 B9 FF FF F2 AE F7 D1 8A 46 .~...3.........F
0015:4740 0A 8B FB F2 AE 74 0D 0A C0 75 03 47 EB 06 33 C0 .....t...u.G..3.
0015:4750 33 D2 EB 05 8D 45 FF 8C C2 5F 8B E5 5D CB 55 8B 3....E..._..].U.
0015:4760 EC 8B D6 1E C5 76 0A C4 5E 06 B0 FF 0A C0 74 2D .....v..^.....t-
0015:4770 AC 26 8A 27 43 3A E0 74 F3 2C 41 3C 1A 1A C9 80 .&.'C:.t.,A<....
0015:4780 E1 20 02 C1 04 41 86 E0 2C 41 3C 1A 1A C9 80 E1 . ...A..,A<.....
0015:4790 20 02 C1 04 41 3A C4 74 D3 1A C0 1C FF 98 1F 8B  ...A:.t........
0015:47A0 F2 5D CB 00 55 8B EC 83 EC 20 56 57 16 07 B9 10 .]..U.... VW....
0015:47B0 00 33 C0 8D 7E E0 F3 AB 1E 07 C5 76 0A AC 0A C0 .3..~......v....
0015:47C0 74 14 8B F8 8B C8 B0 01 80 E1 07 D2 E0 B1 03 D3 t...............
0015:47D0 EF 08 43 E0 EB E7 C5 76 06 8C D8 0B C6 75 05 26 ..C....v.....u.&
0015:47E0 C5 36 E4 61 AC 25 FF 00 75 0F 4E 26 89 36 E4 61 .6.a.%..u.N&.6.a
0015:47F0 26 8C 1E E6 61 8E D8 EB 48 8B F8 8B C8 B0 01 80 &...a...H.......
0015:4800 E1 07 D2 E0 B1 03 D3 EF 22 43 E0 75 D7 8D 44 FF ........"C.u..D.
0015:4810 26 A3 E4 61 26 8C 1E E6 61 AC 25 FF 00 75 05 8D &..a&...a.%..u..
0015:4820 44 FF EB 18 8B F8 8B C8 B0 01 80 E1 07 D2 E0 B1 D...............
0015:4830 03 D3 EF 22 43 E0 74 E1 88 64 FF 96 26 87 06 E4 ..."C.t..d..&...
0015:4840 61 8C DA 06 1F 5F 5E 8B E5 5D CB 00 55 8B EC 33 a...._^..]..U..3
0015:4850 C0 8B 4E 0E E3 4F 1E 57 56 C5 76 06 C4 7E 0A 8B ..N..O.WV.v..~..
0015:4860 C1 48 8B D7 F7 D2 2B C2 1B DB 23 C3 03 C2 8B D6 .H....+...#.....
0015:4870 F7 D2 2B C2 1B DB 23 C3 03 C2 40 91 2B C1 F3 A6 ..+...#...@.+...
0015:4880 75 1B 91 E3 1D 0B F6 75 07 8C D8 05 30 00 8E D8 u......u....0...
0015:4890 0B FF 75 CB 8C C0 05 30 00 8E C0 EB C2 1B C0 83 ..u....0........
0015:48A0 D8 FF 5E 5F 1F 5D CB 00 55 8B EC 8B 4E 0E 1E 57 ..^_.]..U...N..W
0015:48B0 56 E3 48 C5 76 0A C4 7E 06 8B C1 48 8B D7 F7 D2 V.H.v..~...H....
0015:48C0 2B C2 1B DB 23 C3 03 C2 8B D6 F7 D2 2B C2 1B DB +...#.......+...
0015:48D0 23 C3 03 C2 40 91 2B C1 D1 E9 F3 A5 13 C9 F3 A4 #...@.+.........
0015:48E0 91 E3 18 0B F6 75 07 8C D8 05 30 00 8E D8 0B FF .....u....0.....
0015:48F0 75 C7 8C C0 05 30 00 8E C0 EB BE 8B 46 06 8B 56 u....0......F..V
0015:4900 08 5E 5F 1F 5D CB 55 8B EC 8B 4E 0C E3 38 57 C4 .^_.].U...N..8W.
0015:4910 7E 06 8B D7 F7 DA 74 0C 2B D1 1B DB 23 D3 03 D1 ~.....t.+...#...
0015:4920 87 D1 2B D1 8B 46 0A 8A E0 D1 E9 F3 AB 13 C9 F3 ..+..F..........
0015:4930 AA 87 D1 E3 10 8C C3 81 C3 30 00 8E C3 D1 E9 F3 .........0......
0015:4940 AB 13 C9 F3 AA 5F 8B 46 06 8B 56 08 5D CB 8B 4E ....._.F..V.]..N
0015:4950 0E 8B 46 06 8B 56 08 1E C5 7E 0A 57 1E 07 FC 93 ..F..V...~.W....
0015:4960 0A C0 74 13 83 F9 0A 75 0E 0B D2 79 0A B0 2D AA ..t....u...y..-.
0015:4970 F7 DB 83 D2 00 F7 DA 8B F7 92 33 D2 0B C0 74 02 ..........3...t.
0015:4980 F7 F1 93 F7 F1 92 87 D3 04 30 3C 39 76 02 04 27 .........0<9v..'
0015:4990 AA 8B C2 0B C3 75 E2 88 05 4F AC 86 05 88 44 FF .....u...O....D.
0015:49A0 8D 44 01 3B C7 72 F2 8C DA 58 1F 5F 5E 8B E5 5D .D.;.r...X._^..]
0015:49B0 CB 00 45 55 8B EC 1E 8B 46 06 99 33 C2 2B C2 8D ..EU....F..3.+..
0015:49C0 66 FE 1F 5D 4D CB 45 55 8B EC 1E 83 EC 14 57 56 f..]M.EU......WV
0015:49D0 8B 46 0A 8B 56 0C 89 46 EE 89 56 F0 8B 4E 10 2B .F..V..F..V..N.+
0015:49E0 DB 53 51 8B 4E 0E 83 E9 01 1B DB 53 51 90 0E E8 .SQ.N......SQ...
0015:49F0 CC 08 03 46 0A 83 D2 00 B9 20 00 D3 E2 03 56 0C ...F..... ....V.
0015:4A00 89 46 FA 89 56 FC 8B 46 EE 8B 56 F0 39 56 FC 73 .F..V..F..V.9V.s
0015:4A10 03 E9 C0 00 77 08 39 46 FA 73 03 E9 B6 00 8B 46 ....w.9F.s.....F
0015:4A20 0E D1 E8 89 46 F4 0B C0 75 03 E9 8D 00 F6 46 0E ....F...u.....F.
0015:4A30 01 75 01 48 F7 66 10 03 46 EE 83 D2 00 B9 20 00 .u.H.f..F..... .
0015:4A40 D3 E2 03 56 F0 89 46 F6 89 56 F8 52 50 FF 76 08 ...V..F..V.RP.v.
0015:4A50 FF 76 06 8B F0 8B FA FF 5E 12 83 C4 08 0B C0 75 .v......^......u
0015:4A60 07 8B C6 8B D7 EB 79 90 0B C0 7D 30 8B 46 10 2B ......y...}0.F.+
0015:4A70 D2 F7 D8 13 D2 F7 DA 03 46 F6 83 D2 00 B9 20 00 ........F..... .
0015:4A80 D3 E2 03 56 F8 89 46 FA 89 56 FC F6 46 0E 01 75 ...V..F..V..F..u
0015:4A90 23 8B 46 F4 48 89 46 0E E9 6B FF 90 8B 46 10 2B #.F.H.F..k...F.+
0015:4AA0 D2 03 46 F6 13 D2 B9 20 00 D3 E2 03 56 F8 89 46 ..F.... ....V..F
0015:4AB0 EE 89 56 F0 8B 46 F4 EB DC 90 83 7E 0E 00 74 14 ..V..F.....~..t.
0015:4AC0 52 FF 76 EE FF 76 08 FF 76 06 FF 5E 12 83 C4 08 R.v..v..v..^....
0015:4AD0 0B C0 74 06 33 C0 99 EB 07 90 8B 46 EE 8B 56 F0 ..t.3......F..V.
0015:4AE0 5E 5F 8D 66 FE 1F 5D 4D CB 90 8C D8 90 45 55 8B ^_.f..]M.....EU.
0015:4AF0 EC 1E 8E D8 56 57 83 7E 0C 00 74 2A 8B 4E 0A E3 ....VW.~..t*.N..
0015:4B00 25 49 74 22 8B 7E 08 8B 76 06 51 57 56 03 76 0C %It".~..v.QWV.v.
0015:4B10 1B C0 25 30 00 03 F8 57 56 FF 5E 0E 83 C4 08 59 ..%0...WV.^....Y
0015:4B20 0B C0 78 0D E2 E4 5F 5E 83 ED 02 8B E5 1F 5D 4D ..x..._^......]M
0015:4B30 CB 8B 46 0A 48 33 C9 D1 E8 E0 FC F7 D9 B8 08 00 ..F.H3..........
0015:4B40 F7 E1 72 30 8B F0 90 0E E8 61 F0 3B C6 72 25 55 ..r0.....a.;.r%U
0015:4B50 8B FC 8B 46 0A 48 F7 66 0C 03 46 06 83 D2 00 B9 ...F.H.f..F.....
0015:4B60 20 00 D3 E2 03 56 08 52 50 FF 76 08 FF 76 06 EB  ....V.RP.v..v..
0015:4B70 0C 5D EB B2 B8 FC FF 0E E8 77 DA EB A9 3B E7 73 .].......w...;.s
0015:4B80 F0 8B EC 8B 5E 02 8B 76 00 3B 5E 06 72 0C 77 05 ....^..v.;^.r.w.
0015:4B90 3B 76 04 72 05 83 C4 08 EB E3 83 EC 08 8B 4E 06 ;v.r..........N.
0015:4BA0 8B 56 04 89 4E FE 89 56 FC 36 03 55 14 1B C0 25 .V..N..V.6.U...%
0015:4BB0 30 00 03 C8 89 5E FA 89 76 F8 51 52 36 03 75 14 0....^..v.QR6.u.
0015:4BC0 1B C0 25 30 00 03 D8 3B 76 04 75 05 3B 5E 06 74 ..%0...;v.u.;^.t
0015:4BD0 1F 53 FF 76 02 FF 76 00 53 56 36 FF 5D 16 83 C4 .S.v..v.SV6.]...
0015:4BE0 08 5B 0B C0 7F 0A 74 D4 89 5E FA 89 76 F8 EB CC .[....t..^..v...
0015:4BF0 5A 59 53 56 8B F2 36 2B 75 14 1B C0 25 30 00 2B ZYSV..6+u...%0.+
0015:4C00 C8 51 51 56 FF 76 02 FF 76 00 36 FF 5D 16 83 C4 .QQV.v..v.6.]...
0015:4C10 08 59 0B C0 7F 14 74 08 89 4E FE 89 76 FC EB D6 .Y....t..N..v...
0015:4C20 3B 76 00 75 D1 3B 4E 02 75 CC 8B D6 5E 5B 3B CB ;v.u.;N.u...^[;.
0015:4C30 72 26 77 04 3B D6 76 20 1E 8E DB 8E C1 36 8B 45 r&w.;.v .....6.E
0015:4C40 14 87 FA E8 A5 00 87 FA 1F 89 4E FE 89 56 FC 89 ..........N..V..
0015:4C50 5E FA 89 76 F8 E9 62 FF 36 8B 45 14 8E C1 87 FA ^..v..b.6.E.....
0015:4C60 1E 56 C5 76 00 E8 83 00 5E 1F 87 FA 8B 76 04 8B .V.v....^....v..
0015:4C70 5E 06 2B 76 FC 1B C0 25 30 00 2B D8 2B 5E FE 03 ^.+v...%0.+.+^..
0015:4C80 76 00 1B C0 25 30 00 03 D8 03 5E 02 2B 76 F8 1B v...%0....^.+v..
0015:4C90 C0 25 30 00 2B D8 72 2C 2B 5E FA 72 27 8B 5E 02 .%0.+.r,+^.r'.^.
0015:4CA0 8B 4E 00 8B 46 FE 89 46 02 8B 46 FC 89 46 00 8B .N..F..F..F..F..
0015:4CB0 46 FA 89 46 FE 8B 46 F8 89 46 FC 89 5E FA 89 4E F..F..F..F..^..N
0015:4CC0 F8 E9 BD FE 8B 5E 06 8B 4E 04 8B 46 FA 89 46 06 .....^..N..F..F.
0015:4CD0 8B 46 F8 89 46 04 8B 46 FE 89 46 FA 8B 46 FC 89 .F..F..F..F..F..
0015:4CE0 46 F8 89 5E FE 89 4E FC E9 96 FE 53 8B D8 F7 C3 F..^..N....S....
0015:4CF0 01 00 74 0A 4B 8A 00 26 86 01 88 00 74 0C 83 EB ..t.K..&....t...
0015:4D00 02 8B 00 26 87 01 89 00 75 F4 5B C3             ...&....u.[.    

;; fn0015_4D0C: 0015:4D0C
;;   Called from:
;;     0045:54CA (in fn0045_54AA)
fn0015_4D0C proc
	inc	bp
	push	bp
	mov	bp,sp
	push	ds
	mov	ax,[bp+6h]
	mov	[61E8h],ax
	mov	word ptr [61EAh],0h
	lea	sp,[bp-2h]
	pop	ds
	pop	bp
	dec	bp
	retf
0015:4D24             45 55 8B EC 1E B8 FD 43 BA 03 00 52     EU.....C...R
0015:4D30 50 FF 36 EA 61 FF 36 E8 61 90 0E E8 80 05 05 C3 P.6.a.6.a.......
0015:4D40 9E 83 D2 26 A3 E8 61 89 16 EA 61 8B C2 80 E4 7F ...&..a...a.....
0015:4D50 8D 66 FE 1F 5D 4D CB 90 45 55 8B EC 1E 83 EC 0E .f..]M..EU......
0015:4D60 56 2B C0 89 46 FC 89 46 FA 89 46 F8 89 46 F6 C4 V+..F..F..F..F..
0015:4D70 5E 06 26 38 07 74 31 26 80 7F 01 3A 75 2A 8B 46 ^.&8.t1&...:u*.F
0015:4D80 0C 0B 46 0A 74 1C 26 8A 07 C4 5E 0A 26 88 07 C4 ..F.t.&...^.&...
0015:4D90 5E 06 26 8A 47 01 C4 5E 0A 26 88 47 01 26 C6 47 ^.&.G..^.&.G.&.G
0015:4DA0 02 00 83 46 06 02 EB 0F 8B 46 0C 0B 46 0A 74 07 ...F.....F..F.t.
0015:4DB0 C4 5E 0A 26 C6 07 00 2B C0 89 46 FC 89 46 FA 8B .^.&...+..F..F..
0015:4DC0 46 06 8B 56 08 89 46 F0 89 56 F2 EB 10 90 26 80 F..V..F..V....&.
0015:4DD0 3F 2E 75 06 89 5E F6 8C 46 F8 FF 46 F0 C4 5E F0 ?.u..^..F..F..^.
0015:4DE0 26 80 3F 00 74 18 26 80 3F 2F 74 06 26 80 3F 5C &.?.t.&.?/t.&.?\
0015:4DF0 75 DC 8B C3 40 89 46 FA 8C 46 FC EB DD 90 8B 46 u...@.F..F.....F
0015:4E00 FC 0B 46 FA 74 42 8B 46 10 0B 46 0E 74 2C 8B 46 ..F.tB.F..F.t,.F
0015:4E10 FA 2B 46 06 3D FF 00 7E 03 B8 FF 00 50 FF 76 08 .+F.=..~....P.v.
0015:4E20 FF 76 06 FF 76 10 FF 76 0E 8B F0 90 0E E8 8E EF .v..v..v........
0015:4E30 83 C4 0A C4 5E 0E 26 C6 00 00 8B 46 FA 8B 56 FC ....^.&....F..V.
0015:4E40 89 46 06 89 56 08 EB 0F 8B 46 10 0B 46 0E 74 07 .F..V....F..F.t.
0015:4E50 C4 5E 0E 26 C6 07 00 8B 46 F8 0B 46 F6 74 6F 8B .^.&....F..F.to.
0015:4E60 46 F6 8B 4E 06 3B C1 72 65 8B 56 14 0B 56 12 74 F..N.;.re.V..V.t
0015:4E70 26 2B C1 3D FF 00 7E 03 B8 FF 00 50 FF 76 08 51 &+.=..~....P.v.Q
0015:4E80 FF 76 14 FF 76 12 8B F0 90 0E E8 31 EF 83 C4 0A .v..v......1....
0015:4E90 C4 5E 12 26 C6 00 00 8B 46 18 0B 46 16 74 72 8B .^.&....F..F.tr.
0015:4EA0 46 F0 2B 46 F6 3D FF 00 7E 03 B8 FF 00 50 FF 76 F.+F.=..~....P.v
0015:4EB0 F8 FF 76 F6 FF 76 18 FF 76 16 8B F0 90 0E E8 FD ..v..v..v.......
0015:4EC0 EE 83 C4 0A C4 5E 16 26 C6 00 00 EB 44 90 8B 46 .....^.&....D..F
0015:4ED0 14 0B 46 12 74 2C 8B 46 F0 2B 46 06 3D FF 00 7E ..F.t,.F.+F.=..~
0015:4EE0 03 B8 FF 00 50 FF 76 08 FF 76 06 FF 76 14 FF 76 ....P.v..v..v..v
0015:4EF0 12 8B F0 90 0E E8 C6 EE 83 C4 0A C4 5E 12 26 C6 ............^.&.
0015:4F00 00 00 8B 46 18 0B 46 16 74 07 C4 5E 16 26 C6 07 ...F..F.t..^.&..
0015:4F10 00 5E 8D 66 FE 1F 5D 4D CB 90 B8 19 00 E9 7A D9 .^.f..]M......z.
0015:4F20 8C D8 90 45 55 8B EC 1E 8E D8 B4 39 EB 0C 8C D8 ...EU......9....
0015:4F30 90 45 55 8B EC 1E 8E D8 B4 3B 1E C5 56 06 2E F7 .EU......;..V...
0015:4F40 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 .."..t...._....!
0015:4F50 1F E9 2A DA 8C D8 90 45 55 8B EC 1E 8E D8 B4 3A ..*....EU......:
0015:4F60 1E C5 56 06 2E F7 06 F6 22 01 00 74 07 9A C8 00 ..V....."..t....
0015:4F70 5F 04 EB 02 CD 21 73 D8 83 F8 10 75 D3 92 93 8A _....!s....u....
0015:4F80 07 43 3C 00 74 0A 3C 3F 74 04 3C 2A 75 F1 B2 03 .C<.t.<?t.<*u...
0015:4F90 92 F9 EB BC 8C D8 90 45 55 8B EC 1E 8E D8 B4 19 .......EU.......
0015:4FA0 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 ...."..t...._...
0015:4FB0 CD 21 B4 00 40 83 ED 02 8B E5 1F 5D 4D CB 8C D8 .!..@......]M...
0015:4FC0 90 45 55 8B EC 1E 8E D8 8A 56 06 4A B4 0E 2E F7 .EU......V.J....
0015:4FD0 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 .."..t...._....!
0015:4FE0 B4 19 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 ......"..t...._.
0015:4FF0 EB 02 CD 21 40 3A 46 06 B8 FF FF 75 01 40 83 ED ...!@:F....u.@..
0015:5000 02 8B E5 1F 5D 4D CB 00 45 55 8B EC 1E FF 76 0A ....]M..EU....v.
0015:5010 FF 76 08 FF 76 06 33 C0 50 90 0E E8 08 00 8D 66 .v..v.3.P......f
0015:5020 FE 1F 5D 4D CB 90 45 55 8B EC 1E 81 EC 2E 01 56 ..]M..EU.......V
0015:5030 8B 76 0C 8D 86 FA FE 89 86 D2 FE 8C 96 D4 FE 83 .v..............
0015:5040 7E 06 00 75 08 90 0E E8 4A FF 89 46 06 8A 46 06 ~..u....J..F..F.
0015:5050 04 40 C4 9E D2 FE FF 86 D2 FE 26 88 07 8B 9E D2 .@........&.....
0015:5060 FE FF 86 D2 FE 26 C6 07 3A 8B 9E D2 FE FF 86 D2 .....&..:.......
0015:5070 FE 26 C6 07 5C C6 86 ED FE 47 8A 46 06 88 86 F2 .&..\....G.F....
0015:5080 FE 8C 86 D6 FE 8C 86 DC FE 8B 86 D2 FE 89 86 F4 ................
0015:5090 FE 8D 86 D6 FE 16 50 8D 86 DE FE 16 50 8D 86 EC ......P.....P...
0015:50A0 FE 16 50 90 0E E8 36 F2 83 C4 0C 83 BE EA FE 00 ..P...6.........
0015:50B0 74 16 C7 06 78 5F 0D 00 8B 86 DE FE A3 88 5F 33 t...x_........_3
0015:50C0 C0 99 E9 81 00 90 90 90 8D 86 FA FE 16 50 90 0E .............P..
0015:50D0 E8 D1 EC 83 C4 04 40 89 86 D0 FE 8B 46 08 8B 56 ......@.....F..V
0015:50E0 0A 89 86 D2 FE 89 96 D4 FE 0B D0 75 35 39 B6 D0 ...........u59..
0015:50F0 FE 7E 04 8B B6 D0 FE 56 90 0E E8 7D C5 83 C4 02 .~.....V...}....
0015:5100 89 86 D2 FE 89 96 D4 FE 0B D0 75 0C C7 06 78 5F ..........u...x_
0015:5110 0C 00 8B 96 D4 FE EB 2E 8B 96 D4 FE 89 46 08 89 .............F..
0015:5120 56 0A 39 B6 D0 FE 7E 08 C7 06 78 5F 22 00 EB 8F V.9...~...x_"...
0015:5130 8D 86 FA FE 16 50 FF B6 D4 FE FF B6 D2 FE 90 0E .....P..........
0015:5140 E8 FB EB 83 C4 08 5E 8D 66 FE 1F 5D 4D CB 8C D8 ......^.f..]M...
0015:5150 90 45 55 8B EC 1E 8E D8 1E C5 56 06 B4 41 2E F7 .EU.......V..A..
0015:5160 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 .."..t...._....!
0015:5170 1F E9 0A D8 8C D8 90 45 55 8B EC 1E 8E D8 8B 5E .......EU......^
0015:5180 06 B4 68 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F ..h...."..t...._
0015:5190 04 EB 02 CD 21 E9 F3 D7 8C D8 90 45 55 8B EC 1E ....!......EU...
0015:51A0 8E D8 1E B0 4F C5 56 06 EB 10 8C D8 90 45 55 8B ....O.V......EU.
0015:51B0 EC 1E 8E D8 1E B0 4E C5 56 0C B4 2F 2E F7 06 F6 ......N.V../....
0015:51C0 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 B4 1A "..t...._....!..
0015:51D0 2E F7 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 ...."..t...._...
0015:51E0 CD 21 3C 4E 75 06 C5 56 06 8B 4E 0A 8A E0 2E F7 .!<Nu..V..N.....
0015:51F0 06 F6 22 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 .."..t...._....!
0015:5200 50 9F 50 8C C2 8E DA 8B D3 B4 1A 2E F7 06 F6 22 P.P............"
0015:5210 01 00 74 07 9A C8 00 5F 04 EB 02 CD 21 58 9E 58 ..t...._....!X.X
0015:5220 1F E9 67 D7 55 8B EC 57 56 53 33 FF 8B 46 08 0B ..g.U..WVS3..F..
0015:5230 C0 7D 11 47 8B 56 06 F7 D8 F7 DA 83 D8 00 89 46 .}.G.V.........F
0015:5240 08 89 56 06 8B 46 0C 0B C0 7D 11 47 8B 56 0A F7 ..V..F...}.G.V..
0015:5250 D8 F7 DA 83 D8 00 89 46 0C 89 56 0A 0B C0 75 15 .......F..V...u.
0015:5260 8B 4E 0A 8B 46 08 33 D2 F7 F1 8B D8 8B 46 06 F7 .N..F.3......F..
0015:5270 F1 8B D3 EB 38 8B D8 8B 4E 0A 8B 56 08 8B 46 06 ....8...N..V..F.
0015:5280 D1 EB D1 D9 D1 EA D1 D8 0B DB 75 F4 F7 F1 8B F0 ..........u.....
0015:5290 F7 66 0C 91 8B 46 0A F7 E6 03 D1 72 0C 3B 56 08 .f...F.....r.;V.
0015:52A0 77 07 72 06 3B 46 06 76 01 4E 33 D2 96 4F 75 07 w.r.;F.v.N3..Ou.
0015:52B0 F7 DA F7 D8 83 DA 00 5B 5E 5F 5D CA 08 00       .......[^_]...  

;; fn0015_52BE: 0015:52BE
;;   Called from:
;;     0015:1A3C (in fn0015_1902)
;;     0015:447C (in fn0015_440C)
;;     0015:44C0 (in fn0015_440C)
;;     0015:469C (in fn0015_462E)
;;     0015:46AF (in fn0015_462E)
;;     0015:46C2 (in fn0015_462E)
fn0015_52BE proc
	push	bp
	mov	bp,sp
	mov	ax,[bp+8h]
	mov	cx,[bp+0Ch]
	or	cx,ax
	mov	cx,[bp+0Ah]
	jnz	52D7h

l0015_52CE:
	mov	ax,[bp+6h]
	mul	cx
	pop	bp
	retf	8h

l0015_52D7:
	push	bx
	mul	cx
	mov	bx,ax
	mov	ax,[bp+6h]
	mul	word ptr [bp+0Ch]
	add	bx,ax
	mov	ax,[bp+6h]
	mul	cx
	add	dx,bx
	pop	bx
	pop	bp
	retf	8h

;; fn0015_52F0: 0015:52F0
;;   Called from:
;;     0015:45EC (in fn0015_455A)
fn0015_52F0 proc
	push	bp
	mov	bp,sp
	push	bx
	push	di
	xor	di,di
	mov	ax,[bp+8h]
	or	ax,ax
	jge	530Fh

l0015_52FE:
	inc	di
	mov	dx,[bp+6h]
	neg	ax
	neg	dx
	sbb	ax,0h
	mov	[bp+8h],ax
	mov	[bp+6h],dx

l0015_530F:
	mov	ax,[bp+0Ch]
	or	ax,ax
	jge	5326h

l0015_5316:
	mov	dx,[bp+0Ah]
	neg	ax
	neg	dx
	sbb	ax,0h
	mov	[bp+0Ch],ax
	mov	[bp+0Ah],dx

l0015_5326:
	or	ax,ax
	jnz	5342h

l0015_532A:
	mov	cx,[bp+0Ah]
	mov	ax,[bp+8h]
	xor	dx,dx
	div	cx
	mov	ax,[bp+6h]
	div	cx
	mov	ax,dx
	xor	dx,dx
	dec	di
	jns	5383h

l0015_5340:
	jmp	538Ah

l0015_5342:
	mov	bx,ax
	mov	cx,[bp+0Ah]
	mov	dx,[bp+8h]
	mov	ax,[bp+6h]

l0015_534D:
	shr	bx,1h
	rcr	cx,1h
	shr	dx,1h
	rcr	ax,1h
	or	bx,bx
	jnz	534Dh

l0015_5359:
	div	cx
	mov	cx,ax
	mul	word ptr [bp+0Ch]
	xchg	cx,ax
	mul	word ptr [bp+0Ah]
	add	dx,cx
	jc	5374h

l0015_5368:
	cmp	dx,[bp+8h]
	ja	5374h

l0015_536D:
	jc	537Ah

l0015_536F:
	cmp	ax,[bp+6h]
	jbe	537Ah

l0015_5374:
	sub	ax,[bp+0Ah]
	sbb	dx,[bp+0Ch]

l0015_537A:
	sub	ax,[bp+6h]
	sbb	dx,[bp+8h]
	dec	di
	jns	538Ah

l0015_5383:
	neg	dx
	neg	ax
	sbb	dx,0h

l0015_538A:
	pop	di
	pop	bx
	pop	bp
	retf	8h

;; fn0015_5390: 0015:5390
;;   Called from:
;;     0015:0269 (in fn0015_01B0)
;;     0015:02C8 (in fn0015_01B0)
fn0015_5390 proc
	push	bp
	mov	bp,sp
	push	bx
	push	si
	mov	ax,[bp+0Ch]
	or	ax,ax
	jnz	53B1h

l0015_539C:
	mov	cx,[bp+0Ah]
	mov	ax,[bp+8h]
	xor	dx,dx
	div	cx
	mov	bx,ax
	mov	ax,[bp+6h]
	div	cx
	mov	dx,bx
	jmp	53E9h

l0015_53B1:
	mov	cx,ax
	mov	bx,[bp+0Ah]
	mov	dx,[bp+8h]
	mov	ax,[bp+6h]

l0015_53BC:
	shr	cx,1h
	rcr	bx,1h
	shr	dx,1h
	rcr	ax,1h
	or	cx,cx
	jnz	53BCh

l0015_53C8:
	div	bx
	mov	si,ax
	mul	word ptr [bp+0Ch]
	xchg	cx,ax
	mov	ax,[bp+0Ah]
	mul	si
	add	dx,cx
	jc	53E5h

l0015_53D9:
	cmp	dx,[bp+8h]
	ja	53E5h

l0015_53DE:
	jc	53E6h

l0015_53E0:
	cmp	ax,[bp+6h]
	jbe	53E6h

l0015_53E5:
	dec	si

l0015_53E6:
	xor	dx,dx
	xchg	si,ax

l0015_53E9:
	pop	si
	pop	bx
	pop	bp
	retf	8h
0015:53EF                                              00                .
0015:53F0 55 8B EC 53 8B 46 0C 0B C0 75 15 8B 4E 0A 8B 46 U..S.F...u..N..F
0015:5400 08 33 D2 F7 F1 8B 46 06 F7 F1 8B C2 33 D2 EB 45 .3....F.....3..E
0015:5410 8B C8 8B 5E 0A 8B 56 08 8B 46 06 D1 E9 D1 DB D1 ...^..V..F......
0015:5420 EA D1 D8 0B C9 75 F4 F7 F3 8B C8 F7 66 0C 91 F7 .....u......f...
0015:5430 66 0A 03 D1 72 0C 3B 56 08 77 07 72 0B 3B 46 06 f...r.;V.w.r.;F.
0015:5440 76 06 2B 46 0A 1B 56 0C 2B 46 06 1B 56 08 F7 DA v.+F..V.+F..V...
0015:5450 F7 D8 83 DA 00 5B 5D CA 08 00 55 8B EC 8B D6 1E .....[]...U.....
0015:5460 C5 76 0A C4 5E 06 B0 FF 0A C0 74 2D AC 26 8A 27 .v..^.....t-.&.'
0015:5470 43 3A E0 74 F3 2C 41 3C 1A 1A C9 80 E1 20 02 C1 C:.t.,A<..... ..
0015:5480 04 41 86 E0 2C 41 3C 1A 1A C9 80 E1 20 02 C1 04 .A..,A<..... ...
0015:5490 41 3A C4 74 D3 1A C0 1C FF 98 1F 8B F2 5D CB 00 A:.t.........]..
0015:54A0 55 8B EC 8B 4E 0C E3 38 57 C4 7E 06 8B D7 F7 DA U...N..8W.~.....
0015:54B0 74 0C 2B D1 1B DB 23 D3 03 D1 87 D1 2B D1 8B 46 t.+...#.....+..F
0015:54C0 0A 8A E0 D1 E9 F3 AB 13 C9 F3 AA 87 D1 E3 10 8C ................
0015:54D0 C3 81 C3 30 00 8E C3 D1 E9 F3 AB 13 C9 F3 AA 5F ...0..........._
0015:54E0 8B 46 06 8B 56 08 5D CB 55 8B EC 57 56 8B 76 0A .F..V.].U..WV.v.
0015:54F0 8B 7E 0E 8B 46 0C F7 E6 03 F8 EB 0A 2B 7E 0C FF .~..F.......+~..
0015:5500 76 10 57 FF 5E 06 4E 79 F3 5E 5F 8B E5 5D CA 0C v.W.^.Ny.^_..]..
0015:5510 00 90 55 8B EC 83 EC 04 57 56 8B 7E 0E 2B C0 50 ..U.....WV.~.+.P
0015:5520 57 FF 76 0C FF 76 0A 90 0E E8 92 FD 2B DB 8B C8 W.v..v......+...
0015:5530 01 4E 10 13 DA B9 20 00 D3 E3 01 5E 12 8B 76 06 .N.... ....^..v.
0015:5540 83 6E 0A 01 83 5E 0C 00 83 7E 0C 00 7C 30 8B C7 .n...^...~..|0..
0015:5550 2B D2 F7 D8 13 D2 F7 DA 2B DB 8B C8 01 4E 10 13 +.......+....N..
0015:5560 DA B9 20 00 D3 E3 01 5E 12 FF 76 12 FF 76 10 8B .. ....^..v..v..
0015:5570 46 08 89 46 FE 89 76 FC FF 5E FC EB C3 90 5E 5F F..F..v..^....^_
0015:5580 8B E5 5D CA 0E 00 55 8B EC 57 56 8B 76 0E 8B 7E ..]...U..WV.v..~
0015:5590 0A EB 0D 90 FF 76 10 56 FF 5E 06 8B 46 0C 03 F0 .....v.V.^..F...
0015:55A0 4F 79 F1 5E 5F 8B E5 5D CA 0C 00 90             Oy.^_..]....    

;; fn0015_55AC: 0015:55AC
;;   Called from:
;;     0015:2392 (in fn0015_2300)
;;     0015:2529 (in fn0015_250A)
fn0015_55AC proc
	push	bp
	mov	bp,sp
	pop	bp
	ret

;; fn0015_55B1: 0015:55B1
;;   Called from:
;;     0015:2941 (in fn0015_2913)
fn0015_55B1 proc
	mov	ax,14h
	jmp	289Ah
