#include<cstdio>
#include<algorithm>
#include<cstring>
#define MAXN 1050
using namespace std;
int n,m;
int bird_low[2],bird_high[2];
int nobird[2][MAXN],nobirdNum;
int fnum;
struct bird{
    int c[2];
    bool operator<(const bird & y) const
    {
        if (c[0]<y.c[0]) return true;
        if (c[0]>y.c[0]) return false;
        if (c[1]<y.c[1]) return true;
        else return false;
    }
}forbidenn[MAXN];

bool check(int h,int w){
    if (fnum==0) return false;
    bird tmp;
    tmp.c[0]=h;tmp.c[1]=w;
    int l=0,r=fnum-1;
    while(l<=r){
        int mid=(l+r)/2;
        if (forbidenn[mid].c[0]==h && forbidenn[mid].c[1]==w) return true;
        if (tmp<forbidenn[mid]) r=mid-1;
        else l=mid+1;
    }
    return false;
}
void init(){
    for (int i=0;i<2;i++)
        bird_low[i]=bird_high[i]=-1;
    fnum=nobirdNum=0;
}


int main(){
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
        char str[10];
        int hh,ww;
        scanf("%d",&n);
        init();
        for(int i=0;i<n;i++){
            scanf("%d%d",&hh,&ww);
            scanf("%s",str);
            if (str[0]=='N') {
                scanf("%s",str);
                nobird[0][nobirdNum]=hh;
                nobird[1][nobirdNum++]=ww;
            }else{
                if (bird_low[0]==-1){
                    bird_low[0]=bird_high[0]=hh;
                    bird_low[1]=bird_high[1]=ww;
                }else{
                    if (hh<bird_low[0]) bird_low[0]=hh;
                    if (hh>bird_high[0]) bird_high[0]=hh;
                    if (ww<bird_low[1]) bird_low[1]=ww;
                    if (ww>bird_high[1]) bird_high[1]=ww;
                }
            }
        }
        //if no bird exist
        //if (bird_low[0]==-1){
            for (int i=0;i<nobirdNum;i++){
                forbidenn[fnum].c[0]=nobird[0][i];
                forbidenn[fnum++].c[1]=nobird[1][i];
            }
        //}
        /*else {
            nobirdbelow[0]=nobirdbelow[1]=0;
            nobirdup[0]=nobirdup[1]=9999999;
            for (int i=0;i<nobirdNum;i++){
                if (nobird[0][i]<=bird_high[0] && nobird[0][i]>=bird_low[0]){
                    if (nobird[1][i]<bird_low[1]){
                        nobirdbelow[1]=(nobird[1][i]>nobirdbelow[1])?nobird[1][i]:nobirdbelow[1];
                    }
                    if (nobird[1][i]>bird_high[1]){
                        nobirdup[1]=(nobird[1][i]<nobirdup[1])?nobird[1][i]:nobirdup[1];
                    }

                }
                else if (nobird[1][i]<=bird_high[1] && nobird[1][i]>=bird_low[1]){
                    if (nobird[0][i]<bird_low[0]){
                        nobirdbelow[0]=(nobird[0][i]>nobirdbelow[0])?nobird[0][i]:nobirdbelow[0];
                    }
                    if (nobird[0][i]>bird_high[0]){
                        nobirdup[0]=(nobird[0][i]<nobirdup[0])?nobird[0][i]:nobirdup[0];
                    }
                }
                else{
                    forbidenn[fnum].c[0]=nobird[0][i];
                    forbidenn[fnum++].c[1]=nobird[1][i];
                }
            }
        }*/
        sort(forbidenn,forbidenn+fnum);
        scanf("%d",&m);
        printf("Case #%d:\n",++cnt);
        for (int i=0;i<m;i++){
            int hh,ww;
            scanf("%d%d",&hh,&ww);
            if ( bird_low[0]==-1){
                if (check(hh,ww)) {
                    printf("NOT BIRD\n");
                }
                else {
                    printf("UNKNOWN\n");
                }
                continue;
            }
            /*if (((hh<=nobirdbelow[0] && nobirdbelow[0]!=-1)||(hh>=nobirdup[0] && nobirdup[0]!=-1)) || ((ww<=nobirdbelow[1] && nobirdbelow[1]!=-1)||(ww>=nobirdup[1] && nobirdup[1]!=-1))){
                printf("NOT BIRD\n");
                continue;
            }*/
            int ok1=0,ok2=1;
            if ((hh>=bird_low[0] && hh<=bird_high[0]) && (ww>=bird_low[1] && ww<=bird_high[1] )){
                ok1=1;
            }
            int x1=(bird_low[0]<hh)?bird_low[0]:hh;
            int x2=(bird_high[0]>hh)?bird_high[0]:hh;
            int y1=(bird_low[1]<ww)?bird_low[1]:ww;
            int y2=(bird_high[1]>ww)?bird_high[1]:ww;
            for (int i=0;i<fnum;i++){
                if (x1<=forbidenn[i].c[0] && x2>=forbidenn[i].c[0] && y1<=forbidenn[i].c[1] && y2>=forbidenn[i].c[1]){
                    ok2=0;
                    break;
                }
            }
            if (ok1 && ok2){
                printf("BIRD\n");
                continue;
            }
            if (!ok1 && !ok2){
                printf("NOT BIRD\n");
                continue;
            }
            else {
                printf("UNKNOWN\n");
            }
        }


    }
    return 0;
}
