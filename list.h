struct list			//array based list
{
	int elements[100];		// array
	int last;						// last element index
};

//---------------Functions for list------------///

int END(struct list L);
void INSERT(int x,int p,struct list L);
//int DELETE(int p,struct list L);
char RETRIEVE(int p,struct list L);


//-------------Common functions--------------///

void MAKENULL_L(struct list L);
int SIZE(struct list L);
