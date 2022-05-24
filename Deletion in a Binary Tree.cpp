// Deletion in a Binary Tree 
// Easy Accuracy: 38.05% Submissions: 17889 Points: 2
// Given a Binary Tree of size N, your task is to complete the function deletionBT(), that should delete a given node from the tree by making sure that tree shrinks from the bottom (the deleted node is replaced by bottommost and rightmost node).
// Example:

// Eample Deletion in Bt


// Your Task:
// You don't have to take input. Complete the function deletionBT() that takes root node of the tree and given node value (Key) as input parameter and return the root of the modified tree.

// Example 1:
 

// Input:
// Key=1
//          1
//        /   \
//       4     7
//      / \
//     5   6 
// Output:
// 5 4 6 7 

// Explanation:
// Modified Tree after deletion the 
// node with key = 1
//      6 
//     /  \
//    4    7
//   /   
//  5     
// The Inorder traversal of the modified 
// tree is 5 4 6 7 


// Constraints:
// 1<=N<=104
// Codes Are:-
struct Node* deletionBT(struct Node* root, int key)
{
   queue<Node *>q;
   q.push(root);
   Node *temp=NULL,*t,*p;
   
   while(!q.empty())
   {
       t=q.front(),q.pop();
       if(t->data==key)
       temp=t;
       if(t->left)
       {
           p=t;
           q.push(t->left);
       }
       if(t->right)
       {
           p=t;
           q.push(t->right);
           
       }
   }
   
   if(temp!=NULL)
   {