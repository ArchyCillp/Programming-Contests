//#include<cstdio>
//#include<cstring>
//#define MAXN 1000200
//using namespace std;
//int nxt[MAXN];
//char ptn[MAXN];
//int m;
//void getnxt(){
//    nxt[0]=0;
//    int k=0;
//    for (int q=1;q<m;q++){
//        while(k>0 && ptn[q]!=ptn[k]) k=nxt[k-1];
//        if (ptn[k]==ptn[q]) ++k;
//        nxt[q]=k;
//     }
//}
//int main(){
//    while(1){
//        int slen;
//        scanf("%d",&slen);
//        scanf("%s",ptn);
//        if (slen==-1) break;
//        m=strlen(ptn);
//        getnxt();
//        int cf=nxt[m-1];
//        int ans;
//        if (slen<m) ans=0;
//        else ans=(slen-cf)/(m-cf);
//        printf("%d\n",ans);
//    }
//    return 0;
//}
