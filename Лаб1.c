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
    float ch, ans, mid;
    scanf ("%f", &ch);
    for (i = 1; i <= 11; i++)
    {
        mid = pow(ch, 11 - i) * i;
        ans = ans + mid;
    }
    printf("%.2f", ans);
    return 0;
}
