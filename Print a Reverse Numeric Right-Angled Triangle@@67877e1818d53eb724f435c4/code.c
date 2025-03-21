#include <stdio.h>

void triangle(int n){
int sum = 0;
for(int i = n; i >= 1; i--){
    
    for(int j = 1; j >= n-i+1; j++){
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