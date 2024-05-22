#include<stdio.h>
int main(){
    float num1,num2,result;
    int option;

    printf("\t\tWELCOME TO THE CALCULATOR TERMINAL\n");
do{
    printf("Enter the first number:\n");
    scanf("%f",&num1);

    printf("Enter the second number:\n");
    scanf("%f",&num2);
    
    printf("Choose an option:\n");
    printf("1.Sum\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");

printf("Enter an Option:");
scanf("%d",&option);

switch (option){
    case 1:
    result=num1+num2;
    printf("Result:%.2f\n\n",result);
    break;
    case 2:
    result=num1-num2;
    printf("Result:%.2f\n\n",result);
    break;
    case 3:
    result=num1*num2;
    printf("Result:%.2f\n\n",result);
    break;
    case 4:
    if(num2!=0){
        result=num1/num2;
        printf("Result:%.2f\n\n");
    }
    else{
        printf("Error:Division by zero is not possible\n\n");
    }
    break;
    case 5:
    printf("Exiting the terminal.Thank you\n\n");
    break;
    default:
    printf("Invalid option.Try again.\n\n");
}
 }
while (option!=5);
return 0;
  
}
