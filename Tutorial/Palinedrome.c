#include <stdio.h>
#include <string.h>

int main(){

    // write a program to print the given string in reverse order and check whether its a palindrome or not and store that in a different variable
    char str[100];
    char rev[100];
    int i,j;
    int flag=0;
    printf("Enter a string: ");
    gets(str);
    for(i=strlen(str)-1,j=0;i>=0;i--,j++){
        rev[j]=str[i];
    }
    rev[j]='\0';
    printf("Reverse of the string is: %s\n",rev);
    if(strcmp(str,rev)==0){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }
    return 0;



}
