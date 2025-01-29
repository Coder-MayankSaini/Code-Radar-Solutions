#include <stdio.h>
#include <math.h>

int main() {
    
    int a;
    scanf("%d",&a);
    
    int remainder = fmod(a,2);

    if(remainder==0){
        printf("Even");

    }
    else{
        printf("Odd");
    }
}

    return 0;
}