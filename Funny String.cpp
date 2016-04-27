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
        string s;
        cin>>s;
        string r=s;
        reverse(r.begin(),r.end());
        int l=s.size(),flag=0;
        for(int i=0;i<l-1;i++)
            {
            if(abs(s[i]-s[i+1])!=abs(r[i]-r[i+1]) || abs(s[i+1]-s[i])!=abs(r[i+1]-r[i]))
                flag=1;
        }
        if(flag==0)
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;
        t--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
