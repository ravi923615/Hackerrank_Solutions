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


int main(){
    string S;
    cin >> S;
    int count=0;
    string temp;
    if(S.size()<=99)
        {
            for(int i=0;i<S.size();i++)
            {
                temp = temp+S[i];
                if((temp.size())%3==0)
                    {
                    if(temp[0]!='S')
                        count++;
                    if(temp[1]!='O')
                        count++;
                    if(temp[2]!='S')
                        count++;
                    temp.erase(temp.begin(),temp.end());
                }
            }
             cout<<count<<endl;
        }
    return 0;
}
