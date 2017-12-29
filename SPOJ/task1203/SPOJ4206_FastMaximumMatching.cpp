//#include<cstdio>
//#include<cstring>
//#include<queue>
//#define INF 999999999
//#define MAXP 60000
//#define MAXN 160000
//using namespace std;
//int v[MAXN],first[MAXP],nxt[MAXN];//本题没用到u所以删去
//int dis,dx[MAXP],dy[MAXP],cx[MAXP],cy[MAXP],used[MAXP];//d表示层次，c表示匹配
//int n,m;
//void addedge(int a,int b,int i)
//{
//    //u[i]=a;
//    v[i]=b;
//    nxt[i]=first[a];
//    first[a]=i;
//}
//bool bfs(){ //找增广路
//    dis=INF;
//    memset(dx,-1,(n+2)*sizeof(int));
//    memset(dy,-1,(m+2)*sizeof(int));
//    queue<int> q;
//    for (int i=1;i<=n;i++)
//        if (cx[i]==-1){
//            q.push(i);
//            dx[i]=0;
//        }
//    while(!q.empty()){
//        int a=q.front();
//        q.pop();
//        if (dx[a]>dis) {
//            break;
//        }
//        for (int i=first[a];i!=-1;i=nxt[i]){
//            int b=v[i];
//            if (dy[b]==-1){
//                dy[b]=dx[a]+1;
//                if (cy[b]==-1){
//                    dis=dy[b];
//                }
//                else{
//                    dx[cy[b]]=dy[b]+1;
//                    q.push(cy[b]);
//                }
//            }
//        }
//    }
//    return dis!=INF;
//}
//int dfs(int a){ //找左点a的匹配
//    for (int i=first[a];i!=-1;i=nxt[i]){
//        int b=v[i];
//        if (!used[b] && dy[b]==dx[a]+1){
//            used[b]=1;
//            if (cy[b]!=-1 && dis==dy[b])  //是continue而不是break
//            {
//                continue;
//            }
//            if (cy[b]==-1 || dfs(cy[b])){
//                cy[b]=a;
//                cx[a]=b;
//                return 1;
//            }
//        }
//
//    }
//    return 0;
//}
//int hopcroftKarp(){
//    int res=0;
//    memset(cx,-1,(n+2)*sizeof(int));
//    memset(cy,-1,(m+2)*sizeof(int));
//    while(bfs()){
//        memset(used,0,(m+2)*sizeof(int));
//        for (int i=1;i<=n;i++)
//            if (cx[i]==-1){
//                if (dfs(i)) res++;
//            }
//    }
//    return res;
//}
//int main(){
//    freopen("data.txt","r",stdin);
//    int t;
//    scanf("%d",&t);
//    while(t--){
//        int p;
//    scanf("%d%d%d",&n,&m,&p);
//    memset(first,-1,(n+2)*sizeof(int));
//    memset(nxt,-1,(p+2)*sizeof(int));
//    for (int i=0;i<p;i++){
//        int a,b;
//        scanf("%d%d",&a,&b);
//        addedge(a,b,i);
//    }
//    printf("%d\n",hopcroftKarp());
//    }
//    return 0;
//}
