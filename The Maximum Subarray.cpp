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
        long long int N;
        cin>>N;
        vector<int> ar(N);
        for(int i=0;i<N;i++)
            cin>>ar[i];
        int cursum = ar[0], totalmax = ar[0], posum = 0,tosum=-9999999,cnt=0;
        for(int j=1;j<N;j++)
            {
            cursum = max(ar[j],cursum+ar[j]);
            totalmax = max(totalmax,cursum);
        }
        for(int l=0;l<N;l++)
            {
            if(ar[l]>=0)
                posum +=ar[l];
            if(ar[l]<0)
                {
                tosum = max(tosum,ar[l]);
                cnt++;
            }
        }
        if(N==1)
            cout<<ar[0]<<" "<<ar[0]<<endl;
        else if(posum>=0 && cnt!=N)
            cout<<totalmax<<" "<<posum<<endl;
        else
            cout<<totalmax<<" "<<tosum<<endl;
        t--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
