#include <stdio.h>

float pow(float a, int b)
{
    float res = 1;
    for (int j = 0; j < b; j++)
    {
        res *= a;
    }
    return res;
}

int main()
{
    int i;
    float ch, answ, mid;
    scanf ("%f", &ch);
    for (i = 1; i <= 11; i++)
    {
        mid = pow(ch, 11 - i) * i;
        answ = answ + mid;
    }
    printf("%.2f", answ);
    return 0;
}
