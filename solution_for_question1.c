#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fr1,*fr2,*fw1,*fw2,*fw3;
	fr1=fopen("inputFile1.txt","r");
	fr2=fopen("inputFile2.txt","r");
	fw1=fopen("outputFile1.txt","w");
	fw2=fopen("outputFile2.txt","w");
	fw3=fopen("outputFile3.txt","w");
	int n=0,array[1000],i=0;
	if (fr1 == NULL || fr2==NULL)
    {
        	printf("Error in Reading File\n");
        	exit (0);
	while(1)
	{
      if(fscanf(fr1,"%d", &array[i++]) == EOF) break;
	  n++;
	}
	i--;
	while(1)
	{
      if(fscanf(fr2,"%d", &array[i++]) == EOF) break;
	  n++;
	}
	for(i=0;i<n;)
	{
		if(i<n)
			fprintf(fw1,"%d ",array[i++]);
		if(i<n)
			fprintf(fw2,"%d ",array[i++]);
		if(i<n)
			fprintf(fw3,"%d ",array[i++]);
	}
}

