#include<stdio.h>


void arithmetic_operators(){
	int a = 10, b = 10;
	printf(" values a: %d\t b: %d\n",a,b);
	printf("a+b: %d\n",(a+b));
	printf("a-b: %d\n",(a-b));
	printf("a*b: %d\n",(a*b));
	printf("a/b: %d\n",(a/b));
	printf("a%%b: %d\n",(a%b));
	printf("10%%11: %d\n", (10%11));
}

char *printval(int val){
	if(val == 0){
		return "False";
	}else {
		return "True";
	}
}

void logicalOperators() {
	int a  = 2, b = 2, c = 3;
	printf("a: %d, b: %d, c: %d""\n",a, b, c);
	printf("a == 2 && a == b: %s""\n",printval((a==2)&&(a==b)));
	printf("a == c &&  a == b: %s""\n",printval((a==c)&&(a==b)));
	printf("a == c ||  a == b: %s""\n",printval((a==c)||(a==b)));
	printf("!(a == b):%s""\n", printval(!(a==b)));
	printf("(a==b) ^ (b==c): %s""\n", printval((a==b)^(b==c)));
}

void bitwiseOperators() {
	int a = 2, b = 3;
	printf("a<<b: %d""\n",(a<<b));
	printf("b<<a: %d""\n",(b<<a));
	printf("b>>a: %d""\n",(b>>a));

}

void comparisonOperator() { 
	// Also called as Relational operators
	int a = 2, b=3;
	printf("a: %d, b: %d""\n", a, b);
	printf("a>b: %s""\n",printval((a>b)));
	printf("a<b: %s""\n",printval(a<b));
	printf("a==b: %s""\n",printval(a==b));
	printf("a!=b: %s""\n",printval(a!=b));

}

void main() {
	arithmetic_operators();
	comparisonOperator();
	logicalOperators();
	bitwiseOperators();
	
}
