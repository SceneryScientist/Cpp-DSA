#include <iostream>
#include <string>

std::string palindrome(int i, std::string s){
    if (i>=s.length()/2) return "true";
    if (s[i] != s[s.length()-i-1]) return "false";
    return palindrome(i+1,s);
}

int main(){
    std::string s="MARKRAM";
    std::cout<<palindrome(0,s);
}