class Solution {
public:
    int strStr(string haystack, string needle) {
        int found=-1;
        for (int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0]){
                if(haystack.substr(i,needle.length())==needle){
                    found=i;
                    break;
                }
            
            }
        }
      return found;  
    }
};