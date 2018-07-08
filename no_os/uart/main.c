#define GPC0CON		*((volatile unsigned int *)0xE0200060)
#define GPC0DAT		*((volatile unsigned int *)0xE0200064)

int main()
{
	int c;

	puts("UART Test in S5PV210");
	
	while (1)
	{
		c = getchar();	// 从串口终端获取一个字符
		putchar(c);		// 回显
		putchar('\r');
	}
	return 0;
}
