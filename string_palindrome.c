// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[100];
//     scanf("%s", str);
//     int length;
//     length=strlen(str);
//     int arr[length];
//     char *ptr=str;
//     int i=length-1;
//     while(*ptr!='\0'){
//         arr[i]=*ptr;
//         i--;
//         ptr++;
//     }
    
//     ptr=str;
//     int flag=0;   //palindrome
//     for(i=0 ; i<length ; i++){
//         if(arr[i]!=(*ptr)){
//             flag=1;
//             break;

//         }
//         else{
//             ptr++;
//         }
//     }
//     if(flag==0){
//         printf("%s is palindrome",str);
//     }
//     else{
//         printf("%s is not palindrome", str);
//     }

//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){

    char str[100];
    scanf("%s", str);
    char rev[100];

    strcpy(rev,str);    //main line
    strrev(rev);
    //printf("%s", rev);
    int x;
    x=strcmp(rev,str);
    //printf("%d\n", x);   /// 
    if(x==0){
        printf("Is palindrome");
    }
    else{
        printf("Not palindrome");
    }


    return 0;

}