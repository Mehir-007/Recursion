/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
*/
#include <bits/stdc++.h>
using namespace std;

void permutations(string s, vector<int> &visited, string &temp)
{
    if (temp.length() == s.length())
    {
        cout << temp << endl;
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        if (visited[i] == 0)
        {
            visited[i] = 1;
            temp = temp + s[i];
            permutations(s, visited, temp);
            temp.pop_back();
            visited[i] = 0;
        }
    }
}
int main()
{
    string s = "ABC";
    vector<int> visited(3, 0);
    string temp;
    permutations(s, visited, temp);
}