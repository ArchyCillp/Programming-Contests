//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<vector>
//#define MAXN 100
//using namespace std;
//struct cls{
//    int typ;
//    vector<int> x;
//    vector<int> y;
//}clss[MAXN];
//int n;
//int sgj[5][5];
//int used[MAXN];
//int typused[MAXN];
//int bstn;
//int number=0;
//int bst[MAXN];
//int zaoke=0;
//void init(){
//    for (int i=0;i<100;i++) {
//        clss[i].x.clear();
//        clss[i].y.clear();
//    }
//    memset(sgj,0,sizeof(sgj));
//    memset(typused,0,sizeof(typused));
//    bstn=-1;
//}
//void dfs(int pos,int slctn){
//    if (pos==n+1){
//        if (slctn==8){
//            bstn=slctn;
//            for (int i=1;i<=n;i++){
//                bst[i]=used[i];
//            }
//            printf("NO.%d  zaoke:%d\n",++number,zaoke);
//            for (int i=1;i<=n;i++){
//                if (used[i])
//                {
//                    printf("choose no.%d\n",i);
//                }
//
//            }
//            printf("\n\n\n\n");
//        }
//        return;
//    }
//    int sz=clss[pos].x.size();
//    int ok=1;
//    for (int i=0;i<sz;i++){
//        if (sgj[clss[pos].x[i]][clss[pos].y[i]]!=0 || typused[clss[pos].typ]!=0){
//            ok=0;
//            break;
//        }
//    }
//
//    dfs(pos+1,slctn);
//
//    if (ok){
//        for (int i=0;i<sz;i++){
//            sgj[clss[pos].x[i]][clss[pos].y[i]]=1;
//            if (clss[pos].y[i]==0 || clss[pos].y[i]==1 || clss[pos].y[i]==4 ) zaoke++;
//        }
//        used[pos]=1;
//        typused[clss[pos].typ]=1;
//
//        dfs(pos+1,slctn+1);
//
//        typused[clss[pos].typ]=0;
//        used[pos]=0;
//        for (int i=0;i<sz;i++){
//            sgj[clss[pos].x[i]][clss[pos].y[i]]=0;
//            if (clss[pos].y[i]==0 || clss[pos].y[i]==1 || clss[pos].y[i]==4) zaoke--;
//        }
//    }
//    return;
//}
//
//int main(){
//    scanf("%d",&n);
//    init();
//    for (int i=1;i<=n;i++){
//        int m,typp;
//        scanf("%d%d",&m,&typp);
//        clss[i].typ=typp;
//        for (int j=0;j<m;j++){
//            int xx,yy;
//            scanf("%d%d",&xx,&yy);
//            clss[i].x.push_back(xx);
//            clss[i].y.push_back(yy);
//        }
//    }
//    dfs(1,0);
//    /*for (int i=1;i<=n;i++){
//        if (bst[i])
//        {
//            printf("choose no.%d\n",i);
//        }
//    }*/
//    return 0;
//}
