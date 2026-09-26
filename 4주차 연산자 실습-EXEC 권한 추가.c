#include <stdio.h>

#define READ 0x01
#define WRITE 0x02
#define EXEC 0x04

int main()
{
	unsigned int permission = READ | WRITE;
	unsigned int result = permission & WRITE;
	permission &= ~WRITE;
	
	printf("%x\n", permission);

    return 0;
}
