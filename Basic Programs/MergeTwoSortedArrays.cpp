#include<bits/stdc++.h>
using namespace std;
 
void mergeArrays(int a[], int b[], int n, int m)
{
    map<int, int> mp;
     
    for(int i = 0; i < n; i++)mp[a[i]]++;
     
     
    for(int i = 0;i < m;i++)mp[b[i]]++;
 
     
 
    for(auto j: mp)
    {
         for(int i=0; i<j.second;i++)cout<<j.first<<" ";
    }
}

int main()
{
    int a[] = {1, 3, 5, 7}, b[] = {2, 4, 6, 8};
     
    int size = sizeof(a)/sizeof(int);
    int size1 = sizeof(b)/sizeof(int);
     

    mergeArrays(a, b, size, size1);
     
    return 0;
}
 
