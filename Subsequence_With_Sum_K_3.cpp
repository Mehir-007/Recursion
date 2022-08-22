/* Subsequence with sum==k Print count 
Input:
{1,2,1} k=2
Output:
2
*/
#include<bits/stdc++.h>
using namespace std;

int Subseq_k(vector<int> &nums,int k,int idx,int sum)
{
    if(idx==nums.size())
    {

        if(sum==k) //condition satisfied
        {
            return 1;
        }
        else return 0; //condition not satisfied
    }
    sum=sum+nums[idx];
    int left=Subseq_k(nums,k,idx+1,sum);
    sum=sum-nums[idx];
    int right=Subseq_k(nums,k,idx+1,sum);
    return left+right;
}

int main(){
    vector<int> nums={1,2,1};
    
    cout<<Subseq_k(nums,2,0,0);
}
