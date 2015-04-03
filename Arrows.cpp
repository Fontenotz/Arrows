#include <iostream.h>
#include <conio.h>

int main()
{
	char input;
	input=getch();
	if (input==72)
	cout<< "Up arrow key"<<endl;
	else if (input==80)
	cout<< "Down arrow key"<<endl;
	else if (input==75)
	cout<< "Left arrow key"<<endl;
	else if (input==77)
	cout<< "Right arrow key"<<endl;
	else 
	main();

	return 0;
}

