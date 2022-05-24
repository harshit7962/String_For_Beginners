bool isPalindrome(string s) {
    //Check if a string is Palindrome
    int i=0, j=s.size()-1;
    while(i<j) {
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
