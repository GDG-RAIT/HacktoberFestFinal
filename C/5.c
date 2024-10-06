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
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

char* reverseWords(char *s) {
    int start = 0;
    while (s[start] == ' ') {
        start++;
    }

    int end = strlen(s) - 1;
    while (end >= 0 && s[end] == ' ') {
        end--;
    }

    reverse(s + start, s + end);

    int i = start, j = start;
    while (i <= end) {
        if (s[i] == ' ' || i == end) {
            reverse(s + j, s + (i == end ? i : i - 1));
            j = i + 1;
        }
        i++;
    }

    i = start, j = start;
    while (i <= end) {
        if (s[i] != ' ' || (i > start && s[i - 1] != ' ')) {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';

    return s;
}

