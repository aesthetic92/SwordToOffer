class Solution {
public:
    bool Find(vector<vector<int> > array,int target) {
        bool found = false;
        if(array.size() <= 0) {
            return false;
        }
         
        int columns, rows;
        columns = array[0].size();
        rows = array.size();
         
        int row, column;
        column = columns - 1;
        row = 0;
        while(row <= rows - 1 && column >= 0) {
            if(array[row][column] == target) {
                found = true;
                break;
            }
            else if(array[row][column] < target) {
                row++;
            }
            else {
                column--;
            }
        }
        return found;
         
    }
};