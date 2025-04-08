#include <stdio.h>

int power(int b, int k){
    int sum=1;
    
    for(int i=1 ; i<=k ; i++){
        sum = sum*k;
    }
    print("%d",sum);
    return sum;
}
int main(){
int a,b;
scanf("%d %d",&a,&b);
if(a==(power(b, 2))){
    printf("Yes");
}
else{
    printf("No");
}

    return 0;
}