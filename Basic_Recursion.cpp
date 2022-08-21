#include<bits/stdc++.h>
using namespace std;

//Print name 5 times

void printName(int n)
{
    if(n==0) return;
    cout<<"Mehir"<<" ";
    printName(n-1);
}

//print linearly from 1 to N

void printLinearly1ToN(int x,int n)
{
    if(x>n) return;
    cout<<x<<" ";
    printLinearly1ToN(x+1,n);
}

//print from N to 1

void printLinearlyNTo1(int n)
{
    if(n==0) return;
    cout<<n<<" ";
    printLinearlyNTo1(n-1);
}

//print linearly from 1 to N but using Backtracking

void print1ToN(int n)
{
    if(n==0) return;
    print1ToN(n-1);
    cout<<n<<" ";
}

//print N to 1 using backtracking

void printNTo1(int x,int n)
{
    if(x>n) return;
    printNTo1(x+1,n);
    cout<<x<<" ";
}

int main()
{
    printName(5);
    cout<<endl;

    printLinearly1ToN(1,5);
    cout<<endl;

    printLinearlyNTo1(5);
    cout<<endl;

    print1ToN(5);
    cout<<endl;

    printNTo1(1,5);
}