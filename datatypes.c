#include<stdio.h>

void main() {
	short vshort = 32676;
	unsigned short ushort = 65535;
	int vint = 2147483647;
	unsigned int uint = 4147483647;
	long vlong = 3454353l;
	long long vllong = 23423;
	float vfloat = 2.2f;
	double vdouble = 2.2F;
	long double ldouble = 232.22F;
	char vchar = 'A';
	unsigned char uchar = 'A';
	unsigned char * name  = "Deepak";

	printf("Short: %hd""\n", vshort);
	printf("Unsigned short: %hu""\n", ushort);
	printf("Integer: %d""\n", vint);
	printf("Unsigned integer: %u""\n", uint);
	printf("Long: %ld""\n", vlong);
	printf("Long Long: %lld""\n", vllong);
	printf("Float: %.1f""\n", vfloat);
	printf("Double: %.1F""\n", vdouble);
	printf("Long double: %.2LF""\n", ldouble);
	printf("Char: %c""\n", vchar);
	printf("Unsigned char: %hhu""\n", uchar);
	printf("Unsigned char: %s""\n", name);
	
}
