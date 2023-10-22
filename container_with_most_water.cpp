class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;

        int area = 0;
        int length =0;
        while(i<j)
        {
            int width = j-i;
            if(height[j] > height[i])
            {
                length = height[i]; 
                i++;
            }
            else 
            {
                length = height[j];
                j--;
            }
                
            int temp = length * width;

            if(area < temp )
                area = temp;
        }


        return area;

    }
};
