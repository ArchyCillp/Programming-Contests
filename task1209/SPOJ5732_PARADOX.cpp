//#include<cstdio>
//#include<cstring>
//#include<cmath>
//#define MAXN 105
//#define INF 99999999
//using namespace std;
//
//int n,used[MAXN],rel[MAXN],asu[MAXN],ok,REM;
//
//
//void dfs(int x){
//    used[x]=REM;
//    int nxt=abs(rel[x]);
//    if (used[nxt]>REM) return;
//    if (!ok || asu[x]*rel[x]*asu[nxt]<0) {
//        ok=0;
//        return;
//    }
//    if (asu[nxt]!=0) return;
//    else {
//        asu[nxt]=asu[x]*(rel[x]/nxt);
//        dfs(nxt);
//        return;
//    }
//}
//
//int main(){
//    while(1){
//        int tmp;
//        char str[7];
//        scanf("%d",&n);
//        if (!n) break;
//        ok=1;
//        memset(used,0,sizeof(int)*(n+1));
//        memset(rel,0,sizeof(int)*(n+1));
//        memset(asu,0,sizeof(int)*(n+1));
//        for (int i=1;i<=n;i++){
//            scanf("%d%s",&tmp,str);
//            rel[i]=(str[0]=='t')?1:-1;
//            rel[i]*=tmp;
//        }
//        REM=INF;
//        for (int i=1;i<=n;i++){
//            if (asu[i]==0){
//                --REM;
//                asu[i]=1;
//                dfs(i);
//                if (!ok) break;
//            }
//        }
//        if (ok) printf("NOT PARADOX\n");
//        else printf("PARADOX\n");
//    }
//
//    return 0;
//}
