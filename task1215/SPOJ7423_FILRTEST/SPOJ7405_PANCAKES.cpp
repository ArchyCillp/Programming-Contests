#include<cstdio>
#define MAXN 150
#define INFT 99999999
using namespace std;
int n,r;
int igrt[MAXN];
void nextInt(int &x)
{
    char c;
    do c=getchar(); while (c<'0'||c>'9');
    x=c-'0';
    while ('0'<=(c=getchar())&&c<='9') x=x*10+c-'0';
}
int main(){
    while(1){
        nextInt(n);
        nextInt(r);
        if (n==0 && r==0) break;
        for (int i=0;i<n;i++){
            nextInt(igrt[i]);
        }
        int ansrep=1,ansnum=0;
        for (int i=0;i<r;i++){
            int npkk=INFT;
            for (int j=0;j<n;j++){
                int xx;
                nextInt(xx);
                if (xx==0) continue;
                npkk = ((igrt[j]*10/xx)<npkk)?(igrt[j]*10/xx):npkk;
            }
            if (ansnum<npkk) {
                ansnum=npkk;
                ansrep=i+1;
            }
        }
        printf("%d %d\n",ansrep,ansnum);

    }
    return 0;
}
