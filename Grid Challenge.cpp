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
        int n;
        vector<vector<char>> arr;
        cin>>n;
        if(n>=1 && n<=100)
         { 
        for(int i=0;i<n;i++)
            {
            vector<char> ar;
            arr.push_back(ar);
            for(int j=0;j<n;j++)
                {
                  char ch;
                cin>>ch;
                arr[i].push_back(ch);
            }
            sort(arr[i].begin(),arr[i].end());
        }
        int flag=0;
        for(int i=0;i<n;i++)
            {
            for(int j=0;j<n-1;j++)
                {
                if(arr[i][j]>arr[i][j+1] || arr[j][i]>arr[j+1][i])
                    {
                    flag=1;
                    break;
                    }
                   }
            
    }
        if(flag==1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
                   }
        t=t-1;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}