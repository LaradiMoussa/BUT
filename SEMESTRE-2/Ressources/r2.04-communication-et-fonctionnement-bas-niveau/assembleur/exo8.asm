.DATA
		
		coul DW %0111
		x DW 78
		y DW 78
		l DW 100
		h DW 100

.CODE
	
		LEA SP,STACK
		PUSH x
		PUSH y
		PUSH l
		PUSH h
		PUSH coul
		CALL rect
		HLT

rect:		PULL R0			;La position mémoire de retour
		PULL R1
		SHL R1			;décaler la couleur à gauche
		SHL R1
		SHL R1
		SHL R1
		ADD R1,%0101		;rectangle plein
		PULL R2
		PULL R3
		PULL R4
		PULL R5
		OUT R5,1
		OUT R4,2
		OUT R3,3
		OUT R2,4
		OUT R1,5
		PUSH R0
		RET
		
		
		
.STACK 10