#include <stdio.h>
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main()
{

int n,cont=1, res=0, x;
printf(ANSI_COLOR_CYAN   "\n \tTabla del: "   ANSI_COLOR_RESET);
scanf("%d", &n);
do {
res=n*cont ;

  printf("\n \t%d x %d es %d",  n, cont, res);
cont++;
} while(cont<=10) ;

printf(" \n  \n \tcopyright (©) Grank-Justin");

return 0;
}

