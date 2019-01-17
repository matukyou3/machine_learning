/*****************************************************/
/*              selectline.c                         */
/*入力行のNの倍数を抽出                              */
/*使い方                                             */
/*$./selectline (Number) < (Input file) > (Output file)*/
/*****************************************************/


#include<stdio.h>
#include<stdlib.h>

#define TEXTLENGTH 4096


int main(int argc, char*argv[])
{
    char text[TEXTLENGTH];
    int n;
    int i=1;

    if(argc!=2)
    {
        fprintf(stderr, "Use $./selectline (number) < Input file > Output file\n");
        exit(1);
    }

    if((n=atoi(argv[1])) <1)
    {
        fprintf(stderr, "Use $./selectline (number) < Input file > Output file\n");
        exit(1);
    }



    while(fgets(text, TEXTLENGTH, stdin) !=NULL)
    {
        if(i % n ==0)
        {
            printf("%s", text);
        }
        ++i;
    }
    return 0;
}


