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
import re
def words(a):
    if (len(a)>3):
        False
    if re.search('a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,,S,T,U,V,W,X,Y,Z
',a):
        False
    if not re.search('A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z
',a):
        False
    if not re.search('1:9',a):
        False
    if not re.search('a,e,i,o,u',a):
        False     
    else:
        True
a=input("enter word")
if(words(a)==True):
    print(True)
else:
    print(False)

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        