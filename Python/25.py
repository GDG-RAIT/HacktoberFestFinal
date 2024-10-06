'''
A word is considered valid if:

It contains a minimum of 3 characters.
It contains only digits (0-9), and English letters (uppercase and lowercase).
It includes at least one vowel.
It includes at least one consonant.
You are given a string word.

Return true if word is valid, otherwise, return false.

Notes:

'a', 'e', 'i', 'o', 'u', and their uppercases are vowels.
A consonant is an English letter that is not a vowel.
 

Example 1:

Input: word = "234Adas"

Output: true

Explanation:

This word satisfies the conditions.

Example 2:

Input: word = "b3"

Output: false

Explanation:

The length of this word is fewer than 3, and does not have a vowel.

Example 3:

Input: word = "a3$e"

Output: false

Explanation:

This word contains a '$' character and does not have a consonant.

 

Constraints:

1 <= word.length <= 20
word consists of English uppercase and lowercase letters, digits, '@', '#', and '$'.
'''
class Solution(object):
    def isValid(self, word):
        """
        :type word: str
        :rtype: bool
        """
        vowlow=['a', 'e', 'i', 'o', 'u']
        vowup=['A', 'E', 'I', 'O', 'U']
        i=0
        self.w=word
        if len(self.w) >= 3:
            i+=1
        if self.w.isdigit()==True or self.w.isupper()==True or self.w.islower()==True:
            i+=1
        for i in range (len(self.w)):
            if self.w[i] in vowlow[0:4]:
                 i+=1
            elif self.w[i] in vowup[0:4]:
                i+=1
        
        if i==3:
            return True
        else:
            return False


i=0      
a=Solution()
print(a.isValid("b3"))
        
        
        
        
        

        
        
        
        
        
        
        