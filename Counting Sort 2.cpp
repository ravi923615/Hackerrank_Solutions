#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void CountingSort(int arr[],int r,int k)
    {
    int c[k],b[r];
    for(int i=0;i<=k;i++)
        c[i]=0;
    for(int j=1;j<=r;j++)
        c[arr[j]] = c[arr[j]]+1;
    for(int m=1;m<=k;m++)
        c[m] = c[m]+c[m-1];
    for(int l=r;l>=1;l--)
        {
        b[c[arr[l]]] = arr[l];
        c[arr[l]] = c[arr[l]]-1;
    }
   for(int d=1;d<=r;d++)
        cout<<b[d]<<" ";
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
        {
        cin>>arr[i];
    }
    CountingSort(arr,n,99);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}