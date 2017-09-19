// Fourarithmeticcalculators.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include "stdafx.h"
#include<iostream>
#include<stdio.h>
using namespace std;
void add()
{
	printf("输入要计算的加数（例如a b）\n");
	int adda = 0, addb = 0, addc = 0;
	cin >> adda;
	cin >> addb;
	addc = adda + addb;
	cout << adda << "加" << addb << "等于" << addc << endl;
}
void substraction()
{
	printf("输入要计算的减数（例如a b）\n");
	int suba = 0, subb = 0, subc = 0;
	cin >> suba;
	cin >> subb;
	subc = suba - subb;
	cout << suba << "减" << subb << "等于" << subc << endl;
}
void multiplication()
{
	printf("输入要计算的乘数（例如a b）\n");
	int mula = 0, mulb = 0, mulc = 0;
	cin >> mula;
	cin >> mulb;
	mulc = mula*mulb;
	cout << mula << "乘" << mulb << "等于" << mulc << endl;
	
}
void division()
{
	printf("输入要计算的除数（例如a b）\n");
	int dsa = 0, dsb = 0, dsc = 0, dsd = 0;
	cin >> dsa;
	cin >> dsb;
	dsc = dsa / dsb;
	dsd = dsa%dsb;
	cout << dsa << "除" << dsb << "等于" << dsc << "余" << dsd << endl;
}
void operation()//运算函数
{
	printf("输入数据选择做那种运算\n");
	printf("输入0选择退出，1做加法，2做减法，3做乘法，4做除法（保留余数）\n");

	int operatione = 0;
	cin >> operatione;
	cout << endl;
	try
	{
		if (operatione == 1)
		{
			//加法
			add();
		}
		else if (operatione == 2)
		{
			//减法
			substraction();
		}
		else if (operatione == 3)
		{
			//乘法
			multiplication();
		}
		else if (operatione == 4)
		{
			//出发
			division();
		}
		else if (operatione == 0)
		{
			exit(0);
		}
		else
		{
			throw 1;
		}
	}
	catch (int i)
	{
		cout << "输入错误" << endl;
	}
	operation();
}

int main()
{
	printf("欢迎使用本计算器");
	operation();
	return 0;
}