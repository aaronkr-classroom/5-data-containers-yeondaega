//Student_info.cpp
#include "Student_info.h"

bool compare(const Student_info& x, const Student_info& y) {
	return x.name < y.name; //T/F

}

istream& read(istream& is, Student_info& s) {
	//�л��� �̸�, �߰���� ����, �⸻��� ���� �о� ����
	is >> s.name >> s.midterm >> s, final;
	//���� ������ ����
	read_hw(is, s.homework);
	return is;
}