#include<stdio.h>
#include<stdlib.h>

#define TEXTLENGTH 4096

int main(int argc,char*argv[])
{
    int n;
    char text[TEXTLENGTH];


    if(argc!=2)
    {
        fprintf(stderr,"Use::$./add_number (start number) \n");
        exit(1);
    }



    n =atoi(argv[1]);


    while(fgets(text,TEXTLENGTH,stdin)!=NULL)
    {
        printf("%d %s",n,text);
        ++n;
    }
    return 0;
}


