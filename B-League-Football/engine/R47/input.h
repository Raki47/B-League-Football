/*
 --------------------------
 | Raki47 - input library |
 --------------------------
 A very simple single header library that creates key macros to allow for use of 'special' keys In C/C++ such as enter or alt. 
 Despite not being necessary, 'standard' keys have been added for bonus usage/functionality from this header file.
 
 Shares some traits of "Winuser.h" but, now It supports Linux and MacOS, not just Windows.
*/
 
/*
Copyright (c) 2024 Filip Rancic

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), 
to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

/*
---------------------------------
| Virtual Key-Codes for Windows |
---------------------------------
| 20/03/2024 |
--------------
- Begun work and completed

--------------
| 29/04/2024 |
--------------
- Modified slightly to ensure code only works if run on windows, will soon be expanded to be compatible with MacOS and Linux
- Added numpad keys, previously was not included

-------------------------------
| Virtual Key-Codes for MacOS |
-------------------------------
| 29/04/2024 |
--------------
- Begun adding the virtual keycodes for MacOS
*/

#pragma once

#ifdef __WIN32__

/* Mouse keys */
#define KEY_LMB 0x01
#define KEY_RMB 0x02
/* Special keys */
#define KEY_ESC 0x1B
#define KEY_RTN 0x0D
#define KEY_CTRL 0x11
#define KEY_ALT 0xA3
#define KEY_SPC 0x20
#define KEY_BKSPC 0x08
#define KEY_LSHFT 0xA0
#define KEY_RSHFT 0xA1
/* Number keys */
#define KEY_0 0x30
#define KEY_1 0x31
#define KEY_2 0x32
#define KEY_3 0x33
#define KEY_4 0x34
#define KEY_5 0x35
#define KEY_6 0x36
#define KEY_7 0x37
#define KEY_8 0x38
#define KEY_9 0x39
/* Numpad Keys */
#define KEY_N0 0x60
#define KEY_N1 0x61
#define KEY_N2 0x62
#define KEY_N3 0x63
#define KEY_N4 0x64
#define KEY_N5 0x65
#define KEY_N6 0x66
#define KEY_N7 0x67
#define KEY_N8 0x68
#define KEY_N9 0x69
/* Arrow keys */
#define KEY_LAK 0x25
#define KEY_UAK 0x26
#define KEY_DAK 0x27
#define KEY_RAK 0x28
/* Letter Keys */
#define KEY_A 0x41
#define KEY_B 0x42
#define KEY_C 0x43
#define KEY_D 0x44
#define KEY_E 0x45
#define KEY_F 0x46
#define KEY_G 0x47
#define KEY_H 0x48
#define KEY_I 0x49
#define KEY_J 0x4A
#define KEY_K 0x4B
#define KEY_L 0x4C
#define KEY_M 0x4D
#define KEY_N 0x4E
#define KEY_O 0x4F
#define KEY_P 0x50
#define KEY_Q 0x51
#define KEY_R 0x52
#define KEY_S 0x53
#define KEY_T 0x54
#define KEY_U 0x55
#define KEY_V 0x56
#define KEY_W 0x57
#define KEY_X 0x58
#define KEY_Y 0x59
#define KEY_Z 0x5A

#endif // __WIN32__

#ifdef __LINUX__

// add Linux virtual keycodes here

#endif // __LINUX__

#ifdef __APPLE__ // MacOS
// add MacOS virtual keycodes here
// Can't add mouse buttons, Apple's 'Magic Mouse' does not use regular key codes
/* Special keys */
#define KEY_ESC 0x35
#define KEY_RTN 0x24
#define KEY_CTRL 0x3B
#define KEY_FN 0x3F
#define KEY_SPC 0x31
#define KEY_DLT 0x33
#define KEY_LSHFT 0x38
#define KEY_RSHFT 0x3C
#define KEY_OPTN 0x3A
/* Number keys */
/* WARNING - There's a chance the number keys will only work on US Keyboard layout */
#define KEY_0 0x1D
#define KEY_1 0x12
#define KEY_2 0x13
#define KEY_3 0x14
#define KEY_4 0x15
#define KEY_5 0x17
#define KEY_6 0x16
#define KEY_7 0x1A
#define KEY_8 0x1C
#define KEY_9 0x19
/* Numpad Keys */
/* WARNING - There's a chance the numpad keys will only work on US Keyboard layout */
#define KEY_N0 0x52
#define KEY_N1 0x53
#define KEY_N2 0x54
#define KEY_N3 0x55
#define KEY_N4 0x56
#define KEY_N5 0x57
#define KEY_N6 0x58
#define KEY_N7 0x59
#define KEY_N8 0x5B
#define KEY_N9 0x5C
/* Arrow keys */
#define KEY_LAK 0x7B
#define KEY_RAK 0x7C
#define KEY_DAK 0x7D
#define KEY_UAK 0x7E
/* Letter Keys */
/* WARNING - There's a chance the letter keys will only work on US Keyboard layout */
#define KEY_A 0x00
#define KEY_B 0x0B
#define KEY_C 0x08
#define KEY_D 0x02
#define KEY_E 0x0E
#define KEY_F 0x03
#define KEY_G 0x05
#define KEY_H 0x04
#define KEY_I 0x22
#define KEY_J 0x26
#define KEY_K 0x28
#define KEY_L 0x25
#define KEY_M 0x2E
#define KEY_N 0x2D
#define KEY_O 0x1F
#define KEY_P 0x23
#define KEY_Q 0x0C
#define KEY_R 0x0F
#define KEY_S 0x01
#define KEY_T 0x11
#define KEY_U 0x20
#define KEY_V 0x09
#define KEY_W 0x0D
#define KEY_X 0x07
#define KEY_Y 0x10
#define KEY_Z 0x06

#endif // __APPLE__
