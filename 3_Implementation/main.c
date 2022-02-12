// Define all header file 
#include<stdio.h>
#include"calc.h"
int main()
{
    int opt;//Declear main variable 
    printf("1.Arthmatic Calculator\n2.Simple Interest\n3.Compound Interest\nChoose A Calculator:-");   
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        return simple();
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