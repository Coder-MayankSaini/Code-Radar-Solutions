#include <stdio.h>

int lrgeven(int arr[]){

    for(int i=0,j=i+1;i<n-1;i++,j++){
        if(arr[i]<arr[j]){
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    return 0;
}

int main(){

scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    lrgeven(arr[]);
    return 0;
}