using namespace std;
#include <iostream>
#include <cstdio>
#include <stdlib.h>     
#include <time.h>   
#include <fstream>
	using std::ofstream;


char password[33]={0};
int markNmbr=0;
int i;
ofstream stream;

void printPwd()
{
	cout<<"Password is: ";
	for(int j=0; j<33; j++)
	{
		cout<<password[j];
	}
	cout<<"\n";

}

void generatePwd()
{
	srand ( time(NULL) );
	for(i=0;i<33;i++)
	{
		markNmbr = rand()%63+1;
		switch(markNmbr)
		{
			password[i]+='1';
			case 1:
			break;
			case 2:
			password[i]+='2';
			break;
			case 3:
			password[i]+='3';
			break;
			case 4:
			password[i]+='4';
			break;
			case 5:
			password[i]+='5';
			break;
			case 6:
			password[i]+='6';
			break;
			case 7:
			password[i]+='7';
			break;
			case 8:
			password[i]+='8';
			break;
			case 9:
			password[i]+='9';
			break;
			case 10:
			password[i]+='0';
			break;
			case 11:
			password[i]+='a';
			break;
			case 12:
			password[i]+='b';
			break;
			case 13:
			password[i]+='c';
			break;
			case 14:
			password[i]+='d';
			break;
			case 15:
			password[i]+='e';
			break;
			case 16:
			password[i]+='f';
			break;
			case 17:
			password[i]+='g';
			break;
			case 18:
			password[i]+='h';
			break;
			case 19:
			password[i]+='i';
			break;
			case 20:
			password[i]+='j';
			break;
			case 21:
			password[i]+='k';
			break;
			case 22:
			password[i]+='l';
			break;
			case 23:
			password[i]+='m';
			break;
			case 24:
			password[i]+='n';
			break;
			case 25:
			password[i]+='o';
			break;
			case 26:
			password[i]+='p';
			break;
			case 27:
			password[i]+='q';
			break;
			case 28:
			password[i]+='r';
			break;
			case 29:
			password[i]+='s';
			break;
			case 30:
			password[i]+='t';
			break;
			case 31:
			password[i]+='u';
			break;
			case 32:
			password[i]+='v';
			break;
			case 33:
			password[i]+='x';
			break;
			case 34:
			password[i]+='y';
			break;
			case 35:
			password[i]+='z';
			break;
			case 36:
			password[i]+='A';
			break;
			case 37:
			password[i]+='B';
			break;
			case 38:
			password[i]+='C';
			break;
			case 39:
			password[i]+='D';
			break;
			case 40:
			password[i]+='E';
			break;
			case 41:
			password[i]+='F';
			break;
			case 42:
			password[i]+='G';
			break;
			case 43:
			password[i]+='H';
			break;
			case 44:
			password[i]+='I';
			break;
			case 45:
			password[i]+='J';
			break;
			case 46:
			password[i]+='K';
			break;
			case 47:
			password[i]+='L';
			break;
			case 48:
			password[i]+='M';
			break;
			case 49:
			password[i]+='N';
			break;
			case 50:
			password[i]+='O';
			break;
			case 51:
			password[i]+='P';
			break;
			case 52:
			password[i]+='Q';
			break;
			case 53:
			password[i]+='R';
			break;
			case 54:
			password[i]+='S';
			break;
			case 55:
			password[i]+='T';
			break;
			case 56:
			password[i]+='U';
			break;
			case 57:
			password[i]+='V';
			break;
			case 58:
			password[i]+='X';
			break;
			case 59:
			password[i]+='Y';
			break;
			case 60:
			password[i]+='Z';
			break;
			case 61:
			password[i]+='w';
			break;
			case 62:
			password[i]+='W';
			break;
		
		}
	}
}
void writePwdToFile()
{
	stream.open("Passu.txt");
	if( !stream )
	{
        cout << "Opening file failed" << endl;
	}
	stream.write( (char*)password, 33 );
	stream.close();
	for(int k=0; k<33; k++)
	{
		password[k]='\0';
	}
}
int main() 
{
	generatePwd();
	printPwd();	
	writePwdToFile();
	return 0;
}	