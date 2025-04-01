#include <stdio.h>
int n ;
int k;


int reverse(int arr[], int si, int li){

    for(int i=si,j=li ; i<j ; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
return 0;
}


int main(){
    scanf("%d",&n);
    int arr[n];
    
    for(int i = 0 ; i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);

    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

    for(int i = 0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    

    return 0;
}