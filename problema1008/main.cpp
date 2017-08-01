#include <iostream>
#include <fstream>
#include <cstdio>
#include <vector>

int main(int argc, const char *argv[])
{
    int i;
    int n = 2;
    std::vector<int> inputs;

    double per_hour;
    double result;

    for (i = 0; i < n; i++) {
        inputs.push_back(0);
        scanf("%i",&inputs[i]);
    }
    scanf("%lf",&per_hour);

    result = inputs[1] * per_hour;

    std::cout << "NUMBER = " << inputs[0] << "\n";
    printf("SALARY = U$ %.2f\n",result);

    return 0;
}
