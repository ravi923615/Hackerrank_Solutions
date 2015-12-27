#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t>0)
        {
        long long int N,K;
        cin>>N>>K;
        long long int a[1001],b[1001];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<N;i++)
            cin>>b[i];
        sort(a,a+N);
        sort(b,b+N);
        long long int m=0, j=N-1,count=0,max=0;
        while(m<N && j>=0)
            {
            if(a[m++]+b[j--]>=K)
                count = count+1;
        }
        if(count==N)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        t--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
