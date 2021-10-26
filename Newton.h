//
// Created by Demia on 25.10.2021.
//

#ifndef INC_6_9_32_NEWTON_H
#define INC_6_9_32_NEWTON_H


#include <vector>

class Newton {
private:
    std::vector<double> x;
    std::vector<double> y;


    double difference(double k, int first, int last, std::vector<double> &diff);

public:
    Newton(const std::vector<double> &x,
           const std::vector<double> &y);

    double interpolate(double x);


};


#endif //INC_6_9_32_NEWTON_H
