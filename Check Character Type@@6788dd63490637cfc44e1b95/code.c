#include <stdio.h>
#include <ctype.h>

int main(){
int a;
scanf("%c",&a);

     if(isdigit(a)){
        printf("Digit");
     }
     else if(isalpha(a)){
        char loweralpha = tolower(a);
        if(loweralpha=='a'||loweralpha=='e'||loweralpha=='i'||loweralpha=='o'||loweralpha=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
     }else{
        printf("Special Character");
     }

return 0;
}