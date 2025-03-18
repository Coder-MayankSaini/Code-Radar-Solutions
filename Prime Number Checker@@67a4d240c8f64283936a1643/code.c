#include <stdio.h>

void isPrime(int a){
int sum = 0;
for(int i=1;i<=a;i++){
    if(a%i==0){
        sum++;
    }
}

if(sum==2){
    return 1;
}
else(
    return 0;)
}


