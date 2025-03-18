#include <stdio.h>
void main(){

int a,b,output;
char o ;
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
else if(o == '/' )
                {if(b==0){
                printf("error");
                     }
                     else{output = a/b;}
    
}
else{
    printf("error");
}

printf("%d",output);

}