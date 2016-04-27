#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int digitnum(int n)
    {
    int num;
    int rem,count;
    count=0;
    num = n;
    while(num!=0)
        {
        rem = num%10;
        num = num/10;
        if(rem!=0)
         {   
        if(n%rem==0 && rem!=0)
            count=count+1;
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << digitnum(n) << endl;
    }
    return 0;
}
