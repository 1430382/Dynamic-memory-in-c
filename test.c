#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#define for_loop(start, end, incr) for(i = start; \
                                        i < end;  \
                                         i += incr)

int main(int argc,char* argv[])
{
	int counter,b,k,t,arr[t], i=0;
	char *p,*p1;	
	printf("Program Name Is: %s\n",argv[0]);
	if(argc>=2)
	{
		printf("\nNumber Of Arguments Passed: %d",argc);
		printf("\n----Arguments----\n");
        	//for(counter=0;counter<argc;counter++)
           	// printf("\nargv[%d]: %s",counter,argv[counter]);
	}
	if(strcmp("-t", argv[1]))
		{
		printf("The first parameter should be -t\n");
		}
	else{
		long conv = strtol(argv[2], &p, 10);
		t=conv;
		printf("Value of t :%d",t);
		printf("\n");
	}
	if(strcmp("-k", argv[3]))
		{
		printf("The second parameter should be -k\n");
	}
	else{
		long conv1 = strtol(argv[4], &p1, 10);
		k = conv1;
		printf("Value of k :%d",k);
		printf("\n");			
	}
	for_loop(i, t, 1)
	{
		*p=i;	
		printf("%d",*p);
		printf("\n");
	}
	
	printf("\n");
	b=1;
	for_loop(1,t,1)
	{
		b=(b*(k-i+1))/i;
	}
	printf("result %d",b);
    return 0;
}
