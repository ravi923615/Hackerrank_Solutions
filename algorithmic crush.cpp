#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long M,N,Max=0,x=0;
    cin>>N>>M;
    vector<long long int> ar(N);
    for(long long int j=0;j<N;j++)
        ar[j] = 0;
    for(int i=0;i<M;i++)
        {
        long long int a,b,k;
        cin>>a>>b>>k;
        ar[a-1] = ar[a-1] + k;
        if(b<N)
            ar[b] -=k;
    }
    for(int i=0;i<N;i++)
        {
        x = x+ar[i];
        if(Max<x)
            Max = x;
    }
    cout<<Max<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}