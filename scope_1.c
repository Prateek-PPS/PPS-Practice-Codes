#include <stdio.h>
int var = 60;
void func()
{
	printf("%d\n", var);
}
int main()
{
	int var = 20;
    printf("Inside main = %d\n", var);
    {
        //int var = 45;
        printf("Inside main = %d\n", var);
    }
    func();
	return 0;
}


