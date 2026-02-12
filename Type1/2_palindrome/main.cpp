#include <iostream>
using namespace std;

bool findPalindrome(string s){
    int left = 0, right = s.length()-1;
    while(left <= right){
        if(!(
            (s[left] >= 'a' && s[left] <= 'z') ||
            (s[left] >= 'A' && s[left] <= 'Z')
        )){
            left++;

        }
        else if(!(
            (s[right] >= 'a' && s[right] <= 'z') ||
            (s[right] >= 'A' && s[right] <= 'Z')
        )){
            right--;
        }
        else if(s[right] != s[left]){
            return false;
        } else {
            right--;
            left++;
        }
    }
    return true;
}

int main(){
    cout << findPalindrome("moom") << "\n";
    cout << findPalindrome("mo om") << "\n";
    cout << findPalindrome(" mo om") << "\n";
    cout << findPalindrome(" 35m54o om") << "\n";
    cout << findPalindrome(" skuh") << "\n";
    cout << findPalindrome(" ada") << "\n";
    return 0;
}