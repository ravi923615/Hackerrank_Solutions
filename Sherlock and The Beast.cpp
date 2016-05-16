#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        string output;
        cin >> n;
        if(n<=2){
            output = "-1";
        }else{
            int y=n;
            int numberof3 = 0;
            int numberof5 = 0;
            while(n%3!=0){
                numberof3 += 5;
                n = n-5;
                if(n<0){
                    output = "-1";
                    numberof3 = 0;
                    break;
                }
            }
            if(n>0)
            numberof5 += n;
            for(int j=0;j<numberof5;j++)
                output += "5";
            for(int j=0;j<numberof3;j++)
                output += "3";
        }
        cout<<output<<endl;
    }
    return 0;
}
