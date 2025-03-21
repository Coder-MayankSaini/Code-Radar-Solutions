#include <stdio.h>

int triangle(int n){

for(int i = 1; i <= n; i++){
    int sum = 0;
    for(int j = n; j <=1; j--){
        sum++
        printf("%d ",sum);
    }
    printf("\n");
}

}

int main(){

int r;
scanf("%d",&r);
triangle(r);
    return 0;
}