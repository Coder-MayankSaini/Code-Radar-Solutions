#include <stdio.h>

int triangle(int n){
    for(int i = 1 ; i <=n ; i++){
        for(int j = 1; j <= i;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
int n;
scanf("%d",&n);
triangle(n);
}