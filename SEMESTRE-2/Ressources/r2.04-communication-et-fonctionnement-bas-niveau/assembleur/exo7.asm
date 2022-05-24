.DATA

		coteg DW 100
		cotep DW 50
		xg DSW 1
		yg DSW 1
		xp DSW 1
		yp DSW 1		

.CODE
		
		LEA SP,STACK
		CALL effacer		
		LD R0,%11000111
attcliq:	IN R6,0
		CMP R6,R0
		BNE attcliq		;Si la souris n'est pas cliquée retourner à attcliq
		IN R1,6
		IN R2,7
		CALL calc
		CALL carreg
		LD R0,%11000101		;A appuyé
		LD R5,%11000110		;B appuyé
boucle:		IN R6,0
		CMP R6,R0
		BNE pasAppui		;Si A n'est pas appuyé, aller à pasAppui
		CALL carrep		;Sinon rétrécir le carré et attendre que A soit laché
		LD R0,%10000101		;A  laché
appui:		IN R6,0
		CMP R6,R0
		BNE appui		;Si A n'est pas laché, retourner à appui
		CALL carreg		;Sinon redessiner le grand carré
		LD R0,%11000101		;A appuyé
		JMP boucle		;Retourner à boucle
pasAppui:	CMP R6,R5		
		BNE boucle		;Si B n'est pas appuyé, retourner à boucle
		JMP fin

effacer:	LD R0,%00000000		;Effacer l'écran
		OUT R0,5
		RET

carreg:		CALL effacer
		LD R1,xg
		LD R2,yg
		LD R3,coteg
		LD R4,coteg
		OUT R1,1
		OUT R2,2
		OUT R3,3
		OUT R4,4
		LD R0,%11110011		;rectangle blanc
		OUT R0,5
		RET

carrep:		CALL effacer
		LD R1,xp
		LD R2,yp
		LD R3,cotep
		LD R4,cotep
		OUT R1,1
		OUT R2,2
		OUT R3,3
		OUT R4,4
		LD R0,%11110011		;rectangle blanc
		OUT R0,5
		RET

calc:		SUB R1,25
		SUB R2,25
		ST R1,xp
		ST R2,yp
		SUB R1,25
		SUB R2,25
		ST R1,xg
		ST R2,yg
		RET

fin:		CALL effacer
		HLT

.STACK 5
