#include <iostream>
#include <fstream>
#include <cstdio>
#include <vector>

int main(int argc, const char *argv[])
{
    int i,result;
    int n = 4;
    std::vector<int> inputs;

    for (i = 0; i < n; i++) {
        inputs.push_back(0);
        scanf("%i",&inputs[i]);
    }

    result = inputs[0] * inputs[1] - inputs[2] * inputs[3];

    std::cout << "DIFERENCA = " << result << "\n";

    return 0;
}
