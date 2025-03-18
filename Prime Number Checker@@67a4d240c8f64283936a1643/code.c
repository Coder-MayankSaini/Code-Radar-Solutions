#include <stdio.h>

void isPrime(int a){

for(int i=a,i>0,i--){
    if(a%i==0){
        sum=sum+1;
    }
}

if(sum=2){
    return 1;
}
else(return 0;)
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
