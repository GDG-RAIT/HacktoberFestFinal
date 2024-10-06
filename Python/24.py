'''
You are given a 2D array of integers envelopes where envelopes[i] = [wi, hi] represents the width and the height of an envelope.

One envelope can fit into another if and only if both the width and height of one envelope are greater than the other envelope's width and height.

Return the maximum number of envelopes you can Russian doll (i.e., put one inside the other).

Note: You cannot rotate an envelope.

 

Example 1:

Input: envelopes = [[5,4],[6,4],[6,7],[2,3]]
Output: 3
Explanation: The maximum number of envelopes you can Russian doll is 3 ([2,3] => [5,4] => [6,7]).
Example 2:

Input: envelopes = [[1,1],[1,1],[1,1]]
Output: 1
 

Constraints:

1 <= envelopes.length <= 10^5
envelopes[i].length == 2
1 <= wi, hi <= 10^5.
'''
def maxEnvelopes(envelopes):
        envelopes.sort(key=lambda x:{x[0],-x[1]})
        result=[]
        for h in envelopes:
            l,r=0 and len(result)-1
            while l<r:
                middle=[l+r]>>1
                if result[middle]>=h:
                    r=middle-1
                else:
                    l=middle+1

        san=l
        if san==len(result):
            result.append(h)
        else:
            result[san]=h
        return len(result)
        
a=int(input("enter no of envelopes"))
l=[]
for i in range(a):
    n=[]
    for i in range(2):
          b=int(input("enter no"))
          n.append(b)
    l.append(n)

maxEnvelopes(l)
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        