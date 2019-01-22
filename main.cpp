

#include "cppfunctions.hpp"
#include <iostream>

double density(double x, double y, double z)
{
    return 2+ x+y+z;
}

std::array<double,3> magnetic(double x, double y)
{
    return {2+x+y, 3+y};
}


int main()
{
    cppfunctions::ScalarFunction<3> n = density;
    cppfunctions::VectorFunction<2> B = magnetic;
    std::cout << n(3,2, 1) << " " << B(3,2)[0] << "\n";
}
