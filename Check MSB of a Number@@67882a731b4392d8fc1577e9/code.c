#include <stdio.h>

int main() {
    
    int a,b;
    scanf("%d",&a);

    b = 1u << 31;

    if( a & b ){
        printf("Set");
    }
    else{
        printf("Not Set");
    }

    return 0;
}