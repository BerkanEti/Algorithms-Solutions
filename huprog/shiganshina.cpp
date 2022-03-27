#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <set> 
#include <map>


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
int n1,n2,k ;
int total=0;
int j=0;
vector<int> dusman , eren ;
cin >> n1 >> n2 ;
for(int i=0;i<n1;i++){
    cin >> k ;
    dusman.pb(k);
    
}
for(int i=0;i<n2;i++){
    cin >> k ;
    eren.pb(k);
    
}
sort(dusman.begin(),dusman.end());
sort(eren.begin(),eren.end());

for(int i=0;i<n2;i++){
    while(j<n1){
        if(eren[i] > dusman[j]){
            total++;
            j++;
            
        }
        else{
            break;
        }

    }
    cout << total << " " ;
}
}
