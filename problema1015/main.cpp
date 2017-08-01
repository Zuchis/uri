#include <iostream>
#include <fstream>
#include <cstdio>
#include <vector>
#include <cmath>

int main(int argc, const char *argv[])
{
    int i;
    int n = 2;
    std::vector<double> inputs1;
    std::vector<double> inputs2;

    double distance;

    for (i = 0; i < n; i++) {
        inputs1.push_back(0);
        scanf("%lf",&inputs1[i]);
    }

    for (i = 0; i < n; i++) {
        inputs2.push_back(0);
        scanf("%lf",&inputs2[i]);
    }


    distance = sqrt(powf(inputs2[0] - inputs1[0],2.0) + powf(inputs2[1] - inputs1[1],2.0));

    printf("%.4f\n",distance);

    return 0;
}
