#include <stdio.h>

int triangle(int n){

    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <=n-i+1){

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
