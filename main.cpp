#include<bits/stdc++.h>
using namespace std;
int main()
{
	ofstream fout("test.bat");
	string filename,url;
	cout<<"filename:";
	getline(cin,filename);
	cout<<"url:";
	getline(cin,url);
	fout<<"@echo off\ncd /d %~dp0\npowershell curl -o \""<<filename<<"\" \"";
	for(int i=0;i<url.size();i++)
	{
		if(url[i]=='&')
		{
			fout<<"\"&\"";
		}
		else
		{
			fout<<url[i];
		}
	}
	fout<<"\"";
	fout.close();
	system("test.bat");
	system("del test.bat");
	cout<<filename<<" is downloaded"<<endl;
	system("pause");
	return 0;
}
