#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i = 0; i <n; i++)
            cin>>a[i];
        int flag=1;
        sort(a,a+n);int l,r;
        for(int i=0;i<n-2;i++)
        {
            l=i+1;
            r=n-1;
            while(l<r)
            {
                if(a[i]+a[l]+a[r]==k)
                {
                    // cout<<a[i]<<" "<<a[l]<<" "<<a[r]<<endl;
                    flag=0;break;
                }
                else if(a[i]+a[l]+a[r]>k)
                    r--;
                else
                    l++;
            }
            if(flag==0)
                break;
        }
        if(flag==0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
