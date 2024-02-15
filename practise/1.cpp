#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
    int max = nums.size() / 2;
    int num = nums[0];
    int count = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            count++;
            if (count > max) {
                max = count;
                num = nums[i];
            }
        } else {
            count = 1;
        }
    }

    return num;
}

int main() {
    vector<int> nums = {-1, 1, 1, 1, 2, 1};
    sort(nums.begin(), nums.end());

    cout << "Majority Element: " << majorityElement(nums) << endl;

    return 0;
}
