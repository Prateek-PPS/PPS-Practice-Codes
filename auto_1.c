#include <stdio.h>
void main()
{
	func();
    func();
	func();
}
void func()
{
	static int a = 20;
	a++;
	printf("%d \n", a);
	printf("Address of a = %x \n", &a);
}


