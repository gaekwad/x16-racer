; car_palette (raw):
; 	0x00 0x00 0x00 0x20 0x14 0x10 0xa4 0x2c 0x29 0x8b 0x40 0x39 0x4a 0x5d 0x52 0xf6 0x44 0x41 0xac 0x65 0x52 0x5a 0x7d 0x6a 0x10 0xba 0x7b 0x9c 0xa5 0x9c 0x9c 0xc6 0x41 0x6a 0xce 0xbd 0xb4 0xca 0xde 0xbd 0xd6 0xee 0xd5 0xee 0x39 0xcd 0xe6 0xff 
car_palette:
	.word $0000, $0211, $0a22, $0843, $0455, $0f44, $0a65, $0576, $01b7, $09a9, $09c4, $06cb, $0bcd, $0bde, $0de3, $0cef

car:
car_00_00:
	.byte $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $01, $11, $11, $11, $11, $11, $11, $11, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
	.byte $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $01, $13, $22, $22, $22, $23, $33, $55, $55, $10, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
	.byte $01, $11, $11, $00, $00, $00, $00, $00, $00, $01, $11, $55, $22, $22, $25, $55, $55, $55, $55, $20, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
	.byte $12, $55, $55, $00, $00, $00, $00, $00, $00, $17, $c2, $23, $9c, $dd, $d2, $54, $44, $22, $21, $41, $10, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
	.byte $11, $25, $55, $10, $00, $00, $00, $00, $01, $d9, $35, $3c, $ff, $ff, $f3, $5f, $ff, $d7, $25, $1d, $90, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
	.byte $01, $15, $55, $21, $00, $00, $00, $00, $19, $42, $52, $9f, $ff, $ff, $f4, $5f, $ff, $ff, $72, $51, $91, $10, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
	.byte $00, $15, $55, $53, $00, $00, $00, $01, $f9, $55, $59, $ff, $ff, $ff, $f7, $5f, $ff, $ff, $fc, $45, $2c, $c1, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00
	.byte $00, $15, $55, $55, $00, $00, $00, $19, $73, $55, $2f, $ff, $ff, $ff, $f7, $2f, $ff, $ff, $ff, $f4, $22, $7d, $10, $00, $00, $00, $00, $00, $00, $00, $00, $00
	.byte $00, $15, $55, $55, $10, $00, $01, $cc, $55, $55, $4f, $ff, $ff, $ff, $f7, $2f, $ff, $ff, $ff, $fd, $95, $24, $c1, $00, $00, $00, $00, $00, $00, $00, $00, $00
	.byte $00, $15, $55, $55, $21, $11, $17, $73, $55, $51, $cd, $ff, $ff, $ff, $f4, $5f, $ff, $ff, $ff, $d1, $74, $25, $79, $10, $00, $00, $00, $00, $00, $00, $00, $00
	.byte $00, $12, $21, $25, $52, $22, $25, $55, $55, $52, $21, $11, $33, $11, $11, $54, $44, $44, $44, $15, $34, $15, $22, $51, $11, $11, $00, $00, $00, $00, $00, $00
	.byte $00, $11, $11, $52, $22, $25, $55, $55, $55, $55, $55, $55, $55, $55, $55, $55, $55, $55, $55, $15, $55, $55, $55, $55, $52, $22, $11, $11, $11, $10, $00, $00
	.byte $00, $00, $01, $22, $22, $25, $55, $55, $55, $55, $55, $55, $55, $55, $55, $55, $55, $55, $55, $15, $53, $32, $55, $55, $55, $55, $55, $55, $22, $21, $10, $00
	.byte $00, $00, $01, $22, $22, $25, $55, $55, $55, $22, $51, $14, $44, $32, $25, $55, $55, $22, $22, $32, $25, $55, $55, $55, $55, $55, $55, $55, $54, $15, $21, $00
	.byte $00, $00, $01, $22, $21, $22, $22, $22, $22, $24, $44, $31, $47, $88, $81, $55, $52, $35, $53, $15, $55, $55, $55, $55, $55, $55, $55, $55, $5e, $e3, $52, $00
	.byte $00, $00, $01, $22, $12, $22, $22, $22, $21, $14, $44, $88, $77, $88, $72, $55, $54, $6b, $b5, $85, $55, $55, $52, $22, $22, $22, $25, $55, $5e, $ee, $42, $10
	.byte $00, $00, $12, $22, $22, $22, $22, $21, $11, $21, $18, $88, $88, $12, $22, $22, $18, $67, $86, $82, $22, $22, $22, $22, $22, $22, $22, $22, $5e, $ee, $e4, $11
	.byte $00, $01, $22, $12, $22, $22, $21, $11, $11, $12, $21, $88, $41, $22, $22, $22, $48, $65, $56, $81, $22, $22, $21, $11, $12, $22, $42, $22, $2e, $ee, $ea, $21
	.byte $00, $02, $22, $22, $22, $22, $11, $11, $11, $11, $22, $11, $22, $22, $22, $22, $78, $67, $87, $64, $22, $22, $11, $11, $11, $22, $47, $22, $24, $ee, $ee, $21
	.byte $00, $02, $22, $22, $22, $21, $11, $44, $44, $11, $12, $22, $22, $22, $22, $22, $48, $67, $88, $51, $22, $11, $14, $44, $41, $12, $27, $12, $21, $4a, $a7, $21
	.byte $00, $02, $22, $22, $22, $21, $14, $11, $41, $41, $12, $22, $22, $22, $22, $22, $18, $67, $76, $72, $21, $11, $41, $14, $14, $11, $21, $42, $22, $22, $22, $21
	.byte $00, $01, $22, $22, $22, $21, $11, $74, $94, $14, $12, $22, $22, $22, $22, $22, $24, $77, $77, $82, $21, $11, $17, $49, $41, $41, $22, $81, $22, $22, $22, $11
	.byte $00, $01, $11, $22, $22, $21, $47, $11, $91, $41, $11, $22, $22, $22, $22, $22, $22, $78, $74, $12, $21, $14, $71, $19, $14, $41, $22, $81, $22, $22, $22, $10
	.byte $00, $00, $11, $11, $22, $11, $49, $97, $73, $71, $41, $22, $22, $22, $22, $22, $22, $21, $22, $22, $21, $14, $99, $77, $17, $14, $12, $77, $22, $22, $22, $10
	.byte $00, $00, $11, $11, $12, $11, $41, $47, $99, $94, $41, $22, $22, $22, $22, $22, $22, $22, $22, $22, $11, $14, $14, $49, $99, $14, $12, $14, $22, $22, $22, $11
	.byte $00, $00, $01, $11, $11, $11, $44, $17, $94, $44, $41, $11, $11, $11, $11, $11, $11, $11, $11, $11, $11, $11, $11, $97, $44, $14, $11, $22, $22, $22, $22, $21
	.byte $00, $00, $00, $00, $00, $01, $47, $49, $97, $71, $40, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $14, $44, $99, $47, $14, $11, $11, $11, $11, $11, $11
	.byte $00, $00, $00, $00, $00, $07, $47, $77, $77, $41, $10, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $44, $77, $09, $44, $41, $00, $00, $00, $00, $00, $00
	.byte $00, $00, $00, $00, $00, $00, $11, $47, $49, $14, $10, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $01, $17, $77, $91, $44, $00, $00, $00, $00, $00, $00
	.byte $00, $00, $00, $00, $00, $00, $04, $11, $41, $41, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $07, $41, $44, $14, $10, $00, $00, $00, $00, $00, $00
	.byte $00, $00, $00, $00, $00, $00, $01, $44, $44, $40, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $14, $44, $44, $00, $00, $00, $00, $00, $00, $00
	.byte $00, $00, $00, $00, $00, $00, $00, $04, $44, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $07, $44, $70, $00, $00, $00, $00, $00, $00, $00
car_end: