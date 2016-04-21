#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void CountingSort(vector<int> &arr,vector<string> &s,int n,int k)
    {
    int c[100];
    vector<string>  b(1000001);
    for(int i=0;i<=k;i++)
        c[i] = 0;
    for(int j=1;j<=n;j++)
        c[arr[j]] = c[arr[j]]+1;
    for(int l=1;l<=k;l++)
        c[l] = c[l]+c[l-1];
    for(int m=n;m>=1;m--)
        {
        b[c[arr[m]]] = s[m];
        c[arr[m]] = c[arr[m]]-1;
    }
    for(int f=1;f<=n;f++)
        cout<<b[f]<<" ";
}

int main() {
    int n;
    vector<int> arr(1000001);
    cin>>n;
    vector<string> s(1000001);
    for(int i=1;i<=n;i++)
        {
        cin>>arr[i]>>s[i];
        if(i<=n/2)
            s[i] = '-';
    }
    CountingSort(arr,s,n,99);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}