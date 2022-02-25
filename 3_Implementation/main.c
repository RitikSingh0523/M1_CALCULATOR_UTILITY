// Define all header file 
#include<stdio.h>
#include"calc.h"
int main()
{
    int opt;//Declear main variable 
    int operator;
    printf("1.Arthmatic Calculator\n2.Simple Interest\n3.Compound Interest\nChoose A Calculator:-");   
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        printf("1.Sum\n2. Substract \n3.Multiplication\n4.Division\n5.Square\n6.Factorial(!)\nEnter a operator\n");
        scanf("%d", &operator);
        int z=operator;
        return simple(z);
        break;
    case 2:
        return si();
        break;
    case 3:
        return ci();
        break;
    
    default:
       printf("Wrong Input");
        break;
    }
    
}