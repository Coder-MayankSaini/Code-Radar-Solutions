#include <stdio.h>

int fibonacciSeries(int a){


    int sum = 0 ;
    if(a==1){
        printf("0");
    }else{
    int num1 = 0;
    int num2 = 1;
    printf("%d %d ",num1,num2);
    for(int i = 3; i<=a ; i++){
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;

        printf("%d ",sum);
    }}

}