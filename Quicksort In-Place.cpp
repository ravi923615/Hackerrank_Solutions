#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Partition(vector<int> &arr,int p,int r)
    {
    int x,i,temp;
    x = arr[r];
    i = p-1;
    for(int j=p;j<r;j++)
        {
        if(arr[j]<x)
            {
            i = i+1;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = arr[r];
    arr[r] = temp;
    for(int l=0;l<arr.size();l++)
        cout<<arr[l]<<" ";
    cout<<endl;
    return (i+1);
}

void QuickSort(vector<int> &arr,int p,int r)
    {
    int q;
    if(p<r)
        {
        q = Partition(arr,p,r);
        QuickSort(arr,p,q-1);
        QuickSort(arr,q+1,r);
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
