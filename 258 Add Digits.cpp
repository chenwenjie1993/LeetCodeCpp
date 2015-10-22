#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if (num < 10) {
            return num;
        }
        else {
            return (num - 1) % 9 + 1;
        };
    }
};

int main() {
    Solution s;
    cout << s.addDigits(0) << endl;
    cout << s.addDigits(1) << endl;
    cout << s.addDigits(19) << endl;
    cout << s.addDigits(100) << endl;
    cout << s.addDigits(18) << endl;
    return 0;
}
