#include <stdio.h>

int power(int b){
    int sum=b*b;
    printf("%d",sum);
    return sum;
}
int main(){
int a,b;
scanf("%d %d",&a,&b);
if(a==(power(b))){
    printf("Yes");
}
else{
    printf("No");
}

    return 0;
}