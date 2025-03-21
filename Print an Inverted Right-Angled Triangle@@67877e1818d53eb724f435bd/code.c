#include <stdio.h>

int triangle(int n){
    for(int i = n ; i>=1 ; i--){
        for(int j = i; j >=1 ; j-- ){
            printf("*");
        }
        printf("\n");
    }
}

int main(){

int n;
scanf("%d",&n);
triangle(n);
return 0;
}