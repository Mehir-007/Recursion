/*Given an array of distinct integers candidates and a target integer target,
return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times.
Two combinations are unique if the frequency of at least one of the chosen numbers is different.
Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
*/
#include <bits/stdc++.h>
using namespace std;

void combination(int idx, vector<int> &candidates, vector<vector<int>> &ans, vector<int> &ds, int target)
{
    if (idx == candidates.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if (candidates[idx] <= target)
    {
        ds.push_back(candidates[idx]);
        combination(idx, candidates, ans, ds, target - candidates[idx]);
        ds.pop_back();
    }
    combination(idx + 1, candidates, ans, ds, target);
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    combination(0, candidates, ans, ds, target);
    return ans;
}

int main()
{
    vector<int> candidates = {2, 3, 5};
    int target = 8;
    vector<vector<int>> ans = combinationSum(candidates, target);

    for (auto x : ans)
    {
        for (auto y : x)
            cout << y << " ";
        cout << endl;
    }
}