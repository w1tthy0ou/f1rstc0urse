#include "calculator.h"
#include <exception>

using std::log;

double calc::calculate(const double& x, const double& b, const double& a)
{
	auto result = pow(x, 3 / 4) - a * x / log(10) * x + b;
	return result;
}

bool calc::calculate(const double& x, const double& b, const double& a, double& result)
{
	try
	{
		result = pow(x, 3 / 4) - a * x / log(10) * x + b;
		return true;
	}
	catch (...)
	{
		return false;
	}
}
