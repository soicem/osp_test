#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

enum{Add=1, Minus, Multi, Divide, Exit};

int main(int argc, char ** argv)
{
	if(argc < 4){
		printf("More arguments are needed.\n");
	} else if(argc > 4){
		printf("Too many argumented supplied.\n");
	}
	if(argc != 4){
		printf("--------------The first argv[0] is file name:\"%s\"\n", argv[0]);
		printf("Please provide argv[1], Argv[2] and argv[3] for this program.\n");
		printf("argv[1]: the type of operator\n");
		printf("type: 1 for +, 2 for -, 3 for *, for /, 5 for quit\n");
		if(argc < 4)
			printf("argv[2] and argv[3]: input values\n");
		return 0;
	}

	double val1, val2;
	int select;
	select = atoi(argv[1]);
	val1 = atof(argv[2]);
	val2 = atof(argv[3]);
	double result;
	switch(select)
	{
		case Add:
		{
			result=Addfunc(val1,val2);
			break;
		}
		case Minus:
		{
			result=Minusfunc(val1,val2);
			break;
		}
		case Multi:
		{
			result=Multifunc(val1,val2);
			break;
		}
		case Divide:
		{
			result=Dividefunc(val1,val2);
			break;
		}
		case Exit:
		{
			printf("Quit the program...\n");
			printf("argv[2] and argv[3]: input values\n");
			return 0;
		}
		default:
		{
			break;
		}
	}
	printf("Result value: %lf\n", result);
	return 0;
}

