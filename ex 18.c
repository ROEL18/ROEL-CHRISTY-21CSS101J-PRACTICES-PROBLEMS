#include

int main()

{

    int A,B,K;

    scanf("%d %d %d",&A,&B,&K);

    if(A>=K)

    printf("%d %d",(A-K),B);

    else if (A<=K)

    printf("%d %d",0,B-(K-A));

 return 0;

}
