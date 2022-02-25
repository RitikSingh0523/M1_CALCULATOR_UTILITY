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

double simple(int z)
{
    double operand1, operand2;
    //int operator;
    //z=operator;
    
    //printf("1.Sum\n2. Substract \n3.Multiplication\n4.Division\n5.Square\n6.Factorial(!)\nEnter a operator\n");
    //scanf("%d", &operator);
    switch (z)
    {
    case 1:
        printf("Enter Both Operand\n");
        scanf("%lf %lf", &operand1, &operand2);
        return sum(operand1,operand2);
        
        break;
    case 2:
        printf("Enter Both Operand\n");
        scanf("%lf %lf", &operand1, &operand2);
        return substract(operand1,operand2);
        break;
    case 3:
        printf("Enter Both Operand\n");
        scanf("%lf %lf", &operand1, &operand2);
        return mul(operand1,operand2);
        break;
    case 4:
        printf("Enter Both Operand\n");
        scanf("%lf %lf", &operand1, &operand2);
        return div(operand1,operand2);
        break;
    case 5:
        printf("Enter Your Operand\n");
        scanf("%lf", &operand1);
        return square(operand1);
        
        break;  
    case 6:
        printf("Enter the Operand\n");
        scanf("%lf",&operand1);  
        return facto(operand1);
    default:
        printf("Wrong Input");
        break;
    }
    printf("\n");


}

double si()
{
    double p,r,t;
    printf("Enter Princple amount=");
    scanf("%lf",&p);
    printf("Enter Rate Of Interest=");
    scanf("%lf",&r);
    printf("Enter Time=");
    scanf("%lf",&t);
    return simp(p,r,t);
}
double ci()
{
    double p,r,t;
    int n;
    printf("Enter Princple amount=");
    scanf("%lf",&p);
    printf("Enter Rate Of Interest=");
    scanf("%lf",&r);
    printf("Enter Time=");
    scanf("%lf",&t);
    printf("1.Yearly\n2.Half yearly\n3.Quaterly\n4.Monthly\nChoose a Interest mode=");
    scanf("%d",&n);
    if(n==1)
    {
        return yearly(p,r,t);
    }
    else if(n==2)
    {
        return hyear(p,r,t);
    }
    else if(n==3)
    {
        return quater(p,r,t);
    }
    else if(n==4)
    {
        return monthly(p,r,t);
    }
    else{
        printf("\nwrong input");
    }
    printf("\n");
}