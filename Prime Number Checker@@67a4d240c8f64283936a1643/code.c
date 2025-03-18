#include <stdio.h>

int isPrime(int a){
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
return 0;
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
