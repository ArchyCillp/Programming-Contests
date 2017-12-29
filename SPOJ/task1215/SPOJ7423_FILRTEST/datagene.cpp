#include<cstdio>
#include<cstdlib>
#include <algorithm>
#include<ctime>
#define MAXN 2
using namespace std;
int bigrand(int max_range = 1)
{
	if (max_range == 1) return rand() << 16 | rand();
	return (rand() << 16 | rand()) % max_range;
}
int main(){
    freopen("dataK.txt","w",stdout);
    int t=10000;
    printf("%d\n",t);
    srand(time(0));
    for (int i=0;i<t;i++){
        int k=bigrand(MAXN);
        int n=bigrand(MAXN);
        int x1=bigrand(2*MAXN)-MAXN;
        int y1=bigrand(2*MAXN)-MAXN;
        int x2=bigrand(2*MAXN)-MAXN;
        int y2=bigrand(2*MAXN)-MAXN;
        if (k==0 && n==0) k++;
        printf("%d %d %d %d %d %d\n",k,n,x1,y1,x2,y2);
    }
    return 0;
}
