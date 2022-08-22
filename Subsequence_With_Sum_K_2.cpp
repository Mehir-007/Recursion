/* Subsequence with sum==k Print only 1 such subsequence if multiple present
Input:
{1,2,1} k=2
Output:
1 1
*/
#include<bits/stdc++.h>
using namespace std;

bool Subseq_k(vector<int> &nums,vector<int> &temp,int k,int idx,int sum)
{
    if(idx==nums.size())
    {

        if(sum==k) //condition satisfied
        {
            for(auto it:temp)
            cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else return false; //condition not satisfied
    }
    temp.push_back(nums[idx]);
    sum=sum+nums[idx];
    if(Subseq_k(nums,temp,k,idx+1,sum)==true) return true;
    sum=sum-nums[idx];
    temp.pop_back();
    if(Subseq_k(nums,temp,k,idx+1,sum)==true) return true;
    return false;
}

int main(){
    vector<int> nums={1,2,1};
    vector<int> temp;
    Subseq_k(nums,temp,2,0,0);
}
