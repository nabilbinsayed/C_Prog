#include <stdio.h>
void fact(int n, int r, int nr, int *factn, int *factr, int *factnr)
{
  *factn=1; *factr=1; *factnr=1; 
  for(int i=1; i<=n; i++) *factn=*factn*i; 
  for(int i=1; i<=r; i++) *factr=*factr*i; 
}