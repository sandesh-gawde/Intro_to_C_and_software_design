#include <stdio.h>

void main(){
int i=0;
char *s="This is for a while loop";
//printf ("Starting loop\n");
while (s[i]!='\0'){
printf ("%c",s[i++]);
}
}
