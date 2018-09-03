#include<stdio.h>
int main(int argc,char* argv[])
{
    int counter;
    const char *k;
    const char *t;
    printf("Program Name Is: %s",argv[0]);
    if(argc==1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    if(argc>=2)
    {
        printf("\nNumber Of Arguments Passed: %d",argc);
        printf("\n----]Arguments----");
        for(counter=0;counter<argc;counter++)
           // printf("\nargv[%d]: %s",counter,argv[counter]);
	    
	    k=argv[counter];
	    printf("\n%s",k);
	    printf("\n");
	    t=argv[counter];
	    printf("\n%s",t);
	    printf("\n");
	    
    }
    return 0;
}
