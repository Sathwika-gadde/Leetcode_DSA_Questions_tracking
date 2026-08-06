class Solution {
public:
    int smallestNumber(int n, int t) {
        int product=1;
        for(int i=n; ;i++){
            int temp=i;
            while(temp>0){
                int digit=temp%10;
                product*=digit;
                temp/=10;
            }
            
            if(product%t==0){
                return i;
            }
            product=1;
        }
        
        
        return n;
    }
};