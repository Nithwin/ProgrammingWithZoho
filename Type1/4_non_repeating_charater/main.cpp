#include <iostream>
using namespace std;

char non_rep_char(string s){
    int res = 0;
    for(int i = 0; i < s.length(); i++){
        int n = s[i];
        if((s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z')
            ){
                if(n >= 97){
                    n -= 32;
                }
            }
        res ^= n;
    }
    //cout << res;
    //char c = (char)res;
    //cout << c;
    return (char)res;
}

int main(){
    string s = "codeit@*codeit@";
    cout << non_rep_char(s);
    int n = '*';
    //cout << n;
    return 0;
}