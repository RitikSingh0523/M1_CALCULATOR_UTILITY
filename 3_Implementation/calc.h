/* 
  




*/
double simple();
double ci();
double si();
int sum(double operand1,double operand2)
        {
            return operand1+operand2;
        }
int substract(double operand1,double operand2)
        {
            return operand1-operand2;
        }
int mul(double operand1,double operand2)
        {
            return operand1*operand2;
        }
int div(double operand1,double operand2)
        {
            
            if(operand2==0)
        {
            return 0;
        }
        else{
            
            return operand1/operand2;
            
        }
        }
int square(double operand1)
        {
            printf("Square is =%0.2lf",operand1*operand1);
        }
int facto(int operand1)
{
    double fact=1;
     for (int i = 1; i <= operand1; i++)
        {
            fact=i*fact;
        }
        printf("Factorial=%0.2lf",fact);
}
int simp(double p,double r,double t)
{
    double si=(p*r*t)/100;
    printf("Simple Interest of amount %0.2lf is =%0.2f",p,si);
    printf("\nTotal Amount is %0.2lf",si+p);
    printf("\n");
}
int yearly(double p,double r,double t)
{
    double q=(1+r/100);
        
        double pow=1;
        for(int i=0; i<t;i++)
        {
            pow=pow*q;
        }
        
        printf("\nTotal Interest=%0.2lf",p*pow);
        printf("\nInterest Amount=%0.2lf",p*pow-p);
}
int hyear(double p,double r,double t)
{
    double q=(1+r/200);
        double pow=1;
        for(int i=0; i<t*2;i++)
        {
            pow=pow*q;
        }
        printf("\nTotal Interest=%0.2lf",p*pow);
        printf("\nInterest Amount=%0.2lf",p*pow-p);

}
int quater(double p,double r,double t)
{
    double q=(1+r/400);
        double pow=1;
        for(int i=0; i<t*4;i++)
        {
            pow=pow*q;
        }
        printf("\nTotal Interest=%0.2lf",p*pow);
        printf("\nInterest Amount=%0.2lf",p*pow-p);
}
int monthly(double p,double r,double t)
{
    double q=(1+r/1200);
        double pow=1;
        for(int i=0; i<t*12;i++)
        {
            pow=pow*q;
        }
        printf("\nTotal Interest=%0.2lf",p*pow);
        printf("\nInterest Amount=%0.2lf",p*pow-p);
}