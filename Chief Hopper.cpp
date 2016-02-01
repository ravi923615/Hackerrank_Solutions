#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int N;
    cin>>N;
    long long int j=0,init_ot;
    long long int init=0;
    vector<long int> ar(N);
    for(int i=0;i<N;i++)
        {
        cin>>ar[i];
    }
    for(int j=N-1;j>=0;j--)
        {
        if((init+ar[j])%2==0)
            init = (init+ar[j])/2;
        else
            init = ((init+ar[j])/2)+1;
    }
    cout<<init<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
