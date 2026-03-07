//C program to demonstrate expression with unary operators
#include <stdio.h>

int main()
{
    int a=10, res;
    
    //post-incrementing a res is assigned 10,a is not updated yet 
    res = a++;
    
    printf("a is %d, res is %d\n", a, res);
    
    //post-decrementing res is assigned 11, a is not updated yet
    res = a--;
    
    printf("a is %d, res is %d\n", a, res);
    
    res = ++a;
    
    //a and res have same values = 11
    printf("a is %d, res is %d\n", a, res);
    
    res = --a;
    
    //a and res have same values = 10
    printf("a is %d, res is %d\n", a, res);
    
    printf("+a is %d\n", +a);
    printf("-a is %d\n", -a);
    
    return 0;
}
