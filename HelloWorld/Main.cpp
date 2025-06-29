#include <iostream> // Preprocessor Statement (happens just before compilation)
#include "Log.h"

using namespace std;

int Multiply(int a, int b);

// Entry Point
// Do not need return value for this function.
int main() {
	std::cout << Multiply(2, 3) << std::endl;
	std::cin.get();
}