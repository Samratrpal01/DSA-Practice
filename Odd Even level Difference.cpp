// Odd even level difference 
// Easy Accuracy: 53.67% Submissions: 24419 Points: 2
// Given a Binary Tree. Find the difference between the sum of node values at even levels and the sum of node values at the odd levels.

// Example 1:

// Input:
//             1
//           /   \
//          2     3

// Output: -4

// Explanation:
// sum at odd levels - sum at even levels
// = (1)-(2+3) = 1-5 = -4

// Example 2:

// Input:
//             10
//           /    \
//         20      30
//        /  \         
//      40    60      

// Output: 60

// Explanation:
// sum at odd levels - sum at even levels
// = (10+40+60) - (20+30)
// = 110 - 50
// = 60

// Your Task:  
// You dont need to read input or print anything. Complete the function getLevelDiff() which takes root node as input parameter and returns an integer.
 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(height of tree)
 

// Constraints:
// 1 ≤ N ≤ 10^5
// Codes Arr:-
void helper(Node*root,int level,int &odd,int &even)
    {   if(root==NULL)
        return;
     if(level%2==0)
        even+=root->data;
    else
    odd+=root->data;
    
    helper(root->left,level+1,odd,even);
    helper(root->right,level+1,odd,even);
    }
    int getLevelDiff(Node *root)
    {   
       int odd=0,even=0;
      helper(root,0,odd,even);
      return even-odd;
    }