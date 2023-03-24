#include <stdio.h>
#include <string.h>

int main()
{
	int row;
	char word[10][30] = { "kingdom","advanced c", "Hello world", "c++ programming" ,
	"python programming", "java programming" , 0};
	row = sizeof(word) / sizeof(word[0]);
	



	wordOutput(word,row);


 

}



wordOutput(char (*word)[30],int row)
{
	int i;
	for (i = 0; *word[i]; i++)
	
	{
		printf("%u : %s\n",word+i ,*(word+i));
	}

	


};