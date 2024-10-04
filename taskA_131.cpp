#include <iostream>
#include <cmath>

bool taskk1(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

bool taskk2(int p, int q)
{
    return p % q == 0;
}

bool taskk3(int n, int k)
{
    return n % 2 == k % 2;
}

bool taskk4(int x, int y, int z)
{
    return x == y && y == z;
}

bool taskk5(int a, int b)
{
    return (a^b) == true;
}

bool taskk6(int a, int b)
{
    return a == true && b == false;
}

bool taskk7(int a, int b, int c)
{
    return (a^b^c) == true;
}

bool taskk8(int a, int b, int c)
{
    return a < 0 && b < 0 && c < 0;
}

bool taskk9(int a, int b, int c)
{
    return a >= 0 || b >= 0 || c >= 0;
}

bool taskk10(int a, int b, int c)
{
    return a >= 0 && b >= 0 && c >= 0;
}

bool taskk11(int a, int b, int c)   //тут условие выполняется не совсем верно
{
    return (a >= 0) ^ (b >= 0) ^ (c >= 0);
}

bool taskk12(int a, int b, int c)
{
    return (a == b) ^ (c == b) ^ (a == c);
}