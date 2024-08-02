//
// Created by YoCoco on 8/2/2024.
//
#include <stdio.h>
int main()
{
    // int type
    int a =10;
    short b = 20;
    long c = 30000;
    long long d = 4000000000LL;

    // float Type
    float e = 5.5f;
    double f = 6.6;
    long double g =7.7L;

    // char Type
    char h = 'H';

    // bool Type
    _Bool i = 1;// Standard C not enable native bool type, we use _Bool here and use int most times.

    //print Type
    printf("int Type: %d, %d, %ld, %lld\n", a, b, c, d);
    printf("float Type: %f, %f, %Lf\n", e, f, g);
    printf("char Type: %c\n", h);
    printf("Bool Type: %d\n", i);








}