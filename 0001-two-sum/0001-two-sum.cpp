class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        
        for(int i =0 ; i < nums.size(); i++){
            int first = nums[i];
            for(int j = i+1; j < nums.size(); j++){
                int second = nums[j];
                if(first + second == target){
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            }
            if(answer.size() > 0){
                break;
            }
        }
        
        return answer;
    }
};