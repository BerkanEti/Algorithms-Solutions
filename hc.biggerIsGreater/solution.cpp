#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'biggerIsGreater' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING w as parameter. 
 */

string biggerIsGreater(string w) {
    char temp ;
    int min ;
    int elementI=0 , elementJ=w.size()-1 , diff=0,current=w.size()+1;
    int cnt =0;
    
    for(int i=w.size()-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(w[i] > w[j]){
               diff=w.size()-j;
            //   cout << i << j ;
               if(diff < current ){
                   cout << w[i] << "ve" << w[j] << endl  ;
                   elementI = i ;
                   elementJ = j;
                   current = diff ;
               }
               if(diff<10)break;
            }
            
        }
    }
    if(diff==0)return "no answer" ;
    else{
                temp = w[elementI] ;
                w[elementI] = w[elementJ] ;
                w[elementJ] = temp ;
            //    cout << elementI <<" " <<  elementJ << endl ;
                for(int k=elementJ+1;k<=w.size()-2;k++){
                    min=k;
                    for(int l=k+1;l<=w.size()-1;l++){
                        if(w[min] > w[l])min=l;
                    }
                    temp = w[min] ;
                    w[min] = w[k] ;
                    w[k] = temp ;
                }
              
                return w ;
        
    }
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string T_temp;
    getline(cin, T_temp);

    int T = stoi(ltrim(rtrim(T_temp)));

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
