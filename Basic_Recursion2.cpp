#include<bits/stdc++.h>
using namespace std;

//sum of n integers parameterized
void sumPara(int n,int sum)
{
    if(n==0)
    {
        cout<<sum;
        return;
    }
    sum=sum+n;
    sumPara(n-1,sum);
}

// sum of n integers funtional way

int sumFun(int n)
{
    if(n==0)
        return 0;
    return n+sumFun(n-1);
    
}

// factorial of N funtional Recursion

int fact(int n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}

int main()
{
    sumPara(10,0);
    cout<<endl;

    cout<<sumFun(10)<<endl;
    
    cout<<fact(5)<<endl;
}