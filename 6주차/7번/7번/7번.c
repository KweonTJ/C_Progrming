#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double gaussian(double x, double mean, double variance) 
{
    return (1.0 / (sqrt(2 * PI * variance))) * exp(-0.5 * pow((x - mean) / sqrt(variance), 2));
}

int main() 
{
    double start = -5.0;
    double end = 5.0;
    double increment = 0.1;
    double mean, variance, max_height;

    printf("please input mean, variance, and max_height: ");
    scanf_s("%lf %lf %lf", &mean, &variance, &max_height);

    for (double num = start; num <= end; num += increment) 
    {
        int asteriskCount = (int)(gaussian(num, mean, variance) * max_height);

        if (asteriskCount > 0) 
        {
            printf("%.1f ", num);
            for (int i = 0; i < asteriskCount; i++) 
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
