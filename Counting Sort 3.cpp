#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void CountingSort(int arr[],int n,int k)
    {
    int c[k],b[n];
    for(int i=0;i<=k;i++)
        c[i] = 0;
    for(int j=1;j<=n;j++)
        c[arr[j]] = c[arr[j]]+1;
    for(int l=1;l<=k;l++)
        c[l] = c[l]+c[l-1];
    for(int p=0;p<=k;p++)
        cout<<c[p]<<" ";

}


int main() {
    int n;
    cin>>n;
    int arr[1000000];
    string s[1000000];
    for(int i=1;i<=n;i++)
        {
        cin>>arr[i]>>s[i];
    }
    CountingSort(arr,n,99);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}