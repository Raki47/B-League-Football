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

.data ; File Is Incomplete, I've run out of time for now and will come back later to finish of the document

; R47 GUI special colours
; In the "special" colours section I have listed colours that stood out to me In particular, whether It's for looking modern, attention grabbing or generally aesthetically pleasing
LIME equ #00FF00
CYAN equ #00FFFF ; Had to Include cyan as homage to Terry A. Davis. Rest In peace, your contributions to software engineering created despite your significant personal/mental struggles will forever be an Inspiration.
GHOSTWHITE equ #F8F8FF
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
BLUEVIOLET equ #8A2BE2
DARKVIOLET equ #9400D3
CRIMSON equ #DC143C
GOLDENROD equ #DAA520
DARKGOLDENROD equ #B8860B
DARKORANGE equ #FF8C00

; Basic colours
WHITE equ #FFFFFF
BLACK equ #000000
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 
 equ 

; Here I am creating an empty function because x64 MASM refuses to compile without It unlike MASM32
.code
main PROC

    ; Exit the program
    mov rcx, 0
    call ExitProcess
main ENDP

END main ; End of the file
