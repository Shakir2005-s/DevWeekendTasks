class Solution
{
    bool checkRow(vector<vector<char>> &brd, int rowIndex, int colsIndex)
    {
        int length = brd.size();
        char val = brd[rowIndex][colsIndex];
        for (int i{}; i < length; ++i)
        {
            if (i != colsIndex && brd[rowIndex][i] == val)
                return false;
        }
        return true;
    }
    bool checkCols(vector<vector<char>> &brd, int rowIndex, int colsIndex)
    {
        int length = brd.size();
        char val = brd[rowIndex][colsIndex];
        for (int i{}; i < length; ++i)
        {
            if (i != rowIndex && brd[i][colsIndex] == val)
            {
                return false;
            }
        }
        return true;
    }
    bool checkBox(vector<vector<char>> &brd, int rowIndex, int colsIndex)
    {
        char value = brd[rowIndex][colsIndex];
        int startRwIndex = (rowIndex / 3) * 3;
        int startClsIndex = (colsIndex / 3) * 3;
        for (int i{startRwIndex}; i < startRwIndex + 3; ++i)
        {
            for (int j{startClsIndex}; j < startClsIndex + 3; ++j)
            {
                if (!(i == rowIndex && j == colsIndex) && brd[i][j] == value)
                    return false;
            }
        }
        return true;
    }

public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        int length = board.size();
        for (int i{}; i < length; ++i)
        {
            for (int j{}; j < length; ++j)
            {
                if (board[i][j] != '.')
                {
                    bool rowCheck = checkRow(board, i, j);
                    bool colCheck = checkCols(board, i, j);
                    bool boxCheck = checkBox(board, i, j);
                    if (!rowCheck || !colCheck || !boxCheck)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};