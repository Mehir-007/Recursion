/* Check if a string is Palindrome of not */

#include<bits/stdc++.h>
using namespace std;

bool Palindrome(string s,int l,int h)
{
    if(l>=h)
        return true;
    if(s[l] != s[h])
    {
        return false;
    }
    return Palindrome(s,l+1,h-1);

}

int main()
{
   string s="MADAME";
   cout<<Palindrome(s,0,s.length()-1);
}