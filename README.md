# Student Information Management System-Practice

## 学生信息管理系统-练习版本

### 这是一个使用C++编写的项目。

这是作者aome在2019年10月20日编写的一个练习文件读写和一些API的案例。后续会发布正式版本。

### 具体思路：

##### 1：添加学生信息：

使用fstream做文件读写并将数据存入一个名叫students.stu的文件。没有使用二进制。

###### 具体代码：



```c++
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
```



##### 搜索学生信息：

没有做太多的检索和过滤。只是显示students.stu中的文件。

###### 具体代码：



```c++
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
```



##### 关于gotoxy函数和color函数：

###### 具体代码：

gotoxy：

```c++
int gotoxy(int x, int y) {
	HANDLE hout;
	COORD coord;
	coord.X = x;
	coord.Y = y;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, coord);
	return 0;
}
```



color:



```c++
int color(int c) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
	return 0;
}
```



### 关于开发环境

>此项目包括此账号下的所有项目均是使用Microsoft Visual Studio Community 2019完成

下载地址：

> https://visualstudio.com/

> https://visualstudio.microsoft.com/vs/

中文版网页：

> https://visualstudio.microsoft.com/zh-hans/vs/

编译器：

> 微软自带的MSVC编译器，Visual Studio自带。

### 关于作者：

作者是一个来自中国的初中生。因为学业原因，可能更新只在周末进行。

邮箱：1759773892@qq.com

QQ号码:1759773892
