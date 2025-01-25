#include <stdio.h>

int main() {
   
   char a[100];
   int b;
   char c[100];

    scanf("%99s %d\n%99s",a,&b,c);
    printf("Name: %s/nAge: %d\nHobby: %s",a,b,c);
    

    return 0;
}