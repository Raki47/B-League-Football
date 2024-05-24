/*
 ---------------------------
 | R47 2D graphics library |
 ---------------------------
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
 --------------
 | 07/05/2024 |
 --------------
 - Began working on the R47 2D render library
 - Mainly worked on planning and organising project structure, what 3rd party libraries I would use and what I will write myself
*/

#pragma once // cleaner and simpler than a traditional header gaurd

// Must use extern "C" when Including this header If you're making a C++ application
#ifdef __cplusplus
extern "C" {
#endif

// Removing STB_IMAGE_IMPLEMENTATION as I'm creating my own alternative to It
/*
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"
*/

#define STB_TRUETYPE_IMPLEMENTATION
#include "stb_truetype/stb_truetype.h"

// ---------------------------------------
// | Linking the platform dependent code |
// ---------------------------------------

#ifdef __WIN32__

#include "r47_win64/r47_masm64.h"

#ifndef __WIN32__
#endif

#ifdef __APPLE__

#include "r47_unix/r47_unix.h"

#ifndef __APPLE__
#endif

#ifdef __LINUX__

#include "r47_unix/r47_unix.h"

#ifndef __LINUX__
#endif
