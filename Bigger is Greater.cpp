#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    bool ra;
    long long int t;
    cin>>t;
    while(t>0)
        {
        string s,sa;
        cin>>s;
        sa = s;
        ra = next_permutation(begin(s),end(s));
        if(sa==s || s.size()>100||ra==0)
            cout<<"no answer"<<endl;
        else
            cout<<s<<endl;
        t=t-1;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}