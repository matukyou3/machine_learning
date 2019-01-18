#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TEXTLENGTH 4096
#define DELIM ","


int main(int argc, char*argv[])
{
    int n;
    int i;
    char text[TEXTLENGTH];
    double value;
    char * field;

    if(argc!=2)
    {
        fprintf(stderr,"$./cutfield (number) <Input file");
        exit(1);
    }

    if((n=atoi(argv[1])) <1)
    {
        fprintf(stderr,"error, N is not number");
        exit(1);
    }
    while(fgets(text,TEXTLENGTH,stdin)!=NULL)
    {
        field = strtok(text,DELIM);
        for(i =1;i<n;++i)
        {
            if((field = strtok(NULL,DELIM))==NULL)
            {
                fprintf(stderr,"not field\n");
                exit(1);
            }
        }

        if(sscanf(field,"%lf",&value)==1)
        {
            printf("%lf\n",value);
        }
    }
     return 0;
}
    

