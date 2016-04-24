#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t>0)
        {
        int n;
        cin>>n;
        int arr[100000];
        int sum=0;
        int ls,rs,flag=0;
        for(int i=0;i<n;i++)
            {
            cin>>arr[i];
            sum = sum+arr[i];
        }
        rs=sum;
        for(int j=0;j<n;j++)
            {
            ls = sum-rs;
            rs = rs-arr[j];
            if(ls==rs)
                flag=1;
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        t=t-1;
        }
    return 0;
    }
