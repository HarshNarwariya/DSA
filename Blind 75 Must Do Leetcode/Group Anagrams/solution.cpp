class Solution {
private:
    string sortString(string &s) {
        int counter[26] = {0};
        for (char c : s) {
            counter[c - 'a']++;
        }
        string t;
        for (int c = 0; c < 26; c++) {
            t += string(counter[c], c + 'a');
        }
        return t;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> hash_map;
      vector<vector<string>> result;
      for(string s: strs) {   
            string temp = s;
            hash_map[sortString(temp)].push_back(s);
      }
      for(auto item: hash_map){
        result.push_back(item.second);
      }
      return result;
    }
};