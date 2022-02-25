

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
