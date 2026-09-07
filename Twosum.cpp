#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>


std::pair<int,int> twoSumBruteForce(const std::vector<int>& nums, int target){
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                return {i, j};
            }
                     
        }
    }
    return {-1, -1};
}

std::pair<int,int> twoSumHash(const std::vector<int>& nums, int target){
    std::unordered_map<int, int> index;
    for (int i = 0; i < nums.size(); ++i) {
        int needed = target - nums[i];
        if (index.count(needed)) {
            return {index[needed], i};
        }
        index[nums[i]] = i;
    }
    return {-1,-1}; // No solution found
    }


bool isValid() {
     return true; 
    }


int main() {
    
    //Test Case 1 - Valid test case with two solutions instead of the exact one highlighted in the leetcode 
    //Solution 1 - First and last indices where 15 + 9 = 24
    //Solution 2 - 1 and 9 indices where 4 + 20 = 24
    std::vector<int> nums1 = {15, 4, 18, 8, 19, 22, 24, 59, 59, 20, 18, 12, 36, 42, 9};
    int target1 = 24;
    std::pair<int,int> answer = twoSumBruteForce(nums1, target1);
    if(answer.first != -1 && answer.second != -1){
         std::cout << "Test 1: Brute Force - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values: [" << nums1[answer.first] << ", " << nums1[answer.second]<< "], Result is valid" << "\n";
    } else {
         std::cout << "Test 1: Brute Force - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values:None" << ", Result is invalid" << "\n";
    }
    answer = twoSumHash(nums1, target1);
    if(answer.first != -1 && answer.second != -1){
         std::cout << "Test 1: Hash Map - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values: [" << nums1[answer.first] << ", " << nums1[answer.second] << "], Result is valid" << "\n";
    } else {
         std::cout << "Test 1: Hash Map - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values:None" << ", Result is invalid" << "\n";
    }

    std::cout << "\n"; 

    //Test Case 2 - Valid test case which includes duplicate of the same values that are different elements
    std::vector<int> nums2 = {1, 3, 6, 9, 13, 15, 16, 19, 19, 20, 21};
    int target2 = 38;
    answer = twoSumBruteForce(nums2, target2);
    if(answer.first != -1 && answer.second != -1){
         std::cout << "Test 2: Brute Force - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values: [" << nums2[answer.first] << ", " << nums2[answer.second] << "], Result is valid" << "\n";
    } else {
         std::cout << "Test 2: Brute Force - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values:None" << ", Result is invalid" << "\n";
    }
    answer = twoSumHash(nums2, target2);
    if(answer.first != -1 && answer.second != -1){
         std::cout << "Test 2: Hash Map - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values: [" << nums2[answer.first] << ", " << nums2[answer.second] << "], Result is valid" << "\n";
    } else {
         std::cout << "Test 2: Hash Map - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values:None" << ", Result is invalid" << "\n";
    }

    std::cout << "\n"; 

    //Test Case 3 - Valid test case which includes positive and negative numbers with the solution being the addition of a positive and negative number
    std::vector<int> nums3 = {7, -4, 33, -59, 15, -21};
    int target3 = 3;
    answer = twoSumBruteForce(nums3, target3);
    if(answer.first != -1 && answer.second != -1){
         std::cout << "Test 3: Brute Force - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values: [" << nums3[answer.first] << ", " << nums3[answer.second] << "], Result is valid" << "\n";
    } else {
         std::cout << "Test 3: Brute Force - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values:None" << ", Result is invalid" << "\n";
    }
    answer = twoSumHash(nums3, target3);
    if(answer.first != -1 && answer.second != -1){
         std::cout << "Test 3: Hash Map - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values: [" << nums3[answer.first] << ", " << nums3[answer.second] << "], Result is valid" << "\n";
    } else {
         std::cout << "Test 3: Hash Map - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values:None" << ", Result is invalid" << "\n";
    }

    std::cout << "\n"; 

    // Test Case 4 - Valid test case that includes 3 numbers that add up to the target, with these being ignored for the right 2 elements later in the list
    std::vector<int> nums4 = {-9, -11, -12, -14, -18};
    int target4 = -32;
    answer = twoSumBruteForce(nums4, target4);
    if(answer.first != -1 && answer.second != -1){
         std::cout << "Test 4: Brute Force - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values: [" << nums4[answer.first] << ", " << nums4[answer.second] << "], Result is valid" << "\n";
    } else {
         std::cout << " Test 4: Brute Force - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values:None" << ", Result is invalid" << "\n";
    }
    answer = twoSumHash(nums4, target4);
    if(answer.first != -1 && answer.second != -1){
         std::cout << "Test 4: Hash Map  - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values: [" << nums4[answer.first] << ", " << nums4[answer.second] << "], Result is valid" << "\n";
    } else {
         std::cout << "Test 4: Hash Map - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values:None" << ", Result is invalid" << "\n";
    }
    
    std::cout << "\n"; 

    // Test Case 5 - invalid test case to test the logic of the result validity and the printing of the indices, values, and result validity
    std::vector<int> nums5 = {-1000, -373, -74, 0, 150, 465, 892, 1789 };
    int target5 = -2000;
    answer = twoSumBruteForce(nums5, target5);
    if(answer.first != -1 && answer.second != -1){
         std::cout << "Test 5: Brute Force - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values: [" << nums5[answer.first] << ", " << nums5[answer.second] << "], Result is valid" << "\n";
    } else {
         std::cout << "Test 5: Brute Force - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values:None" << ", Result is invalid" << "\n";
    }
    answer = twoSumHash(nums5, target5);
    if(answer.first != -1 && answer.second != -1){
         std::cout << "Test 5: Hash Map  - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values: [" << nums5[answer.first] << ", " << nums5[answer.second] << "], Result is valid" << "\n";
    } else {
         std::cout << "Test 5: Hash Map - Indices: [" << answer.first << ", " << answer.second << "]" << ", Values:None" << ", Result is invalid" << "\n";
    }
}
