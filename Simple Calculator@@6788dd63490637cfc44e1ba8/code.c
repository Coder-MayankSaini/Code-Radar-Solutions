#include <stdio.h>
void main(){

int a,b,output;
char o ;
scanf("%d %d %c",&a,&b,&o);

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
                return 1;
                     }
                     else{output = a/b;}
    
}
else{
    printf("error");
    return 1;
}

printf("%d",output);
return 0;

}