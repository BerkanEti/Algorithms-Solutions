#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <set> 
#include <map>

// 13 

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
int n;
int total=0;
string s ;
cin >> n;
cin >> s ;
for(int i=0;i<n;i++){
    if(s[i] == 'z'){
        for(int j=i+1;j<n;j++){
            if(s[j]=='e'){
                for(int k=j+1;k<n;k++){
                    if(s[k]=='r'){
                        for(int l=k+1;l<n;l++){
                            if(s[l] == 'o'){
                                total++;
                            }
                
            }
                    }
            }
            }
        }
    }
}
cout << total%(INF) ;

  
}
/* borc[k-1] += tank ;
    if(borc[i] < tank){
        total += tank-borc[i] ;
        borc[i]=0;
    }
    else borc[i]-=tank ;
    1 > 2 110           1:  0  2: 110    3: 
    2 > 3 60            
    3 > 2 100
4
1>2 100    1:100 - 100   2: 100
2>1 100
3>4 70
4>3 70
    

5 
4 100  1:0   2:
5 50
2 120
1 10 
3 40
     */
