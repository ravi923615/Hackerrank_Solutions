#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

int pairs(vector < int > a,int k) {
   int ans=0,d=0;
   int i=0,j=a.size()-1;
   vector<int> b;
    vector<bool> v(a.size()+1,true);
   sort(a.begin(),a.end());
    for(int j=0;j<a.size();j++)
        b.push_back(a[j]);
   sort(b.begin(),b.end());
    while(i<a.size())
        {
        while(a[i]+k!=b[j] && j>0 && b[j]>k)j--;
        if(a[i]+k==b[j])
            ans++;
        j = a.size()-1;
        i++;
    }
    return ans;
}

/* Tail starts here */
int main() {
    int res;
    
    int _a_size,_k;
    cin >> _a_size>>_k;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = pairs(_a,_k);
    cout << res;
    
    return 0;
}