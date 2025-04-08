#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
for(char i='a'; i='z';i++){
    if(a==i){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='o'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }

    }else if(a=='0'||a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
        }
}

return 0;
}