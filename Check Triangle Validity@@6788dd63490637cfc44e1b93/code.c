#include <stdio.h>

int a,b,c,d;
scanf("%d%d%d",&a,&b,&c);

d = a+b;
if(d<=c){
    printf("Valid");
}
else{
    printf("Invalid");
}