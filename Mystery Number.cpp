#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void countingsort(vector<int> &arr,int k,int d)
    {
    vector<int> m(100);
    for(int i=0;i<=k;i++)
        m[i] = 0;
    for(int j=1;j<=d;j++)
        m[arr[j]] = m[arr[j]] + 1;
    for(int g=0;g<=k;g++)
        {
        if(m[g]%2!=0)
            cout<<g;
    }
}

int main() {
    int n,t,d;
    cin>>n;
    vector<int> a(101),b(101),arr(203);
    for(int i=1;i<=n;i++)
        {
        cin>>a[i];
        arr[i] = a[i];
        t=i;
    }
    for(int j=1;j<=(n+1);j++)
        {
        cin>>b[j];
        arr[t+j] = b[j];
    }
    d = (2*n)+1;
    countingsort(arr,100,d);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
