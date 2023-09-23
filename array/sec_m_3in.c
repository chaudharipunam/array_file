#include <stdio.h>
int  main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int m,sm,sec_m;
    if(a>b)
    {
      m=a;
      sm=b;
    }
    else
    {
      m=b;
      sm=a;
    }
    if(m>c)
    {
      if(c>sm)
      {
        printf("%d",c);
      }
      else
      {
        printf("%d",sm);
      }
    }
    else
    {
    printf("%d",m);
    }
    return 0;
}
