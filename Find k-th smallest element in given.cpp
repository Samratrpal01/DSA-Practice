// <!-- Find k-th smallest element in given n ranges 
// Medium Accuracy: 45.13% Submissions: 204 Points: 4
// Given an integer N consisting of ranges of the form [p, q] which denotes the integer in the range [p, p + 1, p + 2,...q].  Given another integer Q denoting the number of queries. The task is to return the kth smallest element for each query (assume k>1) after combining all the ranges.
// In case the kth smallest element doesn't exist -1. 

// Example 1:

// Input:
// range[] = {{1, 4}, {6, 8}}
// queries[] = {2, 6, 10}
// Output: 2 7 -1
// Explanation: After combining the given ranges, 
// the numbers become 1 2 3 4 6 7 8. As here 2nd 
// element is 2, so we print 2. As 6th element is 
// 7, so we print 7 and as 10th element doesn't exist, so we
// print -1.
// Example 2:

// Input:
// range[] = {{2, 6}, {5, 7}} 
// queries[] = {5, 8}
// Output: 6 -1
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function kthSmallestNum() which takes a N * 2 array denoting the ranges and an array denoting the queries.

Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(N) -->

 Codes Are:-
  vector<int>kthSmallestNum(vector<vector<int>>&range, vector<int>queries){
       set<int>s;
       vector<int>ans;
       vector<int>temp;
       
       for(int i=0;i<range.size();i++)
        {
            for(int j=range[i][0];j<=range[i][1];j++)
            {
                s.insert(j);
            }
            
        }
        
        for(int x:s)
        {
            temp.push_back(x);
        }
        
        for(int x:queries)
        {
            if(x>temp.size())
            {
                ans.push_back(-1);
                
            }
            else
                ans.push_back(temp[x-1]);
        }
        
        return ans;
    } 