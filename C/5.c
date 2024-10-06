// Reverse Words in a String

// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

// Example 1:
// Input: s = "the sky is blue"
// Output: "blue is sky the"

// Example 2:
// Input: s = "  hello world  "
// Output: "world hello"
// Explanation: Your reversed string should not contain leading or trailing spaces.

// Example 3:
// Input: s = "a good   example"
// Output: "example good a"
// Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.

char* reverseWords(char* s)
{
    char* reverseWords(char* s) 
{
    int st = 0;
    while (s[st] ==  ' ') 
    {
        st++;
    }
    int ed = strlen(s)  - 1;
    
    while (ed >= 0 &&   s[ed] == ' ') 
    {
        ed--;
    }

    reverse(s + st, s + ed + 1);

    int i = st;
    int j = st;
    while (i <= ed) 
    {
        if (s[i] == ' ') 
        {
            reverse(s + j, s + i);
            j = i + 1;
        }
        i++;
    }
    reverse(s + j, s + i); 

    i = st;
    j = st;
    while (i <= ed)
    {
        if (s[i] != ' ' || (i > st && s[i - 1] != ' ')) 
        {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';

    return s;
}
}

void reverse(char* begin, char* ed) 
*{
    while (begin < ed) {
        char temp = *begin;
        *begin = *ed;
        *ed = temp;
        begin++;
        ed--;
    }
}
