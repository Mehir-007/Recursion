/* Subsequence with sum==k 
Input:
{1,2,1} k=2
Output:
1 1
*/
#include<bits/stdc++.h>
using namespace std;

void Subseq_k(vector<int> &nums,vector<int> &temp,int k,int idx,int sum)
{
    if(idx==nums.size())
    {

        if(sum==k)
        {
            for(auto it:temp)
            cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    temp.push_back(nums[idx]);
    sum=sum+nums[idx];
    Subseq_k(nums,temp,k,idx+1,sum);
    sum=sum-nums[idx];
    temp.pop_back();
    Subseq_k(nums,temp,k,idx+1,sum);
}

int main(){
    vector<int> nums={1,2,1};
    vector<int> temp;
    Subseq_k(nums,temp,2,0,0);
}
