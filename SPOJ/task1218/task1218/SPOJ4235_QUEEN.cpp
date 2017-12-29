//#include<cstdio>
//#include<queue>
//#define MAXN 1050
//#define INFT 99999999
//using namespace std;
//int n,m;
//int mat[MAXN][MAXN];
//struct node{
//    int v[2];
//    int nodir;
//};
//queue<node> q;
//
//bool inbound(int x,int y){
//    if (x<0 || x>=n || y<0 || y>=m || mat[x][y]<0){
//        return false;
//    }
//    else return true;
//}
//void qclear(queue<node>& q) {
//    q = queue<node>();
//}
//
//int main(){
//    int t;
//    scanf("%d",&t);
//    while(t--){
//        qclear(q);
//        int ok=0;
//        node stt,fnsh;
//        scanf("%d%d",&n,&m);
//        for (int i=0;i<n;i++){
//            char ch=getchar();
//            while (ch!='.' && ch!='X' && ch!='S' && ch!='F') ch=getchar();
//            if (ch=='.'){
//                mat[i][0]=INFT;
//            }
//            if (ch=='X'){
//                mat[i][0]=-1;
//            }
//            if (ch=='S'){
//                mat[i][0]=0;
//                stt.v[0]=i; stt.v[1]=0;stt.nodir=-1;
//            }
//            if (ch=='F'){
//                mat[i][0]=INFT;
//                fnsh.v[0]=i; fnsh.v[1]=0;
//            }
//            for (int j=1;j<m;j++){
//                ch=getchar();
//                if (ch=='.'){
//                    mat[i][j]=INFT;
//                    continue;
//                }
//                if (ch=='X'){
//                    mat[i][j]=-1;
//                }
//                if (ch=='S'){
//                    mat[i][j]=0;
//                    stt.v[0]=i; stt.v[1]=j;stt.nodir=-1;
//                }
//                if (ch=='F'){
//                    mat[i][j]=INFT;
//                    fnsh.v[0]=i; fnsh.v[1]=j;
//                }
//            }
//        }
//        q.push(stt);
//        while (!q.empty()){
//            node tmp=q.front();
//            q.pop();
//            int x=tmp.v[0];
//            int y=tmp.v[1];
//            int noo=tmp.nodir;
//            int step=mat[x][y];
//            node newtmp;
//            int tx,ty;
//            tx=x;
//            ty=y;
//            while (1){
//                if (noo==0) break;
//                ++tx;
//                ++ty;
//                if (!inbound(tx,ty)) break;
//                if (mat[tx][ty]<INFT)continue;
//                mat[tx][ty]=step+1;
//                if (tx==fnsh.v[0] && ty==fnsh.v[1]) {ok=1;break;}
//                newtmp.v[0]=tx;
//                newtmp.v[1]=ty;
//                newtmp.nodir=0;
//                q.push(newtmp);
//            }
//            if (ok) break;
//
//            tx=x;
//            ty=y;
//            while (1){
//                if (noo==1) break;
//                ++tx;
//
//                if (!inbound(tx,ty)) break;
//                if (mat[tx][ty]<INFT)continue;
//                mat[tx][ty]=step+1;
//                if (tx==fnsh.v[0] && ty==fnsh.v[1]) {ok=1;break;}
//                newtmp.v[0]=tx;
//                newtmp.v[1]=ty;
//                newtmp.nodir=1;
//                q.push(newtmp);
//            }
//            if (ok) break;
//
//            tx=x;
//            ty=y;
//            while (1){
//                if (noo==2) break;
//                ++tx;
//                --ty;
//                if (!inbound(tx,ty)) break;
//                if (mat[tx][ty]<INFT)continue;
//                mat[tx][ty]=step+1;
//                if (tx==fnsh.v[0] && ty==fnsh.v[1]) {ok=1;break;}
//                newtmp.v[0]=tx;
//                newtmp.v[1]=ty;
//                newtmp.nodir=2;
//                q.push(newtmp);
//            }
//            if (ok) break;
//
//            tx=x;
//            ty=y;
//            while (1){
//                if (noo==3) break;
//                --ty;
//                if (!inbound(tx,ty)) break;
//                if (mat[tx][ty]<INFT)continue;
//                mat[tx][ty]=step+1;
//                if (tx==fnsh.v[0] && ty==fnsh.v[1]) {ok=1;break;}
//                newtmp.v[0]=tx;
//                newtmp.v[1]=ty;
//                newtmp.nodir=3;
//                q.push(newtmp);
//            }
//            if (ok) break;
//
//            tx=x;
//            ty=y;
//            while (1){
//                if (noo==0) break;
//                --tx;
//                --ty;
//                if (!inbound(tx,ty)) break;
//                if (mat[tx][ty]<INFT)continue;
//
//                mat[tx][ty]=step+1;
//                if (tx==fnsh.v[0] && ty==fnsh.v[1]) {ok=1;break;}
//                newtmp.v[0]=tx;
//                newtmp.v[1]=ty;
//                newtmp.nodir=0;
//                q.push(newtmp);
//            }
//            if (ok) break;
//
//            tx=x;
//            ty=y;
//            while (1){
//                if (noo==1) break;
//                --tx;
//                if (!inbound(tx,ty)) break;
//                if (mat[tx][ty]<INFT)continue;
//
//                mat[tx][ty]=step+1;
//                if (tx==fnsh.v[0] && ty==fnsh.v[1]) {ok=1;break;}
//                newtmp.v[0]=tx;
//                newtmp.v[1]=ty;
//                newtmp.nodir=1;
//                q.push(newtmp);
//            }
//            if (ok) break;
//
//            tx=x;
//            ty=y;
//            while (1){
//                if (noo==2) break;
//                --tx;
//                ++ty;
//                if (!inbound(tx,ty)) break;
//                if (mat[tx][ty]<INFT)continue;
//                 mat[tx][ty]=step+1;
//                if (tx==fnsh.v[0] && ty==fnsh.v[1]) {ok=1;break;}
//                newtmp.v[0]=tx;
//                newtmp.v[1]=ty;
//                newtmp.nodir=2;
//                q.push(newtmp);
//
//            }
//            if (ok) break;
//
//
//            tx=x;
//            ty=y;
//            while (1){
//                if (noo==3) break;
//                ++ty;
//                if (!inbound(tx,ty)) break;
//                if (mat[tx][ty]<INFT)continue;
//                mat[tx][ty]=step+1;
//                if (tx==fnsh.v[0] && ty==fnsh.v[1]) {ok=1;break;}
//                newtmp.v[0]=tx;
//                newtmp.v[1]=ty;
//                newtmp.nodir=3;
//                q.push(newtmp);
//
//            }
//            if (ok) break;
//        }
//        if (!ok){
//            printf("-1\n");
//        }else {
//            printf("%d\n",mat[fnsh.v[0]][fnsh.v[1]]);
//        }
//    }
//    return 0;
//}
