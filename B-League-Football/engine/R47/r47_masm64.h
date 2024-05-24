/*
 ---------------------------------
 | Raki47 - MASM64 maths library |
 ---------------------------------
 Matrices, linear algebra and trigonometry functions for R47 render library written In MASM64 with C wrappers.
 Additionally Includes Image handling In MASM64.
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
 Function list:

 Image Handling
 - LoadTGA
	- R47_LoadTGA (use this within C/C++ code rather than 'LoadTGA')

*/

#pragma once

// Creating pi and square root of pi as constants
const float PI = 3.14;
const float SR_PI = 1.77;

// Including all the C wrappers for MASM64 maths functions
#include "trigonometry_win64.h"
#include "matrices_win64.h"
#include "linear_algebra_win64.h"
#include "image_win64.h"