#include <stdio.h>

int Sqrt(int x)
{
    int low = 0;
    int high = x;
    int ans = 0;
    while (low <= high)
    {
        int mid = (low+high)/2;

        if(mid*mid == x) return mid;
        else if(mid*mid > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
    
}

int main()
{
    printf("%d",Sqrt(25));
    return 0;
}