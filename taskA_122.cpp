#include <iostream>
#include <cmath>
int getFractionalPart(double number, int precision) {
    int count = std::pow(10, precision);
    int temp = number * count;
    return temp % count;
}

bool task1(double value)
{
    int temp = getFractionalPart(value, 3);
    int a = temp % 10;
    int b = (temp / 10) % 10;
    int c = (temp / 100) % 10;
    return a == 0 || b == 0 || c == 0;
}

bool task2(double value)
{
    int temp = getFractionalPart(value, 2);
    int a = temp % 10;
    int b = (temp / 10) % 10;
    return a == 5 || b == 5;
}

int task3(double value)
{
    return getFractionalPart(value, 1) % 10;
}

int task4(double value)
{
    return (getFractionalPart(value, 2) / 10) % 10;
}

bool task5(double value)
{
    int temp = getFractionalPart(value, 3);
    int a = temp % 10;
    int b = (temp / 10) % 10;
    int c = (temp / 100) % 10;
    return a == 9 || b == 9 || c == 9;
}

int task6(double value)
{
    int a = getFractionalPart(value, 1) % 10;
    int b = (getFractionalPart(value, 2) / 10) % 10;
    int c = (getFractionalPart(value, 3) / 100) % 10;
    return a + b + c;
}

bool task7(double value)
{
    int a = getFractionalPart(value, 1) % 10;
    int b = (getFractionalPart(value, 2) / 10) % 10;
    int c = (getFractionalPart(value, 3) / 100) % 10;
    int d = (getFractionalPart(value, 4) / 1000) % 10;
    return (a+b) == (c+d);
}

bool task9(double value)
{
    int temp = getFractionalPart(value, 3);
    int a = temp % 10;
    int c = (temp / 100) % 10;
    return a == c;
}



// task8 руина

// task10 руина

// task11 руина

// task12 руина