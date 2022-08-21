/* Reverse an Array */

#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[],int l,int h)
{
    if(l>=h)
        return;
    swap(arr[l],arr[h]);
    reverse_array(arr,l+1,h-1);
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse_array(arr,0,9);

    for(auto x:arr)
    cout<<x<<" ";
}