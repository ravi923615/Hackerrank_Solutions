#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j,a[1000],key,count;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
    }
    count=0;
    for(i=1;i<n;i++)
        {
        key = a[i];
        j = i-1;
        while(j>=0 && key<a[j])
            {
            a[j+1] = a[j];
                j = j-1;
                count = count+1;
        }
        a[j+1]=key;
    }
    cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}