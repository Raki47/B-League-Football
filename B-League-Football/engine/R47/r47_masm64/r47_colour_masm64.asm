; ***************************************************************************************************************************************************
; MASM64 version of the R47 colour library
;
; creating macros of different colour hex codes for easy use when making GUI
; ***************************************************************************************************************************************************
; Copyright (c) 2024 Filip Rancic
;
; Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), 
; to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
; and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
;
; The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
;
; THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
; FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
; OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
; DEALINGS IN THE SOFTWARE.
; ***************************************************************************************************************************************************
;
; ADDITIONAL GUI COLOUR DESIGN TIP - You should avoid using pure white or black for making Interfaces,  It'll look far better when you use a slight 
; different shade e.g. swap out white with Azure or WhiteSmoke, swap out black with some form of Dark Grey
;
; ***************************************************************************************************************************************************

; File Is Incomplete, I've run out of time for now and will come back later to finish of the document
.data

; R47 GUI special colours
; In the "special" colours section I have listed colours that stood out to me In particular, whether It's for looking modern, attention grabbing or generally aesthetically pleasing
LIME equ #00FF00
GHOSTWHITE equ #F8F8FF
; Had to Include cyan as homage to Terry A. Davis. Rest In peace, your contributions to software engineering created despite your significant personal/mental struggles will forever be an Inspiration.
CYAN equ #00FFFF
ALICEBLUE equ #F0F8FF
LIGHTCYAN equ #E0FFFF
LAVENDER equ #E6E6FA
GAINSBORO equ #DCDCDC
LIGHTGREY equ #D3D3D3
SILVER equ #C0C0C0
GREY equ #A9A9A9
DARKLIGHTGREY equ #4D4D4D
DARKMIDGREY equ #3B3A3A
DARKGREY equ #212121
RAKIGREY equ #474747
BLUEVIOLET equ #8A2BE2
DARKVIOLET equ #9400D3
CRIMSON equ #DC143C
GOLDENROD equ #DAA520
DARKGOLDENROD equ #B8860B
DARKORANGE equ #FF8C00

; Basic colours
WHITE equ #FFFFFF
SNOW equ #FFFAFA
LINEN equ #FAF0E6
ANTIQUEWHITE equ #FAEBD7
NAVAJOWHITE equ #FFDEAD
CADETBLUE equ #5F9EA0
STEELBLUE equ #4682B4
CORNFLOWERBLUE equ #6495ED
DEEPSKYBLUE equ #00BFFF
DARKTURQUOISE equ #00CED1
ROYALEBLUE equ #4169E1
MEDIUMBLUE equ #0000CD
BLUE equ #0000FF
DARKBLUE equ #00008B
NAVY equ #000080
MIDNIGHTBLUE equ #191970
PURPLE equ #800080
DARKMAGENTA equ #8B008B
DARKORCHID equ #9932CC
INDIGO equ #4B0082
MAGENTA equ #FF00FF
ORCHID equ #DA70D6
MEDIUMORCHID equ #BA55D3
VIOLET equ #EE82EE
LIGHTSALMON equ #FFA07A
LIGHTCORAL equ #F08080
LIGHTRED equ #FF4040
RED equ #FF0000
DARKRED equ #8B0000
MAROON equ #800000
ORANGE equ #FFA500
ORANGERED equ #FF4500
BURLYWOOD equ #DEB887
ROSYBROWN equ #BC8F8F
TOMATO equ #FF6347
INDIANRED equ #CD5C5C
FIREBRICK equ #B22222
BROWN equ #A52A2A
SIEANNA equ #A0522D
OLIVE equ #808000
GOLD equ #FFD700
YELLOW equ #FFFF00
YELLOWGREEN equ #9ACD32
GREENYELLOW equ #ADEE2E
GREEN equ #328032
SEAGREEN equ #3CB371
SPRINGGREEN equ #00FF7F
DARKSEAGREEN equ #8FBC8F
DIMGREY equ #696969
BLACK equ #000000

; Here I am creating an empty function because x64 MASM refuses to compile without It unlike MASM32
.code
main PROC

    ; Exit the program
    mov rcx, 0
    call ExitProcess
main ENDP

END main ; End of the file
