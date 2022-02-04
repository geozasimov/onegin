#include "onegin.h"


int main(int argc, char* argv[]) 
{
	Text text;

	SayGreetings();

	if (GetFileNames(&text, argc, argv) == 0)
	{
		printf("\nCorrect names of files!\n");
	}
	else
	{
		printf("\nIncorrect names of files! Please restart programm again!\n");
		return 1;
	}

	if (ReadFromFile(&text) == WRONG_INPUT_FILE)
	{
		printf("\nIncorrect names of files! Please restart programm again!\n");
		return 1;
	}
	else
	{
		printf("\nThe text has been read!\n");
	}

	MakeString(&text);

	FILE *output_file = OpenFileWrite(&text);

	if (!output_file)
	{
		printf("Output file ERROR\n");
		return 1;
	}

	Sort(&text);
	WriteToFile(&text, output_file);

	CloseFile(output_file);

	MemoryFree(&text);

	SayGoodbye(); 

	return 0;
}





