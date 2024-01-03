/*
The Problem Statement is in the link
https://codeforces.com/problemset/problem/1915/C
*/
#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
bool isperfectsquare(ll sum)
{
  ll start = 1;
  ll end = 1e9;
  while(start<=end)
  {
    ll mid = (start + (end-1)) / 2;
    if(mid * mid == sum)
    {
      return true;
    }
    else if(mid * mid >sum)
    {
      end = mid -1;
    }
    else if(mid * mid < sum)
    {
      start = mid +1;
    }
  }
  return false;
}

int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n;
    cin>>n;
    int x;
    ll sum = 0;
    for(int i = 0;i<n;i++)
    {
      cin>>x;
      sum = sum +x;
    }
    
    if(isperfectsquare(sum))
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
    
  }
  return 0;
}
