#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long unsigned int N,K;
    cin>>N>>K;
    vector<long long int> ar1(N+1),ar2;
    for(int i=0;i<N;i++)
        {
        cin>>ar1[i];
        ar2.push_back(ar1[i]);
    }
    sort(ar2.begin(),ar2.end());
    int i = 0;
    while(K>0)
        {
        int temp;
        while(ar1[i]<ar2[N-1-i] && K>0 && i<N)
            {
            temp = ar1[i];
            ar1[i] = ar2[N-1-i];
            for(int j=i+1;j<N;j++)
                {
                if(ar1[j]==ar2[N-1-i])
                    ar1[j] = temp;
            }
            K--;
            i++;
        }
        i++;
        if(i>=N || K==0)
            K=0;
    }
    for(int i=0;i<N;i++)
        cout<<ar1[i]<<" ";
    cout<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
