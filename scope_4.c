#include <stdio.h>
int main()
{
    int x = 5, y = 10;
    {
        y = x + 5;    // shadows outer y → y = 10
        printf("x = %d, y = %d\n", x, y);
        {
            int x = y + 5;  // shadows outer x → x = 15
            y = x + 5;      // modifies inner y (10 → 20)
            printf("x = %d, y = %d\n", x, y);
        }
        printf("x = %d, y = %d\n", x, y);
    }
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
