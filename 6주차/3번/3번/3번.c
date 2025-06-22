#include <stdio.h>

int main() {
    int width = 2;
    int height = 3;
    int area = 0;
    int largestArea = 0;

    while (area <= 150) 
    {
        area = width * height;
        if (area > 0 && area <=150) 
        {
            printf("the area of rectangle is %d\n", area);
        }

        if (area >= largestArea && area <= 150) 
        {
            largestArea = area;
        }

        width += 2;
        height += 3;
    }

    printf("The smallest rectangle has an area of 1.\n");
    printf("The largest rectangle has an area of %d.\n", largestArea);

    return 0;
}