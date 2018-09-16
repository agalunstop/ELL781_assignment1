#define MAXLENGTH 100

struct list			//array based list
{
	int elements[MAXLENGTH];		// array
	int last;				// last element index
};

void INSERT(int x,int p,struct list *L);         //inserting node into the new_clr list
char RETRIEVE(int p,struct list *L);		 //Retrieving node from the given position
int END(struct list *L);			//return END of list last+1
void MAKENULL_L(struct list *L);		//Initailaizing list to -1
int SIZE(struct list *L);			//return dynamic size of new_clr
