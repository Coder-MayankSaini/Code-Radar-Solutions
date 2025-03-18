#include <stdio.h>

void isPrime(int a){
int sum;
for(int i=a;i>0;i--){
    if(a%i==0){
        sum=sum+1;
    }
}

if(sum=2){
    printf("1");
}
else(printf("0"));
}


