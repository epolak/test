#include "jagmenu.h"

void jagmenu()
{
  char Choice;
  
  do{
   CLR;
   cout << "\t\t\t Jaguar Main Menu\n"
      << "\t\t\t ----------------\n\n\n"
		<< "\t a) Quarterly Sales\n"
		<< "\t b) Histograms\n\n"
		<< "\t q) Exit Program\n\n"
		<< "\t Enter Selection: ";
    cin >> Choice;
	 Choice = tolower(Choice);
	  switch(Choice)
	  {
 	   case 'a':
		CLR;
		cout << "\t\t\t     Quarterly Reports\n"
			 << "\t\t\t     -----------------\n\n\n";
		regionmenu(SALES);
		PAS;
		break;
 	   case 'b':
		CLR;
		cout << "\t\t\t     Histograms of Quarterly Cars Sold\n"
			 << "\t\t\t     ---------------------------------\n\n\n";
		PAS;//regionmenu(HISTO);
		break;
 	   case 'q':
		CLR;
		cout << "\t\t\t     *** Exiting Program ***\n"
			 << "\t\t\t     -----------------------\n\n\n";
		PAS;
		return; //exit(0); // Close Program
		break;
	  }// end of switch
  }while(true);
}