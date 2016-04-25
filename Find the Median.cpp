#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int Partition(vector<int> &arr,int p,int r)
    {
    int x = arr[r];
    int i = p-1;
    int temp;
    for(int j=p;j<r;j++)
        {
        if(arr[j]<=x)
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
    return i+1;
}

int RANDOMIZED_Partition(vector<int> &arr,int p,int r)
    {
    int i = p +(rand()%(int)(r-p+1));
    //cout<<i<<endl;
    int temp;
    temp = arr[r];
    arr[r] = arr[i];
    arr[i] = temp;
    return Partition(arr,p,r);   
}
void QuickSort(vector<int> &arr,int p, int r,int n)
    {
    int q;
    q=0;
    if(p<r)
        {
        q=RANDOMIZED_Partition(arr,p,r);
        if(q!=(n/2))
            {
            if(q>n/2)
                QuickSort(arr,p,q-1,n);
            else
                QuickSort(arr,q+1,r,n);   
        }
        else
            {
            //cout<<q;
            cout<<arr[q]<<endl;
        }
    }
}


int main() {
    srand(time(0));
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1,n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
