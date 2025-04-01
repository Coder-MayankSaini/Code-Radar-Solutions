#include <stdio.h>

int check(int arr[],int n){
    int even = 0;
    int odd = 0;
    for(int i =0 ; i<=(n-1);i++){
        if(arr[i]%2==0) even +=  1;
        else odd+=1;

        printf("%d %d",even,odd);
    }

    return 0;
}



int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<=(n-1) ; i++) scanf("%d",&arr[i]);
    
    check(arr,n);
    return 0;
}