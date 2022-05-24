.DATA
	chaine DW "chaine."
	debx DW 10
	deby DW 10
.CODE
	LD R0,%00000000
	OUT R0,5           ;Effacer l'écran
	LEA R3,chaine
	LD R1,debx
	LD R2,deby
	OUT R1,1
	OUT R2,2
boucle:	LD R4,[R3]	   ;La lettre courante
	CMP R4,'.'
	BEQ fin
	OUT R4,3
	LD R5,%11110111   ;écrit une lettre(0111) blanche(1111)
	OUT R5,5
	INC R3
	JMP boucle
fin:    IN R0,1
	LD R1,debx
	LD R2,deby
	OUT R0,3
	OUT R1,1
	OUT R2,2
	OUT R2,4
	LD R5,%11110010   ;trace un trait(0010) blanc(1111)
	OUT R5,5
	HLT
	
	
	
	