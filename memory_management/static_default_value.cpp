#include<stdio.h>
#include <iostream>

int g; //g = 0, global objects have static storage duration
static int gs; //gs = 0, global static objects have static storage duration
static char p;

int main()
{
    static int s; //s = 0, static objects have static storage duration
    printf("Value of g = %d", g);
    printf("\nValue of gs = %d", gs);
    printf("\nValue of s = %d", s);
    std::cout << p;

    getchar();
    return 0;
}
