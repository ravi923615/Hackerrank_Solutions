#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long unsigned int n;
    cin>>n;
    long unsigned int arr[n],m[n],s=0,w,count=0,l=0;
    for(long unsigned int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    w=arr[s]+4;
    for(long unsigned int j=0;j<n;j++)
        {
        if(arr[j]<=w)
            {
            count = count+1;
            
        }
        else
            {
            w=arr[j]+4;
            m[l++] = w;
            count=0;
        }
    }
    cout<<l+1<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
