#include

int main()

{

    int U,V;int s; scanf("%2d %2d",&U,&V);

  // if ((U%2==0)||(V%2==0)) s=U*V/2;

   // else

   s=U*V/2+((U%2)*(V%2));

    printf("%d",s);

    return 0;

}
