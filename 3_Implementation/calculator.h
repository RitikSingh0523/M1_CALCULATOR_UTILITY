//Simple Arthematic Operator
double simple()
{
    double operand1, operand2,sum=0,substract=0,mul=0,div=0,sqr=0,fact=1;
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
        div=operand1/operand2;
        printf("sum is =%lf",div);
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