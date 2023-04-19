void subsetsumII(int idx, vector<int> &nums, set<vector<int>> &ans, vector<int> &ds)
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