#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int test,i,j,k;
    string str1,str2;
    cin>>test;
    while(test>0)
        {
        std::string simchar;
        std::string ij;
        cin>>str1>>str2;
        std::sort(str1.begin(), str1.end());
        std::sort(str2.begin(), str2.end());
        int count=0;
        std::set_intersection(str1.begin(),str1.end(),str2.begin(),str2.end(),std::back_inserter(simchar));
        test=test-1;
        if(simchar.size()>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}