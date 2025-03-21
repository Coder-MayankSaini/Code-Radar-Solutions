#include <stdio.h>

int triangle(int n){
    int a = 64;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j<=i;j++){
            int sum = a+j;
            printf("%c",sum);
        }
        printf("\n");
    }

    return 0;
}

int main(){

    int n;
    scanf("%d",&n);
    triangle(n);

    return 0;
}