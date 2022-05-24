// Kevin Murillo
//excersise 2


#include "stdafx.h"
#include <iostream>


using namespace std;
/*
Create the algorithm (pseudo-code) that will ask the user to choose what kind of
conversion he/she likes to do (pounds to kilograms or kilograms to pounds).
There are 2.2046 pounds in a kilogram, 1000 grams in a kilogram, and 16 ounces in a
pound.
If the first option was selected, enter a weight in pounds and ounces and outputs the
equivalent weight in kilograms and grams or to enter 0 if wants to find out the max, the
min and the average of the weights the user enter as far.

If the second option was selected, enter a weight in kilograms and grams and outputs
the equivalent weight in pounds and ounces or to enter 0 if wants to find out the max,
the min and the average of the weights the user enter as far.

Include a loop that lets the user repeat this computation for new input values until the
user says he or she wants to end the program (the 3th option of the main menu).
*/


int main()
{
	char ans = 'y';
	int convert;
	
	do {
		cout << "Welcome to convertor\n";
		cout << "Please select one of the conversion belows to proceed\n";
		cout << "Press 1 to convert pounds and ounces to kilograms and grams\n";
		cout << "Press 2 to convert kilograms and grams to pounds and ounces\n";
		cout << "Press 3 to exit\n";
		cin >> convert;

		system("cls");
		 
		switch (convert)
		{
		case 1:
		{



			double kilog, max, min, gram, max2, min2, n1, n2, sum2 = 0, sum1 = 0,averagekilo = 0, averagetotal , averagegram = 0, averagetotalgram;
			char ans = '0';
		
			cout << "Please give me the pounds and ounces\n";
			cout << "Pounds: ";
			cin >> n1;
			kilog = n1 / 2.2;
			max = kilog;
			min = kilog;
			cout << "Ounces: ";
			cin >> n2;
			gram = 28.35 * n2;			// Formula for obtain gram
			max2 = gram;		//maximum
			min2 = gram;		// minimun
			sum2 += gram;	//sum  of gram
			sum1 += kilog; //sum of kilog
			averagegram = averagegram + 1;
			averagekilo = averagekilo + 1;
			do {
				cout << "Please enter other pounds and ounces or if you want to quit press 0 or a negative number\n";
				cout << "Pounds: ";
				cin >> n1;
				kilog = n1 / 2.2; // formula for pounds to kilog
				if (kilog > max)
				{
					max = kilog;
				}
				if (kilog < min &&  kilog>0)
				{
					min = kilog;
				}
				sum1 += kilog; // formula for average total sum
			
				cout << "Ounces: ";
				cin >> n2;

				gram = n2 * 28.35; // formula for ounces to gram

				if (gram > max2)
				{
					max2 = gram;
				}
				if (gram < min2 &&  gram>0)
				{
					min2 = gram;
				}				sum2 += gram; // formula for average total sum
				averagegram = averagegram + 1;
				averagekilo = averagekilo + 1;
			} while (kilog, gram > 0);
			averagegram = averagegram - 1;
			averagekilo = averagekilo - 1;

			averagetotalgram = sum2 / averagegram;
			averagetotal = sum1 / averagekilo;

			cout << "\n";
			cout << "average KG: " << averagetotal << "	Average G: " << averagetotalgram;
			cout << "\n";

			cout << min << " is your lower number that you put to convert to KG \n";
			cout << "\n";
			cout << max << " is your bigger number that you put to convert to KG \n";
			cout << "\n";
			cout << min2 << " is your lower number that you put to convert to G \n";
			cout << "\n";
			cout << max2 << " is your bigger number that you put to convert to G \n";
			cout << "\n";
			cout << "And\n";
			cout << "This is your total sum " << sum1 << " on KG\n";

				cout << "This is your total sum " << sum2 << " on G\n";
		}//close of case 1
		break;

		case 2:
		{ double pound, max, min, Ounce, max2, min2, n1, n2, sum1=0,sum2=0, averagepound = 0, averagetotal, averageounce = 0, averagetotalounce;
		char ans = '0';
		
		cout << "Please give me the kgs and gs\n";
		cout << "Kilograms :";
		cin >> n1;
		pound = n1 * 2.2; // formula for pounds to grams
		max = pound;
		min = pound;
		cout << "Grams : ";
		cin >> n2;
		Ounce = n2 * (1 / 28.35); // formula for grams to ounces
		max2 = Ounce;
		min2 = Ounce;
		sum1 += pound;
		sum2 += Ounce;		
		averageounce = averageounce + 1;
		averagepound = averagepound + 1;

		do {
			cout << "Please enter kilograms and grams or if you want to quit press 0 or a negative number\n";
			cout << "Kilograms: ";
			cin >> n1;

			pound = n1 * 2.2; // formula for pounds to grams

			if (pound > max)
			{
				max = pound;
			}
			if (pound < min &&  pound>0)
			{
				min = pound;
			}		sum1 += pound; // formula for average
			cout << "grams: ";
			cin >> n2;

			Ounce = n2 *(1 / 28.35);  // formula for grams to ounces
			
			if (Ounce > max2)
			{
				max2 = Ounce;
			}
			if (Ounce < min2 &&  Ounce>0)
			{
				min2 = Ounce;
			}
			sum2 += Ounce; // formula for average total sum
			averageounce = averageounce + 1;
			averagepound = averagepound + 1;
		} while (pound, Ounce > 0);
		averageounce = averageounce - 1;
		averagepound = averagepound - 1;
		
		averagetotalounce = sum2 / averagepound;
		averagetotal = sum1 / averageounce;

		cout << "\n";
		cout << "average Pounds: " << averagetotal << "	Average ounces: " << averagetotalounce;
		cout << "\n";

		cout << min << " is your lower number that you put to convert to Pounds \n";
		cout << "\n";
		cout << max << " is your bigger number that you put to convert to pounds \n";
		cout << "\n";
		cout << min2 << " is your lower number that you put to convert to ounces\n";
		cout << "\n";
		cout << max2 << " is your bigger number that you put to convert to ounces \n";
		
		cout << "And\n";
		cout << "This is your total sum " << sum1 << " on Pounds\n"; //this is to obtains the average

		cout << "This is your total sum " << sum2 << " on Ounces\n";
		}// close of case 2
		break;
		case 3:
		{return 0;
		}// end of case 3
		default:
			return 0;
		} //end of switch 
		cout << " \n";
		cout << " If you want to know another convertion, press Y \n";
		cin >> ans; 
	}//end of the first do
	while (ans == 'y' || ans == 'Y');



	system("pause");
	return 0;
}

