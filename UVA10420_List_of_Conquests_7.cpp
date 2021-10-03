/*
Sample Input
3
Spain Donna Elvira
England Jane Doe
Spain Donna Anna
Sample Output
England 1
Spain 2
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int c;
	char ch[76]={'\0'}; //������ �б� �� �� �ִ�76 char; 
	map<string,int>country;
	cin>>c;
	for(int i=0;i<c;i++) //�߿��Ѱ� map��;  
	{
		string s;
		cin>>s;
		country[s]++;
		cin.getline(ch,76);
	}
	map<string,int>::iterator country2;
	for(country2=country.begin();country2!=country.end();country2++)
	{
		cout<<country2->first<<" "<<country2->second<<endl;
	}

return 0;
}

