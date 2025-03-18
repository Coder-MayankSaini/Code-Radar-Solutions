#include <stdio.h>
c
int main(){

int a,b,o,output;
scanf("%d%d%c",&a,&b,&o);

if(o == +){
output = a+b;
}
else if (o == -){
    output = a-b;
}
else if (o == * ){
    output = a*b;
}
else if(o == / ){
    output = a/b;
}
else{
    output = "error";
}

printf("%d",output);


    return 0;
}