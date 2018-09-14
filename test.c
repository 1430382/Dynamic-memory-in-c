#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#define for_loop(start, end, incr) for(i = start; \
                                        i < end;  \
                                         i += incr)

int x,T,k,t,counter,b=0,i=0,temp=0,v;
char *q,*p1;
size_t K;
//
/*
VALUES OF T: 2,3,4,5,6;
VALUES OF K: 3,4,5,6,7,8,9,10;
VALUE OF V: <=1000;
*/
/////////////
int* vV;

int *getVector(int n)  {
int *m;
    m = (int *)malloc(n * sizeof(int));
    if (!m){ fprintf(stderr,"Vector Memory error!\n");exit(-1);}
    return m;
}
//
void freeMemory()
{
int i;
free(vV); vV=NULL;
}
//
int allSubsets(int k, int t, int *v)
{
	auto w=0;
	for_loop(1,t,1)
	{
		v[i]=i-1;
	}
	if(k==t)
	{
		w=t;
	}
	else
	{
		w=t;
	}
	while (v[t]!=k || w!=1)
	{
		v[t]=v[t]+1;
		if (v[t]=k && w!= 1)
		{
			v[w]=v[w]+1;
		
		for(auto i=0; i<t;i++)
			{
				v[i]=v[i]+1;
			}
		if(v[w]=(k-t+w-2))
		{
			w=w+1;
		}else
		{
			w=t;
		}
		}
	}
}
//
int nextbinomial(int k, int t, int w)
{
	auto b = 1,i=0;
		if ( (k+ 1)< t )
		{
		return 0;
		}
		if((k+1)==t)
		{
			return 1;
		}
		for_loop(i,t,1)
		{
			w *= (k + 1);
			w /= ((k + 1)-t);
    }
    return w;
}
//
int directgtp(int v, int b)
{
	auto a=0;
	for (i = 0; i < b; i += 1)
	{
		a=a+binomial(v,i);
	}
	return a;
}
//
int inversegtp(int a, int b, int *k)
{
	auto f=!b;
	for (i = 0; i < b; i++)
	{
			a=(i/f*a);
			k[i]=a;
			b=binomial(v,i);
			while(b<a)
			{
				b=nextbinomial(v,i,k);
				k[i]=v+1;
			}
			k[i]=a-b;
			f=f/i;
	}
	return k;
}
//
int binomial(int k, int t)
{
    auto b = 1,i=0;
		if( t > k - t )
		{
		        t = k - t;
		}
		for_loop(i,t,1)
		{
			b *= (k - i);
			b /= (i + 1);
    }
    return b;
}
//
int main(int argc,char* argv[])
{
	int arr[v];
	int *p=arr;
	fprintf("Program Name Is: %s\n",argv[0]);
	if(argc>=2)
	{
		fprintf("\nNumber Of Arguments Passed: %d",argc);
		fprintf("\n----Arguments----\n");

	}
	if(strcmp("-v", argv[1]))
		{
		fprintf("The first parameter should be -v\n");
		}
	else
		{
		for(counter=2;counter<argc;counter++)
		{
		long conv = strtol(argv[counter], &q, 10);
		vV=conv;
		K=counter-1;
		fprintf("\nposition[%d], Value of vector: %d\n",counter,vV);
		fprintf("\n");
		b=strtol(argv[counter], &p1, 10);
		x=x+binomial(b,counter);
		}
	fprintf ("Value is : %d \n",x-1);
	EXIT_SUCCESS;
   }
	fprintf("elements in the array: %ld\n",K);
	freeMemory();
	return 0;
}
