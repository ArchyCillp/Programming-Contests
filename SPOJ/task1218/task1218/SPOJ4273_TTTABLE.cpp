//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//#define MAXN 500
//using namespace std;
//
//struct evt{
//    int train;
//    int tm;
//    int station;
//}eventList[MAXN];
//bool cmp(evt a,evt b){
//    if (a.tm!=b.tm) return a.tm<b.tm;
//    return a.train>b.train;
//}
//
//int main(){
//    int n,nn=0;
//    scanf("%d",&n);
//    while(n--){
//        int t,na,nb,tot;
//        scanf("%d",&t);
//        scanf("%d%d",&na,&nb);
//        tot=0;
//        for(int i=0;i<na;i++){
//            int h,m;
//            scanf("%d:%d",&h,&m);
//            evt tmp;
//            tmp.station=0;
//            tmp.tm=h*60+m;
//            tmp.train=-1;
//            eventList[tot++]=tmp;
//            scanf("%d:%d",&h,&m);
//            tmp.station=1;
//            tmp.tm=h*60+m+t;
//            tmp.train=1;
//            eventList[tot++]=tmp;
//        }
//        for(int i=0;i<nb;i++){
//            int h,m;
//            scanf("%d:%d",&h,&m);
//            evt tmp;
//            tmp.station=1;
//            tmp.tm=h*60+m;
//            tmp.train=-1;
//            eventList[tot++]=tmp;
//            scanf("%d:%d",&h,&m);
//            tmp.station=0;
//            tmp.tm=h*60+m+t;
//            tmp.train=1;
//            eventList[tot++]=tmp;
//        }
//        sort(eventList,eventList+tot,cmp);
//        int ans[2];
//        int wt[2];
//        wt[0]=wt[1]=ans[0]=ans[1]=0;
//
//        for (int i=0;i<tot;i++){
//            evt tmp=eventList[i];
//            if (tmp.train==-1){
//                if (wt[tmp.station]==0){
//                    ++ans[tmp.station];
//                    continue;
//                }
//                wt[tmp.station]--;
//            }
//            else{
//                wt[tmp.station]++;
//            }
//        }
//        printf("Case #%d: %d %d\n",++nn,ans[0],ans[1]);
//    }
//    return 0;
//}
//
//
//
