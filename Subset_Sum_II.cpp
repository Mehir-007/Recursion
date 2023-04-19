/*
Given an integer array nums that may contain duplicates, return all possible
subsets(the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

*/

// Approach 1: Using Set Data Structure
#include <bits/stdc++.h>
using namespace std;

// void subsetsumII(int idx, vector<int> &nums, set<vector<int>> &ans, vector<int> &ds)
// {
//     if (idx == nums.size())
//     {
//         ans.insert(ds);
//         return;
//     }
//     ds.push_back(nums[idx]);
//     subsetsumII(idx + 1, nums, ans, ds);
//     ds.pop_back();
//     subsetsumII(idx + 1, nums, ans, ds);
// }
// Approach 2: Using Different element at same level of recursion
void subsetsumII(int idx, vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds)
{

    ans.push_back(ds);
    for (int i = idx; i < nums.size(); i++)
    {
        if (i != idx && nums[i] == nums[i - 1])
            continue;
        ds.push_back(nums[i]);
        subsetsumII(i + 1, nums, ans, ds);
        ds.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    // set<vector<int>> ans; For Approach 1
    vector<vector<int>> ans; // For Approach 2
    vector<int> ds;
    subsetsumII(0, nums, ans, ds);
    vector<vector<int>> v(ans.begin(), ans.end());
    return v;
}

int main()
{
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> ans = subsetsWithDup(nums);
    for (auto x : ans)
    {
        for (auto y : x)
            cout << y << " ";
        cout << endl;
    }
}
