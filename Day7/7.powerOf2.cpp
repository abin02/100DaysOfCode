class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
// Using bitwise operator
class Solution1
{
public:
    bool isPowerOfTwo(int n)
    {
        // return n > 0 && not (n & n - 1);
        if (n <= 0)
        {
            return false;
        }
        else if ((n & n - 1) == 0)
        {
            return true;
        }
        return false;
    }
};