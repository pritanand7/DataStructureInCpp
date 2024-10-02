#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Map to store number and its index
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Calculate the complement
        
        // Check if the complement exists in the map
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // Return the indices
        }
        
        // Store the current number and its index in the map
        numMap[nums[i]] = i;
    }
    
    return {}; // If no solution is found
}

int main() {
    vector<int> nums = {2, 7, 11, 15}; // Example array
    int target = 9;                    // Example target
    
    vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
    
    return 0;
}
