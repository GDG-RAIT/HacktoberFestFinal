'''
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
Example 3:

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
 

Constraints:

1 <= s.length <= 104
s contains English letters (upper-case and lower-case), digits, and spaces ' '.
There is at least one word in s.

'''
class Solution(object):
    def reverseWords(self, s):
        
        """
        :type s: str
        :rtype: str
        """
        s+=" "
        word, w=[],""
        for i in s:
            if i!=" ":
                w+=i
            else:
                word.append(w)
                w=""
        i=0
        n=len(word)-1
        while i!=n//2:
            word[i], word[n-i]=word[n-i], word[i]
            i+=1
        s=""
        for i in word:
            if i==word[n]:
                s=s+i+" "
            else:
                s=s+i+" "
        s=s.replace("  ","")
        return s

i1="the sky is blue"
i2 ="  hello world  "
i3="a good   example"
obj=Solution ()
print(obj.reverseWords(i1)) 
print(obj.reverseWords(i2)) 
print(obj.reverseWords(i3))         
        
        
        
        
        