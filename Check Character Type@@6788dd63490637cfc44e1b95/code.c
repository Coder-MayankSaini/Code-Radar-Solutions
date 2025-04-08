#include <stdio.h>
#include <ctype.h>

int main(){
int a;
scanf("%c",&a);

     if(isdigit(a)){
        printf("Digit");
     }
     elseif(isalpha(a)){
        loweralpha = islower(a);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
     }else{
        printf("Special Character");
     }

return 0;
}