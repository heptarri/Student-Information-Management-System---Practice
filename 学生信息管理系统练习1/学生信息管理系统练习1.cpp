// 学生信息管理系统练习1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
	writer:aome
	date:2019-10
	version:2.0
	GitHub:github.com/z-rx
*/

#include <iostream>
#include <Windows.h>
#include <fstream>
using namespace std;
int gotoxy(int x, int y) {
	HANDLE hout;
	COORD coord;
	coord.X = x;
	coord.Y = y;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, coord);
	return 0;
}
int color(int c) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
	return 0;
}
string name;
string clas;
string scnum;
ifstream ifs;
ofstream ofs;
int GUI3() {
	system("cls");
	ifs.open("students.txt", ios_base::app);
	string xx;
	gotoxy(0, 2);
	color(8);
	while (!ifs.eof()) {
		ifs >> xx;
		cout << xx << endl;
	}
	color(0);
	system("pause");
	return 0;
}
int GUI2() {
	system("cls");
	color(8);
	gotoxy(5, 3);
	cout << "请输入学生信息:" << endl;
	gotoxy(10, 6);
	cout << "姓名:";
	cin >> name;
	gotoxy(10, 8);
	cout << "  班级:";
	cin >> clas;
	gotoxy(10, 10);
	cout << "  学号:";
	cin >> scnum;
	ofs.open("students.txt",ios_base::app);
	if (!ofs.is_open()) {
		cout << "sorry，打开文件失败!" << endl;
	}
	ofs << "\n";
	ofs << "姓名:";
	ofs << name;
	ofs << "班级:";
	ofs << clas;
	ofs << "学号";
	ofs << scnum;
	ofs.close();
	gotoxy(10, 12);
	cout << "写入成功!" << endl;
	gotoxy(10, 15);
	color(3);
	system("pause");
	return 0;
}
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
	cout << "    [3]退 出 程 序" << endl;
	gotoxy(10, 16);
	color(3);
	cout << "请输入你您想要完成的操作:[1-3]:";
	string choose;
	cin >> choose;
	if (choose == "1") {
		GUI2();
		GUI1();
	}
	else if (choose == "2") {
		GUI3();
		GUI1();
	}
	else if (choose == "3") {
		exit(0);
	}
	else {
		gotoxy(10, 18);
		cout << "请输入1-3之间的数字!" << endl;
		GUI1();
	}
	return 0;
}


int main()
{
	GUI1();
	
	color(0);
}

