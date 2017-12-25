#include<cstdio>
#include<cstring>
#define MAXN 1000050
using namespace std;

char strrev[MAXN],str[MAXN];
int len;
int z[MAXN];

int brutematch(int x){
    int i=0;
    while (x<len && str[x]==str[i]){
        ++i;
        ++x;
    }
    return i;
}

void zmatch(){
    int l,r;
    l=r=0;
    z[0]=len;
    for (int i=1;i<len;i++){
        if (i>r){
            int mv=brutematch(i);
            z[i]=mv;
            if (mv!=0){
                l=i;
                r=i+mv-1;
            }
        }else{
            if (z[i-l]<r-i+1){
                z[i]=z[i-l];
            }else{
                int ini=l-i+1;
                int outi=r+1;
                while (outi<len && str[ini]==str[outi]){
                    ++ini;
                    ++outi;
                }
                l=i;
                r=outi-1;
                z[i]=r-l+1;
            }
        }
    }
}
void nextInt(int &x)
{
    char c;
    do c=getchar(); while (c<'0'||c>'9');
    x=c-'0';
    while ('0'<=(c=getchar())&&c<='9') x=x*10+c-'0';
}
void Out(int a)
{
    if(a>9)
    Out(a/10);
    putchar(a%10+'0');

}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",strrev);
        len=strlen(strrev);
        for (int i=0;i<len;i++){
            str[i]=strrev[len-i-1];
        }
        zmatch();
        int n;
        nextInt(n);
        for (int i=0;i<n;i++){
            int xx;
            nextInt(xx);
            Out(z[len-xx]);
            putchar('\n');
        }
    }
    return 0;
}
