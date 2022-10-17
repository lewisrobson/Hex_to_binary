#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* take input as string for each [i] do function that checks value */

void convert(char *input)
{
//printf("hello inside function i was passed %c\n", *input);
switch (*input)
{
	case '0':
	printf("0000");
	break;


	
	case '1':
	printf("0001");
	break;
	
	
	case '2':
	printf("0010");
	break;
	
	
	case '3':
	printf("0011");
	break;
	
	
	case '4':
	printf("0100");
	break;
	
	
	case '5':
	printf("0101");
	break;
	
	
	case '6':
	printf("0110");
	break;

	
	case '7':
	printf("0111");
	break;
	
	
	case '8':
	printf("1000");
	break;
	

	case '9':
	printf("1001");
	break;
	
	
	case 'A':
	case 'a':
	printf("1010");
	break;
	
	
	case 'B':
	case 'b':
	printf("1011");
	break;
	
	
	case 'C':
	case 'c':
	printf("1100");
	break;
	
	
	case 'D':
	case 'd':
	printf("1101");
	break;
	
		
	case 'E':
	case 'e':
	printf("1110");
	break;
			
	case 'F':
	case 'f':
	printf("1111");
	break;
	
}
}
int main()

{
printf("enter hex: ");
char hex[100];
scanf("%s", hex);
int hexlen=strlen(hex);
//printf("your hex code is %s\n", hex);
//printf("your hex is a length of %d\n", hexlen);

int i;
for(int i = 0; i < hexlen; i++)
{
//printf("item %d is char %c\n", i, hex[i]);
convert(&hex[i]);
}
printf("\n\n");
	return 0;
}
