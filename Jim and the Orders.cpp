#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int ti,di;
    vector<pair<int,int>> del;
    for(int i=0;i<n;i++)
        {
        cin>>ti>>di;
        del.push_back(make_pair(ti+di,i+1));
    }
    sort(del.begin(),del.end());
    for(int i=0;i<n;i++)
        cout<<del[i].second<<" ";
    cout<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}