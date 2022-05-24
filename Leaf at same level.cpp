// Leaf at same level 
// Easy Accuracy: 49.76% Submissions: 45392 Points: 2
// Given a Binary Tree, check if all leaves are at same level or not.

// Example 1:

// Input: 
//             1
//           /   \
//          2     3

// Output: 1

// Explanation: 
// Leaves 2 and 3 are at same level.

// Example 2:

// Input:
//             10
//           /    \
//         20      30
//        /  \        
//      10    15

// Output: 0

// Explanation:
// Leaves 10, 15 and 30 are not at same level.

// Your Task: 
// You dont need to read input or print anything. Complete the function check() which takes root node as input parameter and returns true/false depending on whether all the leaf nodes are at the same level or not.
 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(height of tree)
// Codes Are:-
 bool helper(Node* root,int level,int *leaflevel)
    {
        if(root==NULL)
        return true;
        
        if(!root->left and !root->right)
        {
            if(*leaflevel==0)
            {
               *leaflevel=level; 
               return true;
               
            }
            
            return (level==*leaflevel);
            
        }
        
        return (helper(root->left,level+1,leaflevel) and helper(root->right,level+1,leaflevel));
    }
    bool check(Node *root)
    {
        int level=0,leaflevel=0;
        return helper(root,level,&leaflevel);
    }