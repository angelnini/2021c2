#include <iostream>
#include <vector>
using namespace std;///�]��std::���ƫܦh�� �ҥH�i�H�ٲ��L
class student{
public:///�S�]���}�����
	char name[30];
	int grade;
};
int main()
{
	int n;
	cin>>n;
	vector<student> stu(n);
	///���Ostudent,stu�o���ܼ�,�i�H��n��student
	for (int i=0; i<n; i++){
		cin>>stu[i].name>>stu[i].grade;
	}
	for(int i=0; i<n; i++){
		cout <<stu[i].name<<" "<<stu[i].grade<< endl;
	}
}
