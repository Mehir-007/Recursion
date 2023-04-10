/*
Given a list arr of N integers, print sums of all subsets in it.
Input:
N = 2
arr[] = {2, 3}
Output:
0 2 3 5
*/
#include <bits/stdc++.h>
using namespace std;

void subsum(int idx, int sum, vector<int> &arr, vector<int> &ans, int N)
{
    if (idx == arr.size())
    {
        ans.push_back(sum);
        return;
    }
    sum = sum + arr[idx];
    subsum(idx + 1, sum, arr, ans, N);
    sum = sum - arr[idx];
    subsum(idx + 1, sum, arr, ans, N);
}
vector<int> subsetSums(vector<int> arr, int N)
{
    // Write Your Code here
    vector<int> ans;
    subsum(0, 0, arr, ans, N);
    return ans;
}

int main()
{
    vector<int> ans = subsetSums({2, 3}, 2);

    for (auto x : ans)
        cout << x << " ";
}