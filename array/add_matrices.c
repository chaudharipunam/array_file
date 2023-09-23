/*

#include <stdio.h>
int main ()
{
 int n,a;
 scanf("%d",&n);
 int p[n];
 int k[n];
 int r[n];
 for (int i=0; i<n; i++){
  scanf("%d",&p[i]);
 }
 for (int i=0; i<n; i++){
  scanf("%d",&k[i]);
 }
  for (int i=0; i<n; i++){
   r[i]=p[i]+k[i];
 }
 for (int i=0; i<n; i++){
  printf(" %d",r[i]);
 }
 return 0;
}
*/

#include <stdio.h>
int main ()
{
 int n,a;
 printf("enter the number: ");
 scanf("%d",&n);
 int p[n];
 int k[n];
 int r[n];
 for (int i=0; i<n; i++){
  printf("elements of f_arr: ");
  scanf("%d",&p[i]);
 }
 printf("\n");
 for (int i=0; i<n; i++){
  printf("elements of s_arr: ");
  scanf("%d",&k[i]);
 }
  for (int i=0; i<n; i++){
   r[i]=p[i]+k[i];
 }
 printf("\n");
 for (int i=0; i<n; i++){
  printf("addition is %d\n",r[i]);
 }
 return 0;
}

