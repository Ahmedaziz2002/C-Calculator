#include<stdio.h>
int main(){
    float num1,num2,result;
    int option;
do{
    printf("Enter the first number:");
    scanf("%f",&num1);

    printf("Enter the second number:");
    scanf("%f",&num2);
    
    printf("Choose an option:\n");
    printf("1.Sum\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");

printf("Enter an Option:");
scanf("%d",&option);

switch(option){
case 1:
 printf("Result:%.2f\n\n",num1+num2);
 break;
 case 2:
  printf("Result:%.2f\n\n",num1-num2);
  break;
case 3:
 printf("Result:%.2f\n\n",num1*num2);
 break;
case 4:
 printf("Result:%.2f\n\n",num1/num2);
 break;
 case 5:
 printf("Exiting the terminal.Thank you\n\n");
 break;
default:
printf("Invalid Option!Try again");
}
 }
while (option!=5);
return 0;
  
}
