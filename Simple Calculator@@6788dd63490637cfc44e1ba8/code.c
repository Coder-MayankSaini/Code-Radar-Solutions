#include <stdio.h>
void main(){

int a,b,o,output;
scanf("%d%d%c",&a,&b,&o);

if(o == '43'){
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