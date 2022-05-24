.DATA
	chaine DW "chaine"
	       DW 0
	maxi   DSW 1
.CODE
	LEA R2,chaine
	LD R1,0
boucle: LD R0,[R2]  ;caractère pointé par R2
	CMP R0,0
	BEQ fin
	CMP R0,R1
	BLEU suite
	LD R1,R0
suite:  ADD R2,1
	JMP boucle
fin: 	ST R1,maxi
	HLT
	
 