#include <stdio.h>

int star(int side){
    
for(int i = 1 ; i <= side; i++){
    for(int j = 1 ; j <= side;j++){
        printf("*");
    }
    printf("\n");
}
    
    return 0;
}

int main(){
    int side;
    
    scanf("%d",&side);
    star(side);
    return 0;
}