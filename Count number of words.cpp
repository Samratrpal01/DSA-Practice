// <!-- Count number of words 
// Easy Accuracy: 23.14% Submissions: 5670 Points: 2
// Given a string consisting of spaces,\t,\n and lower case  alphabets.Your task is to count the number of words where spaces,\t and \n work as separators.
 

// Example 1:

// Input: S = "abc def"
// Output: 2
// Explanation: There is a space at 4th
// position which works as a seperator
// between "abc" and "def"
 

// Example 2:

// Input: S = "a\nyo\n"
// Output: 2
// Explanation: There are two words "a"
// and "yo" which are seperated by "\n".

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function countWords() which accepts a string as input and returns number of words present in it.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)
// where N is length of given String.

// Constraints:
// 2 <= Length of String <= 106 -->

Codes Are:-
int countWords(string s)
{
    int count=0, flag=0;      
   for(int i=0; i<s.size(); i++)
    {
        if( (s[i]==' ' || s[i]=='\\' )  )
         {
             if(s[i]=='\\' && (s[i+1]=='t' || s[i+1]=='n') ) i++;
             if(flag) count++; 
             flag=0;
         }
        else
         {
         flag=1;
         }
        
    }
    if (flag) count++;
    
    return count;
}