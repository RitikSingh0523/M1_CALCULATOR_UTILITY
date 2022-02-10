float ci()
{
    double p,r,ci;
    int t,n;
    printf("Enter Princple amount=");
    scanf("%lf",&p);
    printf("Enter Rate Of Interest=");
    scanf("%lf",&r);
    printf("Enter Time=");
    scanf("%d",&t);
    printf("1.Yearly\n2.Half yearly\n3.Quaterly\nChoose a Interest mode=");
    scanf("%d",&n);
    if(n==2)
    {
        double po=1,q=1+((r/2)/100);
       for(int i=1;i=t;i++)
       {
         po=po*q;
       }
       ci=p*po;
       printf("Compound Interest=%lf",ci);
    }
    else if(n==1)
    {
        double po=1,q=1+(r/100);
       for(int i=0;i<t;i++)
       {
         po=po*q;
       }
       //printf("%lf",po);
       ci=p*po;
       printf("Compound Interest=%lf",ci);
    }
}