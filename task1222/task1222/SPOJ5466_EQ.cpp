#include<cstdio>
#include<cstring>
#include<queue>
#define MAXQ 100
#define LL long long
using namespace std;

struct EQ{
    int waitto;
    int id;
    bool operator < (const EQ& y) const
    {
        if (waitto==y.waitto) return id>y.id;
        else return waitto>y.waitto;
    }
};

priority_queue<EQ> pq;
int n,m;
LL ans;
void init(priority_queue<EQ>& ppq){
    while(!ppq.empty()) ppq.pop();
    ans=0;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        init(pq);
        for (int i=0;i<n;i++){
            EQ tmp;
            tmp.waitto=0;
            tmp.id=i;
            pq.push(tmp);
        }
        int nowTm=0,spdTm;
        for (int i=0;i<m;i++){
            scanf("%d%d",&nowTm,&spdTm);
            spdTm+=5;
            EQ head=pq.top();
            pq.pop();
            if (head.waitto<=nowTm){
                ans+=spdTm;
                head.waitto=nowTm+spdTm;
                pq.push(head);
            }else {
                ans+=(spdTm+head.waitto-nowTm);
                head.waitto=head.waitto+spdTm;
                pq.push(head);
            }
        }
        printf("%lld\n",ans);

    }

}


