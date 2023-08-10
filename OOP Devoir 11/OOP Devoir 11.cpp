#include<iostream>
#include"Creatura.h"
#include <windows.h>
#include <shellapi.h>
#include <conio.h> 
#include <mmsystem.h>
#include <mciapi.h>
#include <memory>

enum color { Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White };
HANDLE okno = GetStdHandle(STD_OUTPUT_HANDLE);

void setColor(color text, color zalivka) {
	SetConsoleTextAttribute(okno, (WORD)((zalivka << 4) | text));
}
void nacialo(int x, int y) {
	COORD koord = { x,y };
	SetConsoleCursorPosition(okno, koord);
}

int main() {
	setlocale(LC_ALL, "Russian");
	bool cor; int ar, tes, cod, org;
	nacialo(20, 3); setColor(White, Red);
	std::cout << "     Создай своё существо!     \n";
	setColor(Black, LightRed);
	nacialo(10, 5); std::cout << " Имеет ли Ваше существо телесную оболочку или оно неосязаемое? (0-нет/1-да) "; nacialo(48, 6); setColor(White, Black);
	std::cin >> cor; setColor(Black, LightRed);
	nacialo(10, 7); std::cout << " Сколько у него конечностей? "; nacialo(48, 8); setColor(White, Black);
	std::cin >> ar; setColor(Black, LightRed);
	nacialo(10, 9); std::cout << " Сколько у него голов? "; nacialo(48, 10); setColor(White, Black);
	std::cin >> tes; setColor(Black, LightRed);
	nacialo(10, 11); std::cout << " Сколько у него хвостов? "; nacialo(48, 12); setColor(White, Black);
	std::cin >> cod; setColor(Black, LightRed);
	nacialo(10, 13); std::cout << " И последнее - Ваше любимое число : "; nacialo(48, 14); setColor(White, Black);
	std::cin >> org;


	Creatura* creatura = new Creatura(org, ar, tes, cor, cod);
	system("cls");
	nacialo(20, 3);
	creatura->MostraNameOrgano(); nacialo(20, 4);
	creatura->FunzioneArto(); nacialo(20, 5);
	creatura->FunzioneTesta(); nacialo(20, 6);
	creatura->FunzioneCorpo(); nacialo(20, 7);
	creatura->FunzioneCoda(); nacialo(20, 8);
	creatura->FunzioneCreatura();
	system("pause");
	system("cls");
	setColor(Black, LightRed); nacialo(20, 3);
	std::cout << " Итак ... "; Sleep(500); std::cout << "так..."; Sleep(500); std::cout << "так..."; 	 Sleep(500); 
	nacialo(20, 5); std::cout << " Ваше существо \n"; Sleep(1000);
	if (creatura->GetTesta() == 1 && creatura->GetCoda() == 1 && creatura->GetArto() == 4 && creatura->GetCorpo() == false) {
		ShellExecute(NULL, L"open", L"quattro.jpg", NULL, NULL, SW_NORMAL);
	}
	else if (creatura->GetTesta() == 1 && creatura->GetCoda() == 1 && creatura->GetArto() == 4) {
		ShellExecute(NULL, L"open", L"due.jpg", NULL, NULL, SW_NORMAL);
	}
	else if (creatura->GetTesta() == 1 && creatura->GetCoda() == 0 && creatura->GetArto() == 4) {
		ShellExecute(NULL, L"open", L"uno.jpg", NULL, NULL, SW_NORMAL);
	}
	else if (creatura->GetTesta() == 1 && creatura->GetCoda() == 10 && creatura->GetArto() == 4) {
		ShellExecute(NULL, L"open", L"tre.jpg", NULL, NULL, SW_NORMAL);
	}
	else if (creatura->GetTesta() == 0 && creatura->GetCoda() == 0 && creatura->GetArto() == 0&&creatura->GetCorpo() == false) {
		ShellExecute(NULL, L"open", L"cinque.jpg", NULL, NULL, SW_NORMAL);
	}
	else if (creatura->GetTesta() == 1 && creatura->GetCoda() == 1 && creatura->GetArto() == 2 && creatura->GetCorpo() == true) {
		ShellExecute(NULL, L"open", L"sette.jpg", NULL, NULL, SW_NORMAL);
	}
	else if (creatura->GetTesta() == 5 && creatura->GetCoda() == 1 && creatura->GetArto() == 2 && creatura->GetCorpo() == true) {
		ShellExecute(NULL, L"open", L"otto.jpg", NULL, NULL, SW_NORMAL);
	}
	else  {
		nacialo(20, 7); std::cout << " такое ужасное, что поглотило весь мир \n"; setColor(White, Black); Sleep(2000);
		ShellExecute(NULL, L"open", L"sei.jpg", NULL, NULL, SW_NORMAL);
	}

	setColor(White, Black);

	delete creatura;

	return 0;
}