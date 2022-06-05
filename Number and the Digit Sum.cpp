// Number and the Digit Sum 
// Easy Accuracy: 51.37% Submissions: 1669 Points: 2
// Given a positive value N, we need to find the count of numbers smaller than or equal to N such that the difference between the number and sum of its digits is greater than or equal to the given specific value K.

// Example 1:

// Input:N = 13, K = 2Output: 4Explanation: 10, 11, 12 and 13 satisfy the givencondition shown below,10 sumofdigit(10) = 9 >= 211 sumofdigit(11) = 9 >= 212 sumofdigit(12) = 9 >= 213 sumofdigit(13) = 9 >= 2 
// Example 2:

// Input: N = 10, K = 5Output: 1Explanation: Only 10 satisfies the givencondition as 10 - sumofdigit(10) = 9 >= 5

// Your Task:
// You don't need to read input or print anything. Your task is to complete the functionnumberCount()which takes an integer N and an integer K as inputs and returns the count of numbers less than or equal to N such that the difference between the number and its sum of digits is greater than K.


// Expected Time Complexity:Log (N).
// Expected Auxiliary Space:O(1).


// Constraints:
// 1 <= N, K<= 109
Codes Are:-

typedef long long ll;
class Solution
{
    public:
        ll sum(int n)
        {
            int result=0;
            while(n)
            {
                result+=n%10;
                n/=10;
            }
            
            
            return result;
        }
    
        long long int numberCount(long long int N, long long int K)
        {
            ll count=0;
            for(int i=1;i<=N;i++)
            {
                ll ans=sum(i);
                    if(i-ans>=K)
                        count++;
            }
            
            return count;
        }
};

