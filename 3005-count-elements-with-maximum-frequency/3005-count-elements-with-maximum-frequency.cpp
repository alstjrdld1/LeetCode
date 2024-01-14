class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int frequencies[101] = {0};
        int maxFreq = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            frequencies[nums[i]]++;
            if(frequencies[nums[i]] > maxFreq)
            {
                maxFreq = frequencies[nums[i]];
            }
        }
        
        int frequency = 0;
        
        for(int i = 1; i <= 100; i++)
        {
            if(frequencies[i] == maxFreq)
            {
                frequency += maxFreq;
            }
        }
        return frequency;
    }
};