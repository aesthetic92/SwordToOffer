class Solution {
public:
    int jumpFloorII(int number) {
        if(number < 1) {
            return 0;
        }
        if(number == 1 || number == 2) {
            return number;
        }
        int i, result;
        result = 2;
        for(i = 3; i <= number; i++) {
            result = 2 * result;
        }
        return result;
    }
};