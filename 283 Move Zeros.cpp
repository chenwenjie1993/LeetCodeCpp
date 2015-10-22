#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int firstZero = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                if (firstZero >= 0) {
                    nums[firstZero] = nums[i];
                    nums[i] = 0;
                }
                if (!nums[firstZero+1]) {
                    firstZero++;
                }
                else {
                    firstZero = -1;
                }
            }
            else {
                if (firstZero < 0 ) {
                    firstZero = i;
                }
            }
        }
    }
};

int main() {
    Solution s;
    vector<int> v;
    int i;
    cin >> i;
    while (i>=0) {
        v.push_back(i);
        cin >> i;
    }
    s.moveZeroes(v);
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
