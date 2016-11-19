
#include <stdio.h>


int main()
{
        int i,x,silnia=1;
        printf("\n Podaj liczbę ziomek XD: ");
        scanf("%d",&x);
        for(i=1;i<=x;i++)
                silnia=silnia*i;
        printf("\n %d! = no to jest przecież %d XDDD\n",x,silnia);
        return 0;
}
