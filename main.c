struct table{
		char sysName[15];
		int ecl;
		int pop;
		float orp;
};
struct table *ptr;
void st_populate(struct table *x);
void OutputInit(void); 
int main(void)
	{
    /*Setup Launchpad for Printf & Scanf*/
		OutputInit(); 
		/* Place application code here */
		struct table data[3];
		for (int i=1; i<4; i++)
		{
			ptr = &data[i];
			st_populate(ptr);
			printf("%s, %d, %d, %.2f",data[i].sysName, data[i].ecl, data[i].pop, data[i].orp);
		}
		/*Go in waiting state. Will modify in later labs*/
		while(1);
  }
void st_populate(struct table *x)
{
	printf("Enter System Name:");
	char input_name[20];
	scanf("%s",input_name);
	strcpy(x -> sysName, input_name);
	printf("Enter ECL:");
	int valECL;
	scanf("%d",&valECL);
	x -> ecl = valECL;
	printf("Enter POP:");
	int valPOP;
	scanf("%d", &valPOP);
	x -> pop = valPOP;
	printf("Enter ORP:");
	float valORP;
	scanf("%f",&valORP);
	x -> orp = valORP;
	return;
}
