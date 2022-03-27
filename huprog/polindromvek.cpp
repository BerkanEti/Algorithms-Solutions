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
    int n ;
    int length , k ;
    int temp ;
    int tekrar = 0 ,max=0;
    int total=0 ;
    string s ;
    vector<char> arr ;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        total=0;
        cin >> length >> k ;
        cin >> s ;
        for (int j = 0; j <=k/2; j++){
        temp = j ;
        while(temp<length){
            arr.pb(s[temp]);
           cout << temp << " " ;
            temp +=k;


        }
        if(j!=k/2){
            temp=k-j-1;
         while(temp<length){
            arr.pb(s[temp]);
           cout << temp << " " ;
            temp +=k;
        }


        }
        sort(arr.begin(),arr.end());
        for(int l=0;l<arr.size();l++){
         cout << arr[l] << " " ;
        }
        max=0;
        tekrar = 0 ;
        for (int k = 0; k < arr.size()-1; k++)
        {
           
            if(arr[k] == arr[k+1]){
                tekrar++;
            }
            if(tekrar>max){
                max = tekrar;
            }
            else if(arr[k] != arr[k+1])tekrar=0;
        }
        total += arr.size() - (max+1)  ;
    cout <<max <<  " " << total <<" " <<  arr.size()<< endl ;
        arr.clear();
        }
        


        
        cout << total << endl  ;
    }
    

    
    


return 0 ;
}
