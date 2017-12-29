#include<cstdio>
#include<cstring>
#include<cmath>
#define MAXN 10
using namespace std;

int gem[MAXN][MAXN];
int trygem[MAXN][MAXN];
int n,m;
void mapcopy(int x,int y,int xx,int yy);
bool mapscan();
void drop();
bool mapempty();


int main()
{
    char tmp[MAXN];
    n=m=8;
    int over=0;
    while(1){
        for (int i=0;i<n;i++){
            scanf("%s",tmp);
            if (tmp[0]=='0') {
                over=1;
                break;
            }
            for (int j=0;j<m;j++)
                if (tmp[j]=='.') gem[i][j]=0;
                else gem[i][j]=tmp[j]-'0';
        }
        if (over) break;
        int ok=0;
        for (int i=0;i<n;i++)
        for (int j=0;j<m;j++){
            if (j+1<m && (gem[i][j]!=0 || gem[i][j+1]!=0)){
                mapcopy(i,j,i,j+1);
                while (mapscan()) drop();
                if (mapempty()) {
                    ok=1;
                    break;
                }
            }
            if (i+1<n && (gem[i][j]!=0 || gem[i+1][j]!=0)){
                mapcopy(i,j,i+1,j);
                while (mapscan()) drop();
                if (mapempty()) {
                    ok=1;
                    break;
                }
            }
        }
        if (ok) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
void mapcopy(int x,int y,int xx,int yy){
    for (int i=0;i<n;i++)
    for (int j=0;j<m;j++){
        trygem[i][j]=gem[i][j];
    }
    int tmp=trygem[x][y];
    trygem[x][y]=trygem[xx][yy];
    trygem[xx][yy]=tmp;
}
bool mapscan(){
    int cscn,csccl;
    for (int i=0;i<n;i++)
    {
        cscn=0,csccl=0;
        for (int j=0;j<m;j++)
        {
            if (abs(trygem[i][j])!=csccl) {
                if (cscn>=3)
                    for (int k=1;k<=cscn;k++)
                      trygem[i][j-k]=0-abs(trygem[i][j-k]);
                csccl=abs(trygem[i][j]);
                cscn=1;
            }
            else {
                ++cscn;
            }
        }
        if (cscn>=3){
            for (int k=1;k<=cscn;k++)
                trygem[i][m-k]=0-abs(trygem[i][m-k]);
        }
    }

    for (int j=0;j<m;j++)
    {
        cscn=0,csccl=0;
        for (int i=0;i<n;i++)
        {
            if (abs(trygem[i][j])!=csccl) {
                if (cscn>=3)
                    for (int k=1;k<=cscn;k++)
                      trygem[i-k][j]=0-abs(trygem[i-k][j]);
                csccl=abs(trygem[i][j]);
                cscn=1;
            }
            else {
                ++cscn;
            }
        }
        if (cscn>=3){
            for (int k=1;k<=cscn;k++)
                trygem[n-k][j]=0-abs(trygem[n-k][j]);
        }
    }
    bool ok=0;
    for (int j=0;j<m;j++)
    for (int i=0;i<n;i++)
        {
            if (trygem[i][j]<0){
                 trygem[i][j]=0;
                 ok=1;
            }
        }
    return ok;
}
void drop(){
    for (int j=0;j<m;j++)
    {
        int lp=n-1,hp=n-1;
        while (hp>=0){
            if (trygem[hp][j]!=0) {
                trygem[lp--][j]=trygem[hp--][j];
            }
            else {
                --hp;
            }
        }
        while(lp>=0){
            trygem[lp--][j]=0;
        }
    }
}
bool mapempty(){
     for (int j=0;j<m;j++)
        for (int i=0;i<n;i++)
            if (trygem[i][j]!=0) return false;

    return true;
}
