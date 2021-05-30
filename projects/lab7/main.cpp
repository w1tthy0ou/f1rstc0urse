#include <iostream>
#include <utility>
#include <vector>
#include <memory>
#include <cmath>
#include "array_common.hpp"

typedef std::pair<double, double> paird_t;
typedef std::vector<paird_t> vecd_t;

int main(int argc, char *argv[]){

    std::cout << "Hello world!\n";

    std::vector<std::pair<double, double>> vec;

    double a = -4, b = 4, h = 0.1;

    for (double i = a; i <= b; i += h)
    {      
        double res = 0;
        if (i < 0)
            res = std::pow(-i, 2) + 1 / i;
        else if ((i > 0)&&(i < 3))
            res = sqrt(pow(i, 2) + 1);
        else
            res = i - 3;
        vec.push_back(std::make_pair(i, res));
    }

    arrays::print(vec);

}