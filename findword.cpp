#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
	char puzzle[9][9]={{'a','d','u','n','w'},
					   {'s','w','d','r','a'},
					   {'y','u','c','p','v'},
					   {'t','t','e','m','a'},
					   {'k','f','h','r','x'}};
					   
	string kata;
	int len_kata,pos;
	int in_x[100];
	int in_y[100];
	bool valid;
	int direction;
	int arah,sum;
	
			void menampilkanpuzlle(){
			for(int i=0;i<=5;i++)
		{		
				for(int j=0;j<=5;j++)
			{
					cout<<setw (5)<<puzzle[i][j];
			}		
			cout<<endl;	
	}	
		}
		


