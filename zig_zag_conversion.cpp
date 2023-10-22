class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
        {
            return s;
        }

        vector<string> v(numRows,"");
        int len = s.length();
        int row = 0;
        bool upwards = false;
        bool downwards = true;
        for(int i=0;i<len;i++)
        {
            if(row == numRows-1)
            {
                upwards = true;
                downwards = false;
            }
            else if(row == 0)
            {
                downwards = true;
                upwards = false;
            }

            if(downwards)
            {
                v[row] = v[row] + s[i]; 
                row++;
            }

            if(upwards)
            {
                v[row] = v[row] + s[i];
                row--;
            }

        }

        string res = "";
        for(int i=0;i<numRows;i++)
        {
            res += v[i];
        }

        return res;
    }
};
