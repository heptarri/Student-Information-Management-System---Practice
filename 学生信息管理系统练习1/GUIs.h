#pragma once
#include <iostream>
#include <Windows.h>
#include "base.h"
using namespace std;
int GUI1() {
	system("mode con cols=50 lines=20");
	gotoxy(12, 5);
	color(11);
	cout << "ѧ �� �� Ϣ �� �� ϵ ͳ  " << endl;
	gotoxy(2, 7);
	color(9);
	cout << "_____________________________________________" << endl;
	color(8);
	gotoxy(13, 9);
	cout << "[1]�� �� ѧ �� �� Ϣ" << endl;
	gotoxy(13, 11);
	cout << "[2]�� ѯ ѧ �� �� Ϣ" << endl;
	gotoxy(13, 13);
	cout << "[3]ɾ �� ѧ �� �� Ϣ" << endl;
	gotoxy(10, 16);
	color(3);
	cout << "������������Ҫ��ɵĲ���:[1-3]:";
	string choose;
	cin >> choose;
	if (choose == "1") {

	}
	else if (choose == "2") {

	}
	else if (choose == "3") {

	}
	else {
		cout << "������1-3֮�������!" << endl;
	}
	return 0;
}