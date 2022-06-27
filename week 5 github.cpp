
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

//constant variables that will be used for calculating the pricing of total surfboards based on size 
const int Small = 175;
const int Medium = 190;
const int Large = 200;
const int XXXSmall = 100;
const char star = '*';

//multiple functions shown here for prompt 
void showUsage();
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXXXSmall);
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int& iTotalXXXSmall);
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int& iTotalXXXSmall);

//This part of the code shows the beginning with the program usage code  
void showUsage()
{
	cout << setw(59) << setfill(star) << star << endl;
	cout << setfill('*') << setw(5) << star << " Welcome to my Johny Utah's PointBreak Surf Shop " << setfill('*') << setw(5) << star << endl;
	cout << setw(59) << setfill(star) << star << endl;
	cout << endl;
	cout << endl;
	cout << "To show program usage 'S'" << endl;
	cout << "To purchase a surfboard press 'P'" << endl;
	cout << "To display current purchases press 'C'" << endl;
	cout << "To display total amount due press 'T'" << endl;
	cout << "To quit the program press 'Q'" << endl << endl;

}

//These would be the required variables needed in order to run the program with any number or characters the user inputs 
int main()
{
	int iTotalSmall = 0;
	int iTotalMedium = 0;
	int iTotalLarge = 0;
	int iTotalXXXSmall = 0;
	char userinput = ' ';
	char program = true;

	//this would be the loop that allows the user to choose what kind of surfboards they wanted 
	showUsage();
	while (program)
	{
		
		cout << "Please enter selection: ";
		cin >> userinput;
	
		if (userinput == 's')
		{
			showUsage();
		}
		else if (userinput == 'p')
		{
			MakePurchase(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXXXSmall);
		}
		else if (userinput == 'c')
		{	
			DisplayPurchase(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXXXSmall);
		}
		else if (userinput == 't')
		{
			DisplayTotal(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXXXSmall);
		}
		else if (userinput == 'q')
		{
			program = false;
		}
		else
		{
		}
		cout << endl;
	}
	cout << "Thank you" << endl;
	return 0;
}

//this would be the function in order to make a purchase for surfboards 
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXXXSmall)
{
	int quantityNumber; //quantity number would be how many they want to put 
	char type;//type would b the size of the surfoabrd 
	cout << "Please enter the quantity and type (S=small, M=medium, L=large, XXXS= Extra Small) of surfboard you" <<
		endl << "would like to purchase: ";
	cin >> quantityNumber >> type;

	if (type == 's')
		iTotalSmall = iTotalSmall + quantityNumber;
	if (type == 'm')
		iTotalMedium = iTotalMedium + quantityNumber;
	if (type == 'l')
		iTotalLarge = iTotalLarge + quantityNumber;
	if (type == 'xxxs')
		iTotalXXXSmall = iTotalXXXSmall + quantityNumber;
}

//this would be the function to show the total number of surfboards purchased
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXSmall)
{
	if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXSmall)
		cout << "No purchases made yet." << endl << endl;
	else
	{
		if (iTotalSmall != 0)
			cout << "The total number of small surfboards is " << iTotalSmall << endl;

		if (iTotalMedium != 0)
			cout << "The total number of medium surfboards is " << iTotalMedium << endl;

		if (iTotalLarge != 0)
			cout << "The total number of large surfboards is " << iTotalLarge << endl;

		if (iTotalXXXSmall != 0)
			cout << "The total number of extra small surfboards is" << iTotalXXXSmall << endl;
	}
}

//this would be the function to display the total number of surfboards with the complete cost of it
void DisplayTotal(int iTotalSmall, int iTotalMedium, int iTotalLarge, int iTotalXXXSmall)
{

	if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXSmall)//this shows if the user inputs c or t without purchasing anything 
		cout << "No purchases made yet." << endl << endl;
	else
	{
		if (iTotalSmall != 0)
			cout << "The total number of small surfboards is " << iTotalSmall <<
			" at a total of $" << (iTotalSmall * Small) << endl;

		if (iTotalMedium != 0)
			cout << "The total number of medium surfboards is " << iTotalMedium <<
			" at a total of $" << (iTotalMedium * Medium) << endl;

		if (iTotalLarge != 0)
			cout << "The total number of large surfboards is " << iTotalLarge <<
			" at a total of $" << (iTotalLarge * Large) << endl << endl;

		if (iTotalXXXSmall != 0)
			cout << "The total number of extra small surfboards is " << iTotalXXXSmall <<
			" at a total of $" << (iTotalXXXSmall * XXXSmall) << endl << endl;
	}
}


