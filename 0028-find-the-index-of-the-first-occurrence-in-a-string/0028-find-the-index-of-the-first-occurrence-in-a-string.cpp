class Solution {
public:
    int strStr(string haystack, string needle) {
        int k=needle.length();
        string curstr;
        for(int i=0;i<k;i++){
            curstr+=haystack[i];
        }
        if(curstr==needle){
            
            return 0;
        }
            
        for(int i=k;i<haystack.length();i++){
            curstr+=haystack[i];
            curstr.erase(0,1);
            if(curstr==needle){
                return i-k+1;
                
            }
        }
        
        return -1;
    }
};