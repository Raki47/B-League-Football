/*
 ---------------------
 | R47 Error Handler |
 ---------------------
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
 | 24/05/2024 |
 --------------
 - As of now It's a very basic error handler that gets the job done, I'll recreate It a later date
 
 - When I remake It In the future, It'll provide far more detailed error messages and create a GUI pop up message rather than CMD
*/

#include <stdio.h>

// Defining the error types
#define SUCCESS 0
#define ERROR_NULL_POINTER -1
#define ERROR_OUT_OF_RANGE -2

// This function detects what caused the crash
int memoryError(int *ptr, int index, int max)
{
	if (ptr == NULL)
	{
		return ERROR_NULL_POINTER;
	}
	if (index >= max)
	{
		return ERROR_OUT_OF_RANGE;
	}
	return SUCCESS;
}

// Now that the code can detect a crash, this function prints out the error to the CMD to let you know how It crashed
void printErrorMessage(int errorCode)
{
    switch (errorCode)
	{
        case ERROR_NULL_POINTER:
            printf("Error: Null pointer detected\n");
            break;
        case ERROR_OUT_OF_RANGE:
            printf("Error: Index out of range\n");
            break;
        default:
            printf("Unknown error\n");
    }
	int data[10];
	int result = errorHandler(data, 5, 10);
	if (result != SUCCESS)
	{
		printErrorMessage(result);
		getchar(); // Pause after printing error message instead of the CMD closing after 0.047 seconds
    }
    return 0;
}
