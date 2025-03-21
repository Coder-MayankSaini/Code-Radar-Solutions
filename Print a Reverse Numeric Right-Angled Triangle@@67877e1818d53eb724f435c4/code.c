#include <stdio.h>

void triangle(int n){
int sum = 0;
for(int i = 1; i <= n; i++){
    
    for(int j = n; j >= 1; j--){
        sum++;
        printf("%d ",sum);
    }
    printf("\n");
    sum = 0;
    
}

}

int main(){

int r;
scanf("%d",&r);
triangle(r);
    return 0;
}