#include <stdio.h>
#include <stdlib.h>

int main()
{
	float t = 0, f, c, k;
	float k1, f1, c2, f2, c3, k3;
	char s;
	
	printf ("Write temperature value:\n");
	scanf("%f",&t);
	printf("Write temperature scale(c for celsius, k for kelvin, f for fahrenheit) or write r for all conversions:\n");
	scanf("%s",&s);
	
	if (s !='r') {
		
		switch(s) {
			
			case 'c':
			k = t + 273.15;
			f = (t * 1.8) + 32;
			printf("\n%.0f C", t);
			printf("\n%.2f K", k);
			printf("\n%.2f F", f);
			break;
			
			case 'k':
			c = t - 273.15;
			f = (t - 273.15)*1.8 + 32;
			printf("\n%.0f K", t);
			printf("\n%.2f C", c);
			printf("\n%.2f F", f);
			break;
			
			case 'f':
			c = (t - 32)*1.8;
			k = (t - 32)*1.8 + 273.15;
			printf("\n%.0f F", t);
			printf("\n%.2f C", c);
			printf("\n%.2f K", k);
			break;
			
			default:
			printf("\n ERROR");
			break;
		}
		
	} else {
		
	        k1 = t + 273.15;
	        f1 = t + 273.15;
	        printf("\n%.0f C", t);
			printf("\n%.2f K", k1);
			printf("\n%.2f F", f1);
			
			c2 = t - 273.15;
			f2 = (t - 273.15)*1.8 + 32;
			printf("\n%.0f K", t);
			printf("\n%.2f C", c2);
			printf("\n%.2f F", f2);
			
			c3 = (t - 32)*1.8;
			k3 = (t - 32)*1.8 + 273.15;
			printf("\n%.0f F", t);
			printf("\n%.2f C", c3);
			printf("\n%.2f K", k3);
	}
	
	return 0;
}

