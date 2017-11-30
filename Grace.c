#include<stdio.h>
#define FT1 "#include<stdio.h>%1$c#define FT1 %2$c%4$s%2$c%1$c#define FT2(x)int main(){FILE*f=fopen(x, %2$cw+%2$c); fprintf(f,FT1,10,34,9,FT1); fclose(f);}%1$c#define FT3%1$c/*%1$c%3$cc1%1$c*/%1$cFT2(%2$cGrace_kid.c%2$c)%1$c"
#define FT2(x)int main(){FILE*f=fopen(x, "w+"); fprintf(f,FT1,10,34,9,FT1); fclose(f);}
#define FT3
/*
	c1
*/
FT2("Grace_kid.c")
