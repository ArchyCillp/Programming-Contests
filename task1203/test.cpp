//    #include <bits/stdc++.h>
//    using namespace std;
//    int degree[26],used[26];
//    int G[26][26];
//    int n;
//    int id(int a){
//        return a-'a';
//    }
//    int vis[26];
//     void dfs(int u){
//         vis[u] = 1;
//         for(int i = 0; i < 26; i++){
//             if(G[u][i] && !vis[i]){
//                 dfs(i);
//             }
//         }
//     }
//
//     bool judge(){
//         int num1 = 0, num2 = 0;
//         int u = 0, v;
//        for(int i = 0; i< 26; i++){
//             if(used[i]){             u = i;//uһ��ʼ����ͼ������һ������
//                 break;
//             }
//         }
//        for(int i = 0; i < 26; i++){
//             if(used[i]){
//                 if(degree[i] != 0){
//                     if(degree[i] == 1) {num1++; u = i;}//��ʱu��Ҫ�������>���ȵĶ�����
//                    else if(degree[i] == -1){num2++; v = i;}
//                     else return false;
//                 }
//            }
//      }
//         if((num1 || num2) && num1 + num2 != 2) return false;//����� ���Ҳ���ֻ��2�� �Ϳ�����Ϊfalse��
//
//         memset(vis,0,sizeof(vis));
//        dfs(u);
//        for(int i = 0; i < 26; i++){
//             if(used[i] && !vis[i]){//���������㣬 ������û������ false��
//                 return false;
//            }
//        }
//         return true;
//
//     }
//     int main(){
//         freopen("data41.txt","r",stdin);
//         freopen("stand41.txt","w",stdout);
//         int T;
//         scanf("%d", &T);
//         while(T--){
//             memset(degree,0,sizeof(degree));
//             memset(used,0,sizeof(used));
//             memset(G,0,sizeof(G));
//             scanf("%d", &n);
//            for(int i = 0; i < n; i++){
//               char s[1007];
//                scanf("%s", s);
//                int s1 = s[0] , s2 = s[strlen(s)-1];
//                if(s1 != s2){
//                     G[id(s1)][id(s2)] = 1;
//                 }
//                 used[s1 -'a'] = 1;
//                used[s2 -'a'] = 1;
//                degree[id(s1)]++;//����++
//                 degree[id(s2)]--;//���--
//          }
//    //         for(int i = 0; i<26; i++){//�۲����
//    //             if(used[i])
//    //                 printf("%c %d\n", i+'a', degree[i]);
//    //         }
//            printf("%s\n", judge()? "Ordering is possible.":"The door cannot be opened.");
//         }
//     }
