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
    printf("\nTotal Amount is %f",si+p);


}