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
    printf("\n");
}

double simple()
{
    double operand1, operand2,sum=0,substract=0,mul=0,sqr=0,fact=1;
    int operator;
    printf("1.Sum\n2. Substract \n3.Multiplication\n4.Division\n5.Square\n6.Factorial(!)\nEnter a operator\n");
    scanf("%d", &operator);
    switch (operator)
    {
    case 1:
        printf("Enter Both Operand\n");
        scanf("%lf %lf", &operand1, &operand2);
        sum=operand1+operand2;
        printf("sum is =%lf",sum);
        break;
    case 2:
        printf("Enter Both Operand\n");
        scanf("%lf %lf", &operand1, &operand2);
        substract=operand1-operand2;
        printf("Substract is =%lf",substract);
        break;
    case 3:
        printf("Enter Both Operand\n");
        scanf("%lf %lf", &operand1, &operand2);
        mul=operand1*operand2;
        printf("Multiplication is =%lf",mul);
        break;
    case 4:
        printf("Enter Both Operand\n");
        scanf("%lf %lf", &operand1, &operand2);
        if(operand2==0)
        {
            printf("Secound Input Can not be zero");
        }
        else{
            double di;
        di=operand1/operand2;
        printf("sum is =%lf",di);
        }
        break;
    case 5:
        printf("Enter Your Operand\n");
        scanf("%lf", &operand1);
        sqr=operand1*operand1;
        printf("sum is =%lf",sqr);
        break;  
    case 6:
        printf("Enter the Operand\n");
        scanf("%lf",&operand1);
        for (int i = 1; i <= operand1; i++)
        {
            fact=i*fact;
        }
        printf("Factorial=%lf",fact);   
    default:
        printf("Wrong Input");
        break;
    }


}

double si()
{
    double p,r,t,si;
    printf("Enter Princple amount=");
    scanf("%lf",&p);
    printf("Enter Rate Of Interest=");
    scanf("%lf",&r);
    printf("Enter Time=");
    scanf("%lf",&t);

    si=(p*r*t)/100;
    printf("Simple Interest of amount %lf is =%f",p,si);
    printf("\nTotal Amount is %lf",si+p);


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
        double q=(1+r/100);
        
        double pow=1;
        for(int i=0; i<t;i++)
        {
            pow=pow*q;
        }
        
        printf("\nCompound Interest=%lf",p*pow);
    }
    else if(n==2)
    {
        double q=(1+r/200);
        double pow=1;
        for(int i=0; i<t*2;i++)
        {
            pow=pow*q;
        }
        printf("Compound Interest=%lf",p*pow);
    }
    else if(n==3)
    {
        double q=(1+r/400);
        double pow=1;
        for(int i=0; i<t*4;i++)
        {
            pow=pow*q;
        }
        printf("\nCompound Interest=%lf",p*pow);
    }
    else if(n==4)
    {
        double q=(1+r/1200);
        double pow=1;
        for(int i=0; i<t*12;i++)
        {
            pow=pow*q;
        }
        printf("\nCompound Interest=%lf",p*pow);
    }
    else{
        printf("\nwrong input");
    }
}