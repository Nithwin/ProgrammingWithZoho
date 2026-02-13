#include <iostream>
using namespace std;

int longest_substring_without_rep_char(string s){
    int start = 0, end = 0; 
    int maxy = 0;
    int freq[256] = {0};
    int n = s.length();
    for(int i = 0; i < n; i++){
        char cur = s[i];
        
        if(freq[cur] >= start){
            start = freq[cur];
        }
        freq[cur] = i+1;
        maxy = max(maxy, i-start+1);
    }
    return maxy;
}

int main(){
    string s = "nithwin";
    cout << longest_substring_without_rep_char(s) << "\n";
    return 0;
}