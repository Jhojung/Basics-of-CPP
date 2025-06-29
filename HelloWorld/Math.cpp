#include <iostream>
#include "Log.h"

int Multiply(int a, int b)
{
	Log("Multiply"); // Removed in Compile Step for optimization (Not storing return value!)
	return a * b;
}
// #include "EndBrace.h"

// Important to know how pre-processor evsaluations work.
// It doesn't link as a file - It Copy and Paste(Append) it to CPP file.