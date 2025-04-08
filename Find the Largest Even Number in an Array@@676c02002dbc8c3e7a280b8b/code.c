#include <stdio.h>

int lrgeven(int arr[],int n){

   for(int i =0 ; i<=n-2; i++){
    for(int j = 0 ; j<=n-2;j++ ){
        if(arr[j]<arr[j+1]){
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
   }


    return 0;
}

int main(){
int n;
scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    lrgeven(arr,n);
    
    for(int i =0 ; i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}