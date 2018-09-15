struct list			//array based list
{
	int maxlength=100;
	char elements[maxlength];
	int last;
	int top;
}

///--------------Functions for stack-----------///
void PUSH(char x, struct list L);
char POP(struct list L);
char TOP(struct list L);
bool EMPTY(struct list L);

//---------------Functions for list------------///

int END(struct list L);
void INSERT(char x,int p,struct list L);
char DELETE(int p,struct list L);
char RETRIEVE(int p,struct list L);


//-------------Common functions--------------///

void MAKENULL(struct list L);
int SIZE(struct list L);
