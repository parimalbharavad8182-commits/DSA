class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }
        
        unordered_set<int> unique_freqs;
        for (auto& [num, count] : freq) {
            unique_freqs.insert(count);
        }
        
        return freq.size() == unique_freqs.size();
        
    }
};