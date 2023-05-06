#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char input[100];
    fgets(input,100,stdin);
    int length;
    int vowel=0;
    int conso=0;
    length=strlen(input);

    for(int i=0 ; i<length ; i++){
        if(input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u' || input[i]=='A' || input[i]=='E' || input[i]=='I' || input[i]=='O' ||  input[i]=='U'){
            vowel++;
        }
        else if((input[i]>'a' && input[i]<'z') || (input[i]>'A' && input[i]<'Z') ){
            conso++;
        }
    }

    printf("The total number of vowel in string is %d\n", vowel);
    printf("The total number of consonant in string is %d", conso);
    return 0;
}