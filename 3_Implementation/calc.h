/* 
  




*/
double simple();
double ci();
double si();
double sum(double operand1,double operand2)
        {
            printf("Sum is=%lf",operand1+operand2);
            return operand1+operand2;
        }
double substract(double operand1,double operand2)
        {
            printf("Substract is=%lf",operand1-operand2);
            return operand1-operand2;
        }
double mul(double operand1,double operand2)
        {
            double mp=operand1*operand2;
            printf("Multiplication is=%lf",operand1*operand2);
            return mp;
        }
double div(double operand1,double operand2)
        {
            
            if(operand2==0)
        {
            printf("ERROR");
            return 0;
        }
        else{
            double dv=operand1/operand2;
            printf("Division is=%lf",dv);
            return dv;
            
        }
        }
double square(double operand1)
        {
            printf("Square is =%lf",operand1*operand1);
            return operand1*operand1;
        }
double facto(int operand1)
{
    double fact=1;
     for (int i = 1; i <= operand1; i++)
        {
            fact=i*fact;
        }
        printf("Factorial is =%lf",fact);
        return fact;
}
double simp(double p,double r,double t)
{
    double si=(p*r*t)/100;
    return si;
    printf("Simple Interest Is=%lf",si);
    printf("\n");
}
double yearly(double p,double r,double t)
{
    double q=(1+r/100);
        
        double pow=1;
        for(int i=0; i<t;i++)
        {
            pow=pow*q;
        }
    printf("Yearly Interest is=%lf",p*pow);   
    return p*pow;
       
}
double hyear(double p,double r,double t)
{
    double q=(1+r/200);
        double pow=1;
        for(int i=0; i<t*2;i++)
        {
            pow=pow*q;
        }
    
    printf("Yearly Interest is=%lf",p*pow);
    return p*pow;
}
double quater(double p,double r,double t)
{
    double q=(1+r/400);
        double pow=1;
        for(int i=0; i<t*4;i++)
        {
            pow=pow*q;
        }
    
    printf("Quaterly Interest is=%lf",p*pow);
    return p*pow;
}
double monthly(double p,double r,double t)
{
    double q=(1+r/1200);
        double pow=1;
        for(int i=0; i<t*12;i++)
        {
            pow=pow*q;
        }
    printf("Monthly Interest is=%lf",p*pow); 
    return p*pow;  
}