#include <stdio.h>
#include <string.h>

int isPalindrome(char *inputString, int leftIndex, int rightIndex);

int main(){
    char inputString[100];
    printf("Input a word to check for palindrome : ");
    scanf("%s", inputString);

    if(isPalindrome(inputString, 0, strlen(inputString) - 1)){
        printf("The entered word is a palindrome\n", inputString);
    } else {
        printf("The entered word is not a palindrome\n", inputString);
    }

    return 0;
}

 int isPalindrome(char *inputString, int leftIndex, int rightIndex){

     if(NULL == inputString || leftIndex < 0 || rightIndex < 0){
         printf("Invalid Input");
         return 0;
     }

     if(leftIndex >= rightIndex)
         return 1;
     if(inputString[leftIndex] == inputString[rightIndex]){
         return isPalindrome(inputString, leftIndex + 1, rightIndex - 1);
     }

     return 0;
 }
