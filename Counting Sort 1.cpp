#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void CountingSort(vector<int> &arr,int n,int k)
    {
    vector<int> c(k);
    for(int i=0;i<=k;i++)
        c[i] = 0;
    for(int j = 0;j<n;j++)
       c[arr[j]] = c[arr[j]] + 1;
    for(int l=0;l<=k;l++)
      cout<<c[l]<<" ";
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    CountingSort(arr,n,99);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}