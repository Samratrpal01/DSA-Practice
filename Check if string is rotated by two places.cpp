Check if string is rotated by two places 
Easy Accuracy: 41.08% Submissions: 64797 Points: 2
Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.

Example 1:

Input:
a = amazon
b = azonam
Output: 1
Explanation: amazon can be rotated anti
clockwise by two places, which will make
it as azonam.
Example 2:

Input:
a = geeksforgeeks
b = geeksgeeksfor
Output: 0
Explanation: If we rotate geeksforgeeks by
two place in any direction , we won't get
geeksgeeksfor.
Your Task:
The task is to complete the function isRotated() which takes two strings as input parameters and checks if given strings can be formed by rotations. The function returns true if string 1 can be obtained by rotating string 2 by two places, else it returns false.

Expected Time Complexity: O(N).
Expected Auxilary Complexity: O(N).
Challenge: Try doing it in O(1) space complexity.

Codes Are:-
bool isRotated(string str1, string str2)
    {
      string s = str1 + str1;
       string r = str2 + str2;
       if(s.find(str2) == 2) {
           return true;
       }
       if(r.find(str1) == 2) {
           return true;
       }
       return false;
    }