#include<stdio.h>

/**
 * main - entry
 * char - variable
 * int - variable
 * long int - variable
 * long long int - variable
 * float - variable
 * printf - printout
 * printf - printout
 * printf - printout
 * printf - printout
 * printf - printout
 * printf - printout
 * Return: 0 if no error, 1 otherwise
 */

int main() 
{
    char charType;	
    int intType;
    long int long_intType;
    long long int longlong_intType;
    float floatType;

    printf("Size of char: %zu bytes\n", sizeof(charType));
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of long int: %zu bytes\n", sizeof(long_intType));
    printf("Size of long long int: %zu byte\n", sizeof(longlong_intType));
    printf("Size of float: %zu bytes\n", sizeof(float));

    return (0);
}
