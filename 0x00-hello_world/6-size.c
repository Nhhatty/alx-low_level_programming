#include <stdio.h>

int main()
{
	int integerType;
	char charType;
	float floatType;
	long int longType;
	long long int longlongType;

	
	printf("Size of a char: %ld byte(s)\n",
		sizeof(charType));

	printf("Size of an int: %ld byte(s)\n",
		sizeof(integerType));
	
	printf("Size of long int: %ld byte(s)\n",
		sizeof(longType));

	printf("Size of long long int: %ld byte(s)\n",
		sizeof(longlongType));
	
	printf("Size of float: %ld byte(s)\n",
		sizeof(floatType));

	return 0;
}

