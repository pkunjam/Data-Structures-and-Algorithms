// O(n) time and O(1) space
class Solution {
public:
    bool validPalindrome(string s) {
        
        int i = 0;
        int j = s.size()-1;
        
        while(i < j){
            
            if(s[i] != s[j])
            {
                return isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1);
            }
            
            i++;
            j--;
        }
        
        return true;
    }
    
public:
    bool isPalindrome(string s, int i, int j){
        
        while(i < j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
            
            i++;
            j--;
        }
        
        return true;
    }
};
