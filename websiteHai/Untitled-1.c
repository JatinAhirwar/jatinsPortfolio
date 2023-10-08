#include <stdio.h>

float area(float height, float base)
{
    return base * height * 0.5;
}
int main()
{
    float trinagles[][2] = {{2, 3}, {4, 5}, {6, 7}, {8, 9}, {10, 11}, {12, 13}, {14, 15}, {16, 17}, {18, 19}, {20, 21}};

    for (int i = 0; i < 10; i++)
    {
        printf("%f ", area(trinagles[i][0], trinagles[i][1]));
    }
}