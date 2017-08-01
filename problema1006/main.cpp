#include <iostream>
#include <cstdio>
#include <vector>

int main(int argc, const char *argv[])
{
    std::vector<double> grades = {0.0,0.0,0.0};

    int i;

    for (i = 0; i < 3; i++) {
        std::cin >> grades[i];
    }

    double grade = grades[0] * 0.2 + grades[1] * 0.3 + grades[2] * 0.5;

    printf("MEDIA = %.1f\n",grade);

    return 0;
}
