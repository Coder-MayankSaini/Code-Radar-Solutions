#include <stdio.h>
#include <math.h>

int main() {
    
    int a,remainder;
    scanf("%d",&a);
    
    remainder = a%2;

    if(remainder==0){
        printf("Even\n");

    }
    else{
        printf("Odd\n");
    }
    return 0;
}
