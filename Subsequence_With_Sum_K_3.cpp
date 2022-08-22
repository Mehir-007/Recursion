/* Subsequence with sum==k Print count 
Input:
{1,2,1} k=2
Output:
2
*/
#include<bits/stdc++.h>
using namespace std;

int Subseq_k(vector<int> &nums,vector<int> &temp,int k,int idx,int sum)
{
    if(idx==nums.size())
    {

        if(sum==k) //condition satisfied
        {
            return 1;
        }
        else return 0; //condition not satisfied
    }
    temp.push_back(nums[idx]);
    sum=sum+nums[idx];
    int left=Subseq_k(nums,temp,k,idx+1,sum);
    sum=sum-nums[idx];
    temp.pop_back();
    int right=Subseq_k(nums,temp,k,idx+1,sum);
    return left+right;
}

int main(){
    vector<int> nums={1,2,1};
    vector<int> temp;
    cout<<Subseq_k(nums,temp,2,0,0);
}
