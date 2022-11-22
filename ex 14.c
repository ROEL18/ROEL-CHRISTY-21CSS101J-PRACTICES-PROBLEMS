#include

int main()

{

    int x1,x2,v1,v2;

    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);

   int m=x1,n=x2;

   if(x2>x1

  )

  {if (v2>v1){

      printf("NO");

  }

  else {

      for (int i=0;i<10000;i++){

          m=m+v1;

          n=n+v2;

          if(m==n){

              printf("YES");

              break;

          }

      }

  if (m!=n)

  printf("NO");

  }

  }

               return 0;

}
