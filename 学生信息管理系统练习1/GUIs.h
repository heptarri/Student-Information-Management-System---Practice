#pragma once
#include <iostream>
#include <Windows.h>
#include "base.h"
using namespace std;
int GUI1() {
	system("mode con cols=50 lines=20");
	gotoxy(12, 5);
	color(11);
	cout << "学 生 信 息 管 理 系 统  " << endl;
	gotoxy(2, 7);
	color(9);
	cout << "_____________________________________________" << endl;
	color(8);
	gotoxy(13, 9);
	cout << "[1]添 加 学 生 信 息" << endl;
	gotoxy(13, 11);
	cout << "[2]查 询 学 生 信 息" << endl;
	gotoxy(13, 13);
	cout << "[3]删 除 学 生 信 息" << endl;
	gotoxy(10, 16);
	color(3);
	cout << "请输入你您想要完成的操作:[1-3]:";
	string choose;
	cin >> choose;
	if (choose == "1") {

	}
	else if (choose == "2") {

	}
	else if (choose == "3") {

	}
	else {
		cout << "请输入1-3之间的数字!" << endl;
	}
	return 0;
}