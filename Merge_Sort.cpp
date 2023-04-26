/*
Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays,
sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.
*/
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> temp;    // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1; // starting index of right half of arr
    // storing elements in the temporary array in a sorted manner//
    while (left <= mid && right <= high)
    {
        if (v[left] <= v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else
        {
            temp.push_back(v[right]);
            right++;
        }
    }
    // if elements on the left half are still left //
    while (left <= mid)
    {
        temp.push_back(v[left]);
        left++;
    }
    //  if elements on the right half are still left //
    while (right <= high)
    {
        temp.push_back(v[right]);
        right++;
    }
    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++)
    {
        v[i] = temp[i - low];
    }
}
void mergesort(vector<int> &v, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(v, low, mid);      // left half
    mergesort(v, mid + 1, high); // right half
    merge(v, low, mid, high);    // merging sorted halves
}
int main()
{
    vector<int> v = {1, 8, 10, 7, 5, 3, 6, 2, 4, 9};
    int n = 10;
    mergesort(v, 0, n - 1);
    for (auto x : v)
        cout << x << " ";
}
