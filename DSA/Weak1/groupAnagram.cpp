class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> table;
        for (string value : strs)
        {
            string temp = value;
            sort(temp.begin(), temp.end());
            table[temp].push_back(value);
        }
        vector<vector<string>> res;

        for (auto pair : table)
            res.push_back(pair.second);

        return res;
    }
};