#include <iostream> // Preprocessor Statement (happens just before compilation)
#include "Log.h"

using namespace std;

int Multiply(int a, int b);

void MultiplyAndLog(int a, int b)
{
	std::cout << Multiply(a, b);
}

// Entry Point
// Do not need return value for this function.
int main() {
	// 1~31: Value, 32: Is Negative => max 2^31
	unsigned int variable = 8; // 4-Bytes, Signed -2b -> 2b
	float a = 1.234f;
	double b = 1.234567;

	std::cout << variable << std::endl;
	std::cout << Multiply(2, 3) << std::endl;

	MultiplyAndLog(20, 40);

	std::cin.get();
}