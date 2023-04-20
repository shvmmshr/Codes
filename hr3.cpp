#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a;
    long l;
    char ch;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &a, &l, &ch, &f, &d);
    printf("%d\n", a);
    printf("%ld\n", l);
    printf("%c\n", ch);
    printf("%f\n", f);
    printf("%lf\n", d);

    return 0;
}