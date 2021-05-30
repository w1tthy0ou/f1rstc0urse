#include "calculator.h"

using namespace std;
using namespace calc;

int main(int argc, char* argv[])
{
	auto a = -11.2, b = -12.93, x = 2.29;
	auto result = calc::calculate(x, a, b);
	cout << "Result 1: " << result << endl;

	if (calc::calculate(x, a, b, result)) {
		cout << "Result 2: " << result << endl;
	}
	else {
		cout << "Erro 404" << endl;
	}
}