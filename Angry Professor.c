#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int test, N,K,ontime,outime,stud,i;
    scanf("%d",&test);
    while(test>0)
        {
        scanf("%d %d",&N,&K);
            ontime=outime=0;
            for(i=0;i<N;i++)
            {
                scanf("%d",&stud);
            if(stud<0 || stud==0)
                ontime = ontime+1;
            if(stud>0)
                outime = outime+1;
        }
        if(ontime>=K)
            printf("NO\n");
        else
            printf("YES\n");
        test = test-1;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
