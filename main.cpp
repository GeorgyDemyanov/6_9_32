#include <iostream>

#include "Newton.h"
int main() {
    std::vector<double> x = {1910,1920,1930,1940,1950,1960,1970,1980,1990,2000};
    std::vector<double> y = {92228496,106021537,123202624,132164569,151325798,173323175,203211926,226545805,248709873,281421906};
    Newton newton(x,y);
    std::cout<<"Newton: "<<newton.interpolate(1986)<<std::endl;

    return 0;
}
