//Void Pointers
//Void Pointers can store address of any type of variable
#include<stdio.h>
void main()
{
    int a=5;
    float b=11.2;
    void *p;
    p=&a;
    printf("\nValue of a=%d",*(int *)p); //Type Casting
    p=&b;
    printf("\nValue of b=%d",*(float *)p); //Type Casting
}
