#include "list.h"
#include <stdio.h>

//------Makes the function to become empty-----------//

void MAKENULL_L(struct list *L){
        L->last = -1;
}

//------Inserts x at postion p in the list, moving elements at p and subsequent elements to higher position.-----------//

void INSERT(int x,int p,struct list *L)
{
        int q;
        if(p >= MAXLENGTH || p<0)
		{
                printf("error: position %d does not exist\n",p);
        }
        else
			if(p<=L->last)
			{
        		for(q=L->last;q>=p;q--)		// if position is less than last index
				{
            		L->elements[q+1]=L->elements[q];	// shift all greater than p
            	}
			}
        L->last++;
        L->elements[p]=x;		// insert element to position p
}
//----returns the element at position p in the list-------------//


char RETRIEVE(int p,struct list *L)
{
        int q;
        if(p>L->last || p<0)
		{
                printf("Position doesnot exits");
        }
        else
		{
			return L->elements[p];
		}
}
//----------------Determines the size of array----------------------//

int SIZE(struct list *L){
	return (L->last)+1;
//        int p;
//        p=(int)sizeof(L.elements) / sizeof(L.elements[0]);
//        return p;
}

int END(struct list *L)
{
	return (L->last)+1;
}
