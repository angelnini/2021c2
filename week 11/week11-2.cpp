#include <iostream>
#include <vector>
char name[100][30];
int grade[100];
using namespace std;///因為std重複很多次 所以可以省略他
int main()
{
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>name[i]>>grade[i];
	}
	for(int i=0; i<n; i++){
		cout <<name[i]<< endl;///end line 跳行
	}
}
