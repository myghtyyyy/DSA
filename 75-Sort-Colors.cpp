class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int r=0;
        int b=0;
        int w=0;
        for (int i=0;i<n;i++){
            if(nums[i]==0){
                r++;
            }
            else if(nums[i]==1){
                w++;
            }
            else{
                b++;
            }
        }
        n=0;
        while(r){
            nums[n]=0;
            n++;
            r--;
        }
        while(w){
            nums[n]=1;
            n++;
            w--;
        }
        while(b){
            nums[n]=2;
            n++;
            b--;
        }
    }
};