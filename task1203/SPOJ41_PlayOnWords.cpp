//#include<cstdio>
//#include<cmath>
//#include<cstring>
//using namespace std;
//
//int f[30];
//char tmp[1200];
//int ind[30],outd[30];
//int getfa(int x){
//    return (x==f[x])?(x):(f[x]=getfa(f[x]));
//}
//
//int main(){
//    //freopen("data41.txt","r",stdin);
//    //freopen("wrong41.txt","w",stdout);
//    int t,cnt=0;
//    scanf("%d",&t);
//    while(t--){
//        cnt++;
//
//        memset(f,0,sizeof(f));
//        memset(ind,0,sizeof(ind));
//        memset(outd,0,sizeof(outd));
//        for (int i=0;i<='z'-'a';i++){
//            f[i]=-1;
//        }
//        int n,ok=1;
//        scanf("%d",&n);
//         /*if (cnt==152) {
//            fprintf(stderr,"%d\n",n);
//        }*/
//        for (int i=0;i<n;i++){
//            scanf("%s",tmp);
//            /*if (cnt==152) {
//                fprintf(stderr,"%s\n",tmp);
//            }*/
//            if (f[(tmp[0]-'a')]==-1) f[tmp[0]-'a']=tmp[0]-'a';
//            if (f[(tmp[strlen(tmp)-1]-'a')]==-1) f[tmp[strlen(tmp)-1]-'a']=tmp[strlen(tmp)-1]-'a';
//            ++outd[tmp[0]-'a'];
//            ++ind[tmp[strlen(tmp)-1]-'a'];
//            f[getfa(tmp[0]-'a')]=getfa(tmp[strlen(tmp)-1]-'a');
//        }
//
//        int conf=-1;
//        for (int i=0;i<='z'-'a';i++){
//            if (conf==-1 && f[i]>-1) conf=getfa(f[i]);
//            else if (conf!=-1 && f[i]>-1 && (getfa(f[i])!=conf)) {
//                ok=0;
//            }
//        }
//        if (!ok) {
//            printf("The door cannot be opened.\n");
//            continue;
//        }
//        int outBig1=0,inBig1=0;
//        for (int i=0;i<='z'-'a';i++){
//            if (abs(outd[i]-ind[i])>1) {
//                ok=0;
//                break;
//            }
//            if (outd[i]-ind[i]==1) ++outBig1;
//            if (ind[i]-outd[i]==1) ++inBig1;
//        }
//        if (!(((inBig1==outBig1) && (inBig1==0)) || ((inBig1==outBig1) && (inBig1==1)))){
//            ok=0;
//        }
//        if (!ok) {
//            printf("The door cannot be opened.\n");
//            continue;
//        }else {
//            printf("Ordering is possible.\n");
//            continue;
//        }
//    }
//    return 0;
//}
