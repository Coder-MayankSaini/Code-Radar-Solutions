#include <stdio.h>
int main(){
    int a,f;
    scanf("%d",&a);
    f = a&1;
    
    if(f == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}