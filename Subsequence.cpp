/* Print all Subsequence - Subsequence is a contigous sequence which follows the order 
{3,1,2}={},{3},{1},{2},{3,1},{1,2},{3,2},{3,1,2}
*/

#include<bits/stdc++.h>
using namespace std;

void printSequence(vector<int>& nums,vector<int>& temp,int idx)
{
    if(idx==nums.size())
    {
        
        for(auto x:temp)
        cout<<x<<" ";
        cout<<endl;
        return;
    }
    temp.push_back(nums[idx]);
    printSequence(nums,temp,idx+1);
    temp.pop_back();
    printSequence(nums,temp,idx+1);
}

int main()
{
    vector<int> nums={3,1,2};
    vector<int> temp;
    printSequence(nums,temp,0);

}