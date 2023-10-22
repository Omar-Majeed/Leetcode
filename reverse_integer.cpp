class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        int i=0;
        if(s[i] == '-')
        {
            i++;
        }
        int len = s.length()-1;
        int mid;
        if(s.length()%2 == 0)
        {
            mid = s.length()/2;
        }
        else{
            mid = s.length()/2 + 1;
        }
        while(i != mid)
        {
            swap(s[i],s[len]);
            i++;
            len--;
        }
        int res = 0;
        try{

            res = stoi(s);
        }
        catch(...)
        {
            cout << "In exception";
        }
        return res;
    }
};
