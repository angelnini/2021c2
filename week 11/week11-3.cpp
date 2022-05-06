#include <iostream>
#include <vector>
using namespace std;///因為std::重複很多次 所以可以省略他
class student{
public:///沒設公開不能用
	char name[30];
	int grade;
};
int main()
{
	int n;
	cin>>n;
	vector<student> stu(n);
	///單位是student,stu這個變數,可以裝n個student
	for (int i=0; i<n; i++){
		cin>>stu[i].name>>stu[i].grade;
	}
	for(int i=0; i<n; i++){
		cout <<stu[i].name<<" "<<stu[i].grade<< endl;
	}
}
