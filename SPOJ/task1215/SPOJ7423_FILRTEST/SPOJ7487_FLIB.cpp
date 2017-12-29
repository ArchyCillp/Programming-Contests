//#include<cstdio>
//#include<cstring>
//#define MAXN 3
//#define MOD 1000000007
//#define LL long long
//using namespace std;
//
//struct mat33{
//    LL v[3][3];
//    mat33(){
//        memset(v,0,sizeof(v));
//    };
//    mat33 operator * (mat33 a){
//        mat33 c;
//        c=mat33();
//        for (int i=0;i<3;i++)
//            for (int j=0;j<3;j++)
//            for (int k=0;k<3;k++)
//            c.v[i][j]=(c.v[i][j]+v[i][k]*a.v[k][j])%MOD;
//        return c;
//    }
//    mat33 mat33power(LL e){
//        if (e==1) return *this;
//        mat33 c=mat33();
//        c=(mat33power(e/2));
//        mat33 ans=c*c;
//        if (e%2) ans=ans*(*this);
//        return ans;
//    }
//
//};
///*double dpower(double a,LL e){
//    if (e==1) return a;
//    else {
//        double tmp=dpower(a,e/2);
//        double ans=tmp*tmp;
//        if (e%2) ans=ans*a;
//        return ans;
//    }
//
//}*/
//
//int main(){
//    int t;
//    scanf("%d",&t);
//    while(t--){
//        LL n;
//        scanf("%lld",&n);
//        mat33 a=mat33();
//        a.v[0][0]=1;
//        a.v[0][1]=1;
//        a.v[1][1]=5;
//        a.v[1][2]=3;
//        a.v[2][1]=3;
//        a.v[2][2]=2;
//        a=a.mat33power(n);
//        printf("%lld\n",(2*a.v[0][1]%MOD+a.v[0][2]%MOD)%MOD);
//    }
//    return 0;
//}
//
