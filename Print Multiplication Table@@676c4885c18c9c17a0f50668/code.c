#include <stdio.h>
int main(){

int a,i;

scanf("%d",&a);

for(i=1;i<=10;i++){
    int sum = a*i;
    printf("%d x %d = %d\n",a,i,sum);
}
    return 0;
}