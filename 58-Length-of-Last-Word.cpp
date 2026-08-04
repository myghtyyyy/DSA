class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int a=s.size()-1;
        while(a>=0 && s[a]==' '){
            a--;

        }
        for(int i=0;i<=a;i++){
            if (s[i]==' '){
                count=0;
            }
            else{
                count++;
            }
        }
        return count;
    }
};