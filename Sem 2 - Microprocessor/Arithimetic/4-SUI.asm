LXI H, 08A2H	; SETTING UP - SUB USING ADI - ADDRESS = 08A0H
MVI M, 70H		; VAL(08A0H) = 30H

MOV A, M      ; A = VAL(08A0H)
SUI 20H		    ; A = A - 20H
INX H				  ; ADDRESS = 08A1H
MOV M, A		  ; VAL(08A1H) = A
HLT