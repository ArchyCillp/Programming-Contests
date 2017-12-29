#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#define MAXN 50
#define MAXP 300
#define INFT 99999999
using namespace std;

struct edge{
    int from,to,cap,flow,cost;
    edge(int u,int v,int c,int f,int cst):from(u),to(v),cap(c),flow(f),cost(cst){};
};
int N,M,S,T; //node edge start end
vector<edge> edges;
vector<int> G[MAXP]; //store the subscript from edges of this node
int inq[MAXN]; //in the queue?
int dis[MAXN]; //distance "or cost" from start
int pre[MAXN]; //the preedge
int flw[MAXN]; //current max flow
void init(){ // use this after make certain of N
    for (int i=0;i<N;i++){
        G[i].clear();
    }
    edges.clear();
}
int addedge(int from,int to,int cap,int cost){
    edges.push_back(edge(from,to,cap,0,cost));
    edges.push_back(edge(to,from,0,0,-cost));
    int len=edges.size();
    G[from].push_back(len-2);
    G[to].push_back(len-1);
    return len-2;
}
bool SPFA(int &F,int &C){
    memset(inq,0,sizeof(inq));
    memset(pre,-1,sizeof(pre));
    for (int i=0;i<N;i++){
        dis[i]=INFT;
    }
    dis[S]=0; inq[S]=1; pre[S]=-1; flw[S]=INFT;
    queue<int> q;
    q.push(S);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        inq[x]=0;
        int Size=G[x].size();
        for (int i=0;i<Size;i++){
            edge& e=edges[G[x][i]];
            if (e.cap>e.flow && dis[e.to]>dis[x]+e.cost){
                dis[e.to]=dis[x]+e.cost;
                pre[e.to]=G[x][i];
                flw[e.to]=min(flw[x],e.cap-e.flow);
                if (!inq[e.to]){
                    inq[e.to]++;
                    q.push(e.to);
                }
            }
        }
    }
    if (dis[T]==INFT) return false;
    F+=flw[T];
    C+=dis[T]*flw[T];
    for (int i=T;i!=S;i=edges[pre[i]].from){
        edges[pre[i]].flow+=flw[T];
        edges[pre[i]^1].flow-=flw[T];
    }
    return true;
}
int mincost(){
    int F=0,C=0;
    int ok=0;
    while(SPFA(F,C)){
        ok=1;
        continue;
    }
    if (!ok) return -1;
    return C;
}
int main(){
    int cnt=0;
    while(1){
        scanf("%d%d",&N,&M);
        if (N==M && N==0) break;
        N+=2;
        init();
        for(int i=0;i<M;i++){
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            addedge(u,v,1,w);
        }
        addedge(N-2,0,2,0);
        int finale = addedge(N-3,N-1,2,0);
        S=N-2;T=N-1;
        int ans=mincost();
        if (edges[finale].flow!=2 || ans==-1) printf("Instance #%d:  Not possible \n",++cnt);
        else printf("Instance #%d:  %d \n",++cnt,ans);
    }
    return 0;
}
