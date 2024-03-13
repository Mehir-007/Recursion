#include <bits/stdc++.h>
using namespace std;

int part(vector<int> &nums, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = low;
    while (i < j)
    {
        while (i <= high - 1 && nums[i] <= nums[pivot])
        {
            i++;
        }
        while (j >= low + 1 && nums[j] > nums[pivot])
        {
            j--;
        }
        if (i < j)
            swap(nums[i], nums[j]);
    }
    swap(nums[low], nums[j]);
    return j;
}

void Quick_Sort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int pivot = part(nums, low, high);
        Quick_Sort(nums, low, pivot - 1);
        Quick_Sort(nums, pivot + 1, high);
    }
}

int main()
{
    vector<int> nums = {8, 1, 5, 7, 9, 4, 11, 5, 6, 3, 2};
    Quick_Sort(nums, 0, nums.size() - 1);
    for (auto x : nums)
    {
        cout << x << " ";
    }
}