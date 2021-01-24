#include<stdio.h>
int main()
{
    int i,j;
    int space =6;
    for(i=0;i<=6;i++)
    { 
        
        for ( j = 0; j <=space; j++)
        {
            /* code */printf(" ");
        }
        for(j=0;j<=i;j++)
	    {
		    printf("01");
	    }
		
	    printf("\n");
	    space--;	/* decrement one space after one row*/
    }
    return 0;
}
    