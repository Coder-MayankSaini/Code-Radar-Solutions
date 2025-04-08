#include <stdio.h>
int main(){
int a;
scanf("%d",&a);

        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("Vowel");
        }else if(a>=97 & a<=122){
            printf("Consonant");
        }else if(a=='0'||a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9')
        {
        printf("Digit");
        }else{
        printf("Special Character");
        }


return 0;
}