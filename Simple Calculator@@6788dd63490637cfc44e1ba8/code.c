#include <stdio.h>
void main(){

int a,b,output;
char 0 ;
scanf("%d%d%c",&a,&b,&o);

if(o == '+'){
    output = a+b;
}
else if (o == '-'){
    output = a-b;
}
else if (o == '*' ){
    output = a*b;
}
else if(o == '/' ){
    output = a/b;
}
else{
    printf("error");
}

printf("%d",output);

}