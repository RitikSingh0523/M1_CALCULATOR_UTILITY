
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