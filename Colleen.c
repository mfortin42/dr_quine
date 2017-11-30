#include<stdio.h>
/*
	c1
*/
void hello(){}
int main(){char*s="#include<stdio.h>%1$c/*%1$c%2$cc1%1$c*/%1$cvoid hello(){}%1$cint main(){char*s=%3$c%s%3$c;printf(s,10,9,34,s);%1$c/*%1$c%2$cc2%1$c*/%1$chello();%1$c}%1$c";printf(s,10,9,34,s);
/*
	c2
*/
hello();
}
