//#include<cstdio>
//#include<cstring>
//#define MAXN 100050
//#define LL long long
//#define HASH 1000007
//#define INFT 99999999
//using namespace std;
//int first[HASH],nxt[HASH];
//struct node{
//    int a[6];
//}mNode[MAXN];
//bool nodeCmp(node xx,node yy){
//    int knxt[12];
//    memset(knxt,0,sizeof(knxt));
//    int q,k=0;
//    for (q=1;q<6;q++){
//        while (k>0 && yy.a[q]!=yy.a[k]) k=knxt[k-1];
//        if (yy.a[q]==yy.a[k]) ++k;
//        knxt[q]=k;
//    }
//    q=0;
//    for (int i=0;i<12;i++){
//        int ii=i%6;
//        while(q>0 && yy.a[q]!=xx.a[ii]) q=knxt[q-1];
//        if (yy.a[q]==xx.a[ii]) ++q;
//        if (q==6) return true;
//    }
//
//    memset(knxt,0,sizeof(knxt));
//    node ry;
//    for (int i=0;i<6;i++){
//        ry.a[5-i]=yy.a[i];
//    }
//    k=0;
//    for (q=1;q<6;q++){
//        while (k>0 && ry.a[q]!=ry.a[k]) k=knxt[k-1];
//        if (ry.a[q]==ry.a[k]) ++k;
//        knxt[q]=k;
//    }
//    q=0;
//    for (int i=0;i<12;i++){
//        int ii=i%6;
//        while(q>0 && ry.a[q]!=xx.a[ii]) q=knxt[q-1];
//        if (ry.a[q]==xx.a[ii]) ++q;
//        if (q==6) return true;
//    }
//    return false;
//}
//int inbd(int xx){
//    if (xx==6) return 0;
//    if (xx==-1) return 5;
//    return xx;
//}
//int tohash(node xx){
//    int ans=0;
//    for (int i=0;i<6;i++) ans=(ans+xx.a[i])%HASH;
//    return ans;
//}
//bool insertHash(int ndpz){
//    int hsh=tohash(mNode[ndpz]);
//    if (first[hsh]==-1){
//        first[hsh]=ndpz;
//        return true;
//    }
//    else {
//        int pz=first[hsh];
//        do{
//            if (nodeCmp(mNode[pz],mNode[ndpz])){
//                return false;
//            }
//            if (nxt[pz]==-1){
//                nxt[pz]=ndpz;
//                return true;
//            }else {
//                pz=nxt[pz];
//            }
//        }while(1);
//    }
//}
//void nextInt(int &x)
//{
//    char c;
//    do c=getchar(); while (c<'0'||c>'9');
//    x=c-'0';
//    while ('0'<=(c=getchar())&&c<='9') x=x*10+c-'0';
//}
//
//int main(){
//    int t;
//    bool ok=1;
//    memset(first,-1,sizeof(first));
//    memset(nxt,-1,sizeof(nxt));
//    scanf("%d",&t);
//    for (int i=0;i<t;i++){
//        if (ok){
//            for (int j=0;j<6;j++){
//                nextInt(mNode[i].a[j]);
//            }
//            if (!insertHash(i)){
//                ok=0;
//            }
//        }else {
//            for (int j=0;j<6;j++){
//                nextInt(mNode[i].a[j]);
//            }
//        }
//    }
//    if (ok){
//        printf("No two snowflakes are alike.\n");
//    }else{
//        printf("Twin snowflakes found.\n");
//    }
//    return 0;
//}
