#pragma once
#include <iostream>
#include <string>
#include <cmath>

namespace calc {
	class Calculator
	{
	private:
		double a;
		double b;
		bool succsess;
	public:
		Calculator(const double&, const double&);
		virtual ~Calculator();
		double calculate(const double&) const;
	};

	double calculate(const double& x, const double& b, const double& a);
	bool calculate(const double& x, const double& b, const double& a, double& result);


}
