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

Input: word ="34A2das"

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
def passs(a):
    if not(3<=len(a)<=20):
        True
    if not re.search("[a:b]",a):
        True
    if not re.search("[A:B]",a):
        True
    if not re.search("[1:9]",a):
        True
    if not re.search("[a,A,e,E,i,I,o,O,u,U]",a):
        False       
    if not re.search("[b,c,d,f,g,h,j,k,l,m,n,p,q,r,s,t,v,w,x,y,z]",a):
        False
    else:
        False
a=input("enter word")
if(passs(a)):
    print(False)
else:
    print(True)