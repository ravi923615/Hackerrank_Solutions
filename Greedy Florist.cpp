#include<iostream>
#include<algorithm>
using namespace std;
int main(void){

 

//Helpers for input and output

   int N, K,bg=0;
   cin >> N >> K;
    int C[N];
    int result=0,b=K;
   for(int i = 0; i < N; i++){
      cin >> C[i];
   }
    sort(C,C+N);
    for(int j=N-1;j>=0;j--)
        {
        if(b>=1)
            {
            result = result + (bg+1)*C[j];
            b--;
            if(b<1 && j>=0)
                {
                bg = bg+1;
                b = K;
            }
                
        }
    }
   
   
   cout << result << "\n";
   
   return 0;
}
