#include<stdio.h>
#include"calc.h"


int main(){   
    float p,q,result;
    printf("Welcome to basic calculator\n");
    printf("Enter two numbers:\n");
    scanf("%f %f",&p,&q);
   
    result = calculator(p,q);
    if(result!='X'){
    printf("The restult is: %.2f",result);
    }   
    else{
        printf("Wrong choice");
    }
}