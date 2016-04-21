#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n1,n2;
    cin>>n1;
    map<int,int> hash1;
    map<int,int> hash2;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        if(hash1.find(x)==hash1.end())
            hash1[x] = 1;
        else
            hash1[x]++;
    }
    cin>>n2;
    for(int j=0;j<n2;j++){
        int x;
        cin>>x;
        if(hash1.find(x)==hash1.end())
            hash1[x] = 1;
        else
            hash1[x]--;
    }
    for (std::map<int,int>::iterator it=hash1.begin(); it!=hash1.end(); ++it){
        if(it->second>=1 || it->second<0)
            cout<<it->first<<" ";
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}