#include <stdio.h>

int main()
{
	int READ = 0x01;
	int WRITE = 0x02;
	int EXEC = 0x04;
	
	unsigned int permission = READ | WRITE;
	permission |= EXEC;
	
	printf("%x\n", permission);

    return 0;
}
