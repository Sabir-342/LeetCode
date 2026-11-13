class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0, hp = height.size() - 1, maxWater = 0;
        while(lp < hp){
            int currWater = (hp - lp) * (min(height[lp], height[hp]));
            maxWater = max(maxWater, currWater);
            height[lp] < height[hp] ? lp++ : hp--;
        }
        return maxWater;
    }
};