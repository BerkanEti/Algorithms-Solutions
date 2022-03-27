#include <iostream>
#include <sstream>
#include<string>
#include <numeric>
#include <vector>
#include <algorithm>
#include <set> 
#include <map>
#include <math.h>
#include <unordered_map>
#define MAXN 1000009
#define INF 1000000007
#define mp(x,y) make_pair(x,y)
#define all(v) v.begin(),v.end()
#define pb(x) push_back(x)
#define wr cout<<"----------------"<<endl;
#define ppb() pop_back()
#define tr(ii,c) for(__typeof((c).begin()) ii=(c).begin();ii!=(c).end();ii++)
#define ff first
#define ss second
#define my_little_dodge 46
#define debug(x)  cerr<< #x <<" = "<< x<<endl;

using namespace std;



int main(){
    int total =0;
    int n , x ,y , d;
    int sol , sag , yukari ;
    cin >> n ;
    cin >> x >> y ;
    cin >> d ;
    if(d==1){
        sol=y;
        sag=y;
        yukari=n-x-1;
        while((sol>=0 || sag <n ) && yukari < n){
            total = total + sag-sol + 1 ;
            if(sol>0)sol--;
            if(sag<n-1)sag++;
            yukari++;
        }
        cout << total ;
    }
    if(d==0){
        sol=x;
        sag=x;
        yukari=n-y-1;
        while((sol>=0 || sag <n ) && yukari < n){
            total = total + sag-sol + 1 ;
            if(sol>0)sol--;
            if(sag<n-1)sag++;
            yukari++;
        }
        cout << total ;
    }
    if(d==2){
        sol=x;
        sag=x;
        yukari=y;
        while((sol>=0 || sag <n ) && yukari < n){
            total = total + sag-sol + 1 ;
            if(sol>0)sol--;
            if(sag<n-1)sag++;
            yukari++;
        }
        cout << total ;
    }
    if(d==3){
        sol=y;
        sag=y;
        yukari=x;
        while((sol>=0 || sag <n ) && yukari < n){
            total = total + sag-sol + 1 ;
            if(sol>0)sol--;
            if(sag<n-1)sag++;
            yukari++;
        }
        cout << total ;
    }

    
    


return 0 ;
}
