.DATA
		
		coul DW %0111		;vert
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

rect:		LD R1,[SP+1]
		SHL R1			;décaler la couleur à gauche
		SHL R1
		SHL R1
		SHL R1
		ADD R1,%0101		;rectangle plein
		LD R2,[SP+2]
		LD R3,[SP+3]
		LD R4,[SP+4]
		LD R5,[SP+5]
		OUT R5,1
		OUT R4,2
		OUT R3,3
		OUT R2,4
		OUT R1,5
		RET 5
		
		
		
.STACK 10