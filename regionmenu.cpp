#include "jagmenu.h"

void regionmenu(int type)
{
 ifstream input, input2;
 int count = 0;
 char models[MROW][MCOL];
 char buffer[LINE];
 int salesUS[ROW][COL];
 char userChoice;

 //Initialize US Sales Matrix
 for(int row = 0; row < ROW; row++)
  for(int col = 0; col < COL; col++)
  salesUS[row][col] = 0;

 input.open("C:\\Users\\D01013517\\Documents\\Visual Studio 2010\\Projects\\quiz6\\Debug\\jaguarModels.txt");

 if(!input)
 {
   cerr << "Error opening input file jaguarModels.txt...\n";
   PAS;
   exit(1);// error opening input file
 }
 // Load the Vehicle names from file
 while(!input.eof())
 {
   input.getline(buffer, LINE, '\n');
   strncpy(models[count], buffer, MCOL);
   models[count][MCOL - 1] = '\0';
   count++;
 }
 input.close();
 //Read US sales from file

 input2.open("C:\\Users\\D01013517\\Documents\\Visual Studio 2010\\Projects\\quiz6\\Debug\\jaguarUS.txt");
 
 if(!input2)
 {
   cerr << "Error opening file jaguarUS.txt file...\n";
   PAS;
   exit(1); //error opening input file
 }
 //Read sales into matrix 4 X 11
 for(int row = 0; row < ROW - 1 && !input2.eof(); row++)
  for(int col = 0; col < COL - 1 ; col++)
  {
    input2.getline(buffer, LINE, ',');
	salesUS[row][col] = atoi(buffer);
  }
  input2.close();
  //sum each US row
  for(int row = 0; row < ROW - 1; row++)
	for(int col = 0; col < COL - 1; col++)
		salesUS[row][COL-1] += salesUS[row][col];
  //sum each US col
  for(int col = 0; col < COL; col++)
	for(int row = 0; row < ROW - 1; row++)
	  salesUS[ROW-1][col] += salesUS[row][col];

  for(int row = 0; row < ROW; row++)
  {
	for(int col = 0; col < COL; col++)
		cout << salesUS[row][col] << " ";
   cout << endl;
  }
}