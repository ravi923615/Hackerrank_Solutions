#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    int A,towns[60];
    int B,street[60];
    int C,housed[60];
    int D,apt[60],cnt=0;
    cin >> A >> B >> C >> D;
    for(int i=1;i<=A;i++)
        towns[i] = i;
    for(int j=1;j<=B;j++)
        towns[j] = j;
    for(int k=1;k<=C;k++)
        towns[k] = k;
    for(int l=1;l<=D;l++)
        towns[l] = l;
    for(int m=1;m<=A;m++)
        {
        for(int i=1;i<=B;i++)
            {
            if((m-i)%3==0)
                //cout<<m<<" "<<i<<" ";
            for(int g=1;g<=C;g++)
                {
                if((i+g)%5==0 && (m*g)%4==0)
                    //cout<<g<<" ";
                for(int d=1;d<=D;d++)
                {
                    int gd;
                    gd = gcd(d,m);
                    if(gd==1)
                        cnt = cnt+1;
                        //cout<<d<<" "<<endl;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
