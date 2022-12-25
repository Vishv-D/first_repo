#include<stdio.h>

float Addition(float a,float b){
    float s;
    s=a+b;
    return s;

}
float Subtraction(float a,float b){
    float s;
    s=a-b;
    return s;

}
float Multiplication(float a,float b){
    float s;
    s=a*b;
    return s;

}
float Divide(float a,float b){
    float s;
    s=a/b;
    return s;

}

float calculator(float a, float b){
    float r;
    int x;


    printf("What would you like to do:\n");
    printf("1-Addition\n2-Subtraction\n3-Multiplication\n4-Divide\n");
    printf("Enter your choice:\n");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
      r = Addition(a,b);
      return r;
        break;
    case 2:
        r = Subtraction(a,b);
       return r;
        break;
    case 3:
        r = Multiplication(a,b);
       return r ;
        break;
    case 4:
        r = Divide(a,b);
        return r;     
        break;
    default:
        
        return 'X';
        break;
    }



}
