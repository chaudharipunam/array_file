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


#include <stdio.h>
int main ()
{
 int n,a,m;
 printf("rows is: ");
 scanf("%d",&n);
 printf("columns is: ");
 scanf("%d",&m);
 int p[n][m];
 int r[n];
 for (int i=0; i<n; i++){
   for (int j=0; j<n; j++){
     scanf("%d",&p[i]);
     scanf("%d",&p[j]);
   }
   printf("\n");
 }
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

*/

#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,p,q,s,t;
	    scanf("%d%d",&x,&y);
	    if(x>=1 && x<=10){
	        p=1;
	        q=1;
	    }
	    else if(x>=11 && x<=20){
	        p=2;
	        q=2;
	    }
	    else if(x>=21 && x<=30){
	        p=3;
	        q=3;
	    }
	    else if(x>=31 && x<=40){
	        p=4;
	        q=4;
	    }
	    else if(x>=41 && x<=50){
	        p=5;
	        q=5;
	    }
	    else if(x>=51 && x<=60){
	        p=6;
	        q=6;
	    }
	    else if(x>=61 && x<=70){
	        p=7;
	        q=7;
	    }
	    else if(x>=71 && x<=80){
	        p=8;
	        q=8;
	    }
	    else if(x>=81 && x<=90){
	        p=9;
	        q=9;
	    }
	    else if(x>=91 && x<=100){
	        p=10;
	        q=10;
	    }
	    if(x<y){
	        s=q-p;
	        printf("%d\n",s);
	    }
	    else if(x>y){
	        t=p-q;
	        printf("%d\n",t);
	    }
	}
	return 0;
}

