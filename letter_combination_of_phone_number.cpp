class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits == "")
        {
            return res;
        }

        map<char,string> letters;
        letters['2'] = "abc";
        letters['3'] = "def";
        letters['4'] = "ghi";
        letters['5'] = "jlk";
        letters['6'] = "mno";
        letters['7'] = "pqrs";
        letters['8'] = "tuv";
        letters['9'] = "wxyz";

        if(digits.length() == 1)
        {
            string s = letters[digits[0]];

            for(int i=0;i<s.length();i++)
            {
                res.push_back(string(1,s[i]));
            }

            return res;
        }

        vector<char> singleDigit;
        for(int i=0;i<digits.length();i++)
        {
            singleDigit.push_back(digits[i]);
        }

        string s = letters[singleDigit[0]]; 
        for(int i=0;i<s.length();i++)
        {
            res.push_back(string(1,s[i]));
        }


        for(int i=1;i<singleDigit.size();i++)
        {
            string next = letters[singleDigit[i]];
            vector<string> tep;
            for(int j=0;j<res.size();j++)
            {
                for(int k=0;k<next.length();k++)
                {
                    tep.push_back(res[j] + string(1,next[k]));
                }
            }
            res = tep;
        }

        return res;
    }
};
