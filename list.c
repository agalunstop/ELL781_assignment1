include "list.h"





//------End of the list will be return------//

int END(struct list L){
        int *q;
        q=L;
        while(q!=L.elements[L.maxlength+1]){
                q=q+1;
        }
        return q;
}






//------Makes the function to become empty and returns END(L)-----------//

void MAKENULL(struct list L){
        return END(L);
        }






//------Inserts x at postion p in the list, moving elements at p and subsequent elements to higher position.-----------//

void INSERT(char x,int p,struct list L)
{
        int q;
        if(L.last >= L.maxlength ){
                printf("List is full");
        }
        else if(p>L.last+1 || p<0){
                printf("position does not exist");
        }
        else{
                for(q=L.last;q>=p;q--){
                        l.elements[q+1]=L.elements[q];
                        }
                L.last=L.last+1;
                L.elements[p]=x;
        }
}





//-----Delete the element from the list at postion p-------------//

char DELETE(int p,struct list L){
        int q;
        if(p>L.last || p<1){
                printf("position does not exist");
        }
        else{
                L.last=L.last-1;
                for(q=p;q<=L.last;q++){
                        L.elements[q]=L.elements[q+1];
                }
        }
}





//----returns the element at position p in the list-------------//


char RETRIEVE(int p,struct list L){
        int q;
        if(p>L.last || p<1){
                printf("Position doesnot exits");
        }
        else{
                for(q=1;q<=L.last;q++){
                        if(q==p){
                                char x = L.elements[q];
                                return x
                        }
                }
        }
}




//----------------Determines the size of array----------------------//

int SIZE(struct list L){
        int p;
        p=(int)sizeof(L.elements) / sizeof(L.elements[0]);
        return p;
}




//-------------------Implementation as stack-----------------------//

void MAKENULL(struct list L){
        L.top = L.maxlength+1;
        }


bool EMPTY(struct list L){
        if(L.top>L.maxlength)
                return true;
        else
                return false;

}



void PUSH(char x,struct list L){

        if(L.top==0){
        printf("stack is full");
        return;
        }
        else{
        L.top=L.top-1;
        L.elements[L.top]=x;

        }
}





char TOP(struct list L){
        if(EMPTY(L)
                Printf("Stack is empty");

        else
                return(L.elements[L.top]);
}






char POP(struct list s){
        if (EMPTY(L))
                Printf("Stack is empty");
        else
                L.top=L.top+1;
}







	
	
				
