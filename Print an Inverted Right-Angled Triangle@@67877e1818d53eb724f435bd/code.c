#include <stdio.h>
void main(){

    int i,y,a;
    scanf("%d",&a);
    for(i=a;i>0;i--){
        for(y=0;y<=i;y++){
            printf("*");
        }
        printf("\n");
    }
}