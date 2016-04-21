#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int ar_size, int *  ar) {
        int i;
   for(i=1;i<ar_size;i++)
       {
       int key= ar[i];
       int j;
       j=i-1;
       while(j>=0 && key<ar[j])
           {
           ar[j+1] = ar[j];
           j=j-1;
       }
       ar[j+1] = key;
       for(int l=0;l<ar_size;l++)
           cout<<ar[l]<<" ";
       cout<<endl;
   }

}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}