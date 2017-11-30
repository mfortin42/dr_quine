#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define str "#include<stdio.h>%1$c#include<stdlib.h>%1$c#include<string.h>%1$c#define str %2$c%3$s%2$c%1$cint main(){%1$cint i = %4$i;%1$cif(strcmp(__FILE__, %2$cSully.c%2$c)!=0) i--; if(i<0)return(0); char fl[100]; char fl2[100]; char fl3[100]; sprintf(fl,%2$cSully_%5$s.c%2$c,i); FILE*f=fopen(fl,%2$cw+%2$c); fprintf(f,str,10,34,str,i,%2$c%5$s%2$c,%2$c%6$s%2$c); fclose(f); sprintf(fl2,%2$cgcc -Wall -Werror -Wextra -o %6$s%5$s %6$s%2$c,%2$cSully_%2$c,i,fl); system(fl2); if(i==0)return(0); sprintf(fl3,%2$c./%6$s%5$s%2$c,%2$cSully_%2$c,i); system(fl3);}%1$c"
int main(){
int i = 5;
if(strcmp(__FILE__, "Sully.c")!=0) i--; if(i<0)return(0); char fl[100]; char fl2[100]; char fl3[100]; sprintf(fl,"Sully_%i.c",i); FILE*f=fopen(fl,"w+"); fprintf(f,str,10,34,str,i,"%i","%s"); fclose(f); sprintf(fl2,"gcc -Wall -Werror -Wextra -o %s%i %s","Sully_",i,fl); system(fl2); if(i==0)return(0); sprintf(fl3,"./%s%i","Sully_",i); system(fl3);}
