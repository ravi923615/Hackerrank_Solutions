#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
   
    string s;
    cin>>s;
    map<char,int> hash;
    int flag = 0;
    for(int i=0;i<s.size();i++){
              hash[s[i]]++;
    }
    for(map<char,int>::iterator it=hash.begin();it!=hash.end();++it){
        if(it->second%2!=0)
            flag++;
    }
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if(flag<=1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
