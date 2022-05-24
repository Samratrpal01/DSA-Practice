// Diagonal Sum In Binary Tree 
// Consider Red lines of slope -1 passing between nodes (in following diagram). The diagonal sum in a binary tree is the sum of all node’s data lying between these lines. Given a Binary Tree of size N, print all diagonal sums.

// For the following input tree, output should be 9, 19, 42.
// 9 is sum of 1, 3 and 5.
// 19 is sum of 2, 6, 4 and 7.
// 42 is sum of 9, 10, 11 and 12.

// DiagonalSum

// Example 1:

// Input:
//          4
//        /   \
//       1     3
//            /
//           3
// Output: 7 4 
// Example 2:

// Input:
//            10
//          /    \
//         8      2
//        / \    /
//       3   5  2
// Output: 12 15 3 
// Your Task:
// You don't need to take input. Just complete the function diagonalSum() that takes root node of the tree as parameter and returns an array containing the diagonal sums for every diagonal present in the tree with slope -1.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1<=Number of nodes<=105

//Codes Are:-

void helper(vector<int>&v,Node* root,int start)
{
    if(root==nullptr)
    return;
    int dt=root->data;
    if(v.size()+1==start)
    v.push_back(dt);
    
    else if(v.size()>=start)
    v[start-1]+=dt;
    
    if(root->left!=nullptr)
        helper(v,root->left,start+1);
        
    if(root->right!=nullptr)
        helper(v,root->right,start);
    
    
}
vector <int> diagonalSum(Node* root) {
    vector<int>v;
    helper(v,root,1);
    return v;
    
}