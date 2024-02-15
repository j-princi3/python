#include <iostream>
#include<vector>
using namespace std;
long long countSubarrays(vector<int>& nums, int k) {
        long long p=0;
        for (int i=0;i<nums.size();i++){
            for(int j=nums.size()-1;j>=i;j--){
                int sum=0;
                for(int k1=i;k1<=j-1;k1++){
                    for(int q=k1+1;q<=j;q++){
                        if(sum==k){
                            p++;
                            break;
                        }
                        if(nums[k1]==nums[q]){
                            sum++;
                        }
                                cout<<nums[k1];
                    }
                    cout<<endl;
                }
            }
        }
        return p;
    }
int main(){
   vector<int> nums = {1,4,2,1};
   int k = 3;
   cout<<countSubarrays(nums,k);
}