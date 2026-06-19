class Solution
{
    bool isPalindrom(string str)
    {
        int left = 0;
        int right = str.size() - 1;
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
                string temp = s;
                temp.erase(left, 1);
                bool flag = isPalindrom(temp);
                if (flag)
                    return true;
                s.erase(right, 1);
                return isPalindrom(s);
            }
            ++left, --right;
        }
        return true;
    }
};