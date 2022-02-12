#include<stdio.h>
double ci()
{
    double p,r,t,ci;
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