class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0, end = height.size() - 1;
        int res = 0;
        int area;
        while (start < end) {
            if (height[start] < height[end]) {
                area = (end - start) * height[start];
                start++;
            } else {
                area = (end - start) * height[end];
                end--;
            }
            res = max(area, res);
        }
        return res;
    }
};
