/ بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم //
//________________//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define PI            2.0*acos(0.0)   // acos(-1)
#define pi            pair <int,int>
#define rep(i,x,y)      for(int i = x ; i < y ; i++)
#define ff(x)        v[x].first
#define ss(x)         v[x].second
#define X(i)          x+fx[i]
#define Y(i)          y+fy[i]
template < class T> inline T Set(T N, T pos){ return N = N | (1<< pos);}
template < class T> inline bool Check(T N , T pos){ return (bool) (N & (1<<pos));}
template < class T> inline T Reset(T N , T pos) { return N = N & ~(1 << pos); }
template < class T> inline T gcd(T a, T b){return a%b ? gcd(b,a%b) : b;}
template < class T> inline T lcm(T a, T b) {return (a*b)/gcd(a,b);}
template < class T> inline T big(T b, T p, T N){
   if(!p) return 1;
   if(!(p&1)){
    T x = big(b,p/2,N);
    return (x%N * x%N)%N;
   }
   return (b%N * big(b,p-1,N)%N)%N;
}
int fx[] = {0,1,0,-1,1,-1,1,-1};
int fy[] = {1,0,-1,0,1,-1,-1,1};
inline int fac_num(int num, int n){
   int sum = 0;
   while(num)
     sum += (num/=n);
 
   return sum;
}
 
inline int NumOf(int num, int n){
 int ans = 0;
 while(num%n==0){
    num /= n;
    ans++;
 }
 return ans;
}
int main()
{
   int n , r , p , q , test ,cse = 1;
   cin >> test;
   while(test--){
    scanf("%d %d %d %d", &n , &r , &p , &q);
    int fn = fac_num(n,2);
    int fr = fac_num(r,2);
    int fnr = fac_num(n-r,2);
    int t2 = (fn-(fr+fnr));
    fn = fac_num(n,5);
    fr = fac_num(r,5);
    fnr = fac_num(n-r,5);
    int t5 = (fn-(fr+fnr));
    t2 += NumOf(p,2)*q;
    t5 += NumOf(p,5)*q;
 //   cout << min(t2,t5) << endl;
    printf("Case %d: %d\n", cse++ , min(t2,t5));
   }
}
