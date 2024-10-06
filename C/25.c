// Valid Word

// A word is considered valid if:

// It contains a minimum of 3 characters.
// It contains only digits (0-9), and English letters (uppercase and lowercase).
// It includes at least one vowel.
// It includes at least one consonant.
// You are given a string word.

// Return true if word is valid, otherwise, return false.

// Notes:

// 'a', 'e', 'i', 'o', 'u', and their uppercases are vowels.
// A consonant is an English letter that is not a vowel.
 

// Example 1:

// Input: word = "234Adas"

// Output: true

// Explanation:

// This word satisfies the conditions.

// Example 2:

// Input: word = "b3"

// Output: false

// Explanation:

// The length of this word is fewer than 3, and does not have a vowel.

// Example 3:

// Input: word = "a3$e"

// Output: false

// Explanation:

// This word contains a '$' character and does not have a consonant.

 

// Constraints:

// 1 <= word.length <= 20
// word consists of English uppercase and lowercase letters, digits, '@', '#', and '$'.

#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    char x;
    char spchar[100]={'!','@','$','#','%','^','&','*','(',')','-','_','+','=','[',']','{','}','<','>','/','?','|'};
    char vowel[100]={'a','e','i','o','u','E','I','O','U'};
    printf("Enter your input: \n");
    scanf("%s",str);
    printf("\nYour input is: %s",str);
    int j = strlen(str);
    //printf("\nLength of the input is: ",j);
    for(int i=0;i<=j;i++){
        if(j>3 ){
            printf("\nTrue!");
            break;
            
        }
        else if(str[i] == spchar[100]){
            printf("\nFalse!");
            break;
        } 
        else if(str[i]!=vowel[100]){
            printf("\nFalse!");
            break;
        }
        else {
            printf("\nTrue!");
        }

    }  
    return 0;
}
// if(str[]==('A'<=x>='Z')&&str[]==('a'<=x>='z'))