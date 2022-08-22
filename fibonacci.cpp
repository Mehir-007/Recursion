/* Multiple Recursion Calls 
The First 20 Fibonacci numbers are: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181
*/

#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n<=1) return n;

    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;cin>>n;
    cout<<"Fibo- "<<fibo(n)<<endl;
}