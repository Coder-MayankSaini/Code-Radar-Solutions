#include <stdio.h>

int main() {
    
    int a,b,out;
    scanf("%d%d",&a,&b);

    out = a-b;
    if(out>=0){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    
    return 0;
}