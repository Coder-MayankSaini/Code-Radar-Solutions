#include <stdio.h>


void grade(char x){

switch (x):

case A:
    printf("Excellent");
    break;

case B:
    printf("Good");
    break;

case C:
    printf("Average");
    break;

case D:
    printf("Below Average");
    break;

case F:
    printf("Fail");
    break;

default :
    printf("Invalid grade");
}

int main(){
    char a;
    scanf("%c",&a);
    grade(a);

    
    return 0;
}