#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N, K, unfairness = INT_MAX;
    cin >> N >> K;
    int list[N], sor[K];
    for (int i=0; i<N; i++)
        cin >> list[i];
    sort(list,list+N);
    int i=0,j=K, max=0;
    while(i<=(N-K))
        {
        int l=0, cur_d,max_d;
        cur_d = list[i+j-1] - list[i];
        if(unfairness>cur_d)
           unfairness = cur_d;
        l=0;
       
        i++;
    }
     
    cout << unfairness << "\n";
    return 0;
}