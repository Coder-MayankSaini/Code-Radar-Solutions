#include <stdio.h>
void main(){
    int a,sum,i;
    scanf("%d",&a);
    sum = 0;

    for(i=2;i<=a;i++){
        if(n%i==0){
            sum = sum+1
        }
    }

    if(sum==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

}