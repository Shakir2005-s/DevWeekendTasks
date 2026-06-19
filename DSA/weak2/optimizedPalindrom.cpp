class Solution
{
    bool isPalindrom(const string &str, int left, int right)
    {
        while (left < right)
        {
            if (str[left] != str[right])
            {
                return false;
            }
            ++left, --right;
        }
        return true;
    }

public:
    bool validPalindrome(string s)
    {
        int left = 0;
        int right = s.size() - 1;

        while (left < right)
        {
            if (s[left] != s[right])
            {
                return isPalindrom(s, left + 1, right) || isPalindrom(s, left, right - 1);
            }
            ++left, --right;
        }
        return true;
    }
};