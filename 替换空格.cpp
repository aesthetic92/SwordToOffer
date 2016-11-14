class Solution {
public:
    string replaceSpace(string str) {
        int len = str.size(); 
        int i, blanks;
        blanks = 0;
        for(i = 0; i < len; ++i) {
            if(str[i] == ' ') {
                blanks++;
            }
        }
           
        str.resize(len + 2 * blanks);
        for(i = len - 1; i >= 0; --i) {
            if(str[i] == ' ') {
                str[i + 2 * blanks] = '0';
                str[i + 2 * blanks - 1] = '2';
                str[i + 2 * blanks - 2] = '%';
                blanks--;
            }
            else {
                str[i + 2 * blanks] = str[i];
            }
        }
        return str;
    }
};