//
#include "ObtemCurrent_Directory.h"
#include <direct.h>//-----Para usar '_getcwd'
//
void ObtemCurrent_Directory(string&       CurrentDir)
{
	//------Obtendo o Diret�rio Atual//---------IMPORTANTE---Para Windows
	//
	//----Diret�rio onde est� o arquivo  terminado por :   ".vcxproj"
	//
	//
	char buff[FILENAME_MAX]; //create string buffer to hold path
	_getcwd(buff, FILENAME_MAX);
	string current_working_dir(buff);
	CurrentDir = current_working_dir;//--Diret�rio atual
	//
	/*
	string  Tecla_00A;
	cout << " CurrentDir = " << CurrentDir << "\n";
	cout << " digite tecla para continuar" << "\n";
	//////////cin >> Tecla_00A;
	//------------------------------------------------------------------------------------>IMPORTANTE--28/04/2021
	getline(cin, Tecla_00A, '\n');//------>Ler string com caracter espa�o em branco
	//------------------------------------------------------------------------------------>IMPORTANTE--28/04/2021
	//*/
	//
	//------Obtidodo o Diret�rio Atual//---------IMPORTANTE---Para Windows
}
