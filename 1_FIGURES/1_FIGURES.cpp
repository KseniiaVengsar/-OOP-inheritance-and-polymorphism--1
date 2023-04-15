// 1_FIGURES.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>

class Figure { 	
private:
	std::string figure_type;
	int sides_count;
public:
	
	Figure(std::string figure_type_, int sides_count_) {
		figure_type = figure_type_;
		sides_count = sides_count_;
	}
	
	std::string setType(std::string figure_type_) {
		 figure_type= figure_type_;
	}
	std::string setCount(int sides_count_) {
		sides_count = sides_count_;
	}
	std::string getType(){
		return figure_type;
	} 
	int get_sides_count() {
		return sides_count;
	}
};
//////////////////////////////////////////////////////////////////////////////////
class Triangle :public Figure {
public:
	Triangle() :Figure("�����������",3) {
		
	}
};
////////////////////////////////////////////////////////////////////////////////
class Quadrangle :public Figure {
public:
	Quadrangle() :Figure("��������������", 4) {
		
	}
};
////////////////////////////////////////////////////////////////////////////////
int main()

{
	setlocale(LC_ALL, "RU");

	std::cout << "���������� ������:" << std::endl;
	Figure Figure1 = Figure("������",0);
	Triangle Figure2;
	Quadrangle Figure3;

	std::cout << Figure1.getType()<<"  "<< Figure1.get_sides_count() << std::endl;
	std::cout << Figure2.getType() << " " << Figure2.get_sides_count() << std::endl;
	std::cout << Figure3.getType() << " " << Figure3.get_sides_count() << std::endl;
	return 0;
}
/*������� �� ��� ������: �� ������ ���������� ����������� ���, ����� �� �� �������� ����������. ������ ������������ ��� ����������:
class Triangle :public Figure {
public:
	Triangle() :Figure(3, "�����������") {

	}
};
����� �� ������� ��������� ������, �� ��������� ������� ����������:
// ���:
Triangle t1;

// ��� ���:
Triangle t2 = Triangle();

// ��� ���:
Triangle t3{};*/

//����� �������� ����� ���� ������, ������� ���������� �������� ������. 
//����������, ��� ����� ������ ������ � ���, ��� ��� ����������.
//�� �������� � ����������� ������, ����� �������� �������� � ������������ ������ Figure � ���������������� ���� ���� ������ ���.
//����� ����� �������� �����-������ ��� ����� ����� ������ - ����� ������ ����� �������� ���� ��������.
//����� get_sides_count ��� ������ ���� �����-������. 
//�� ������ ���������� ��������, � �� �������� ��� �� �����. 
//��� ��������� ������ ����: int get_sides_count().
//��������� ��� �����, ������ ������������ ���� ����� ������ ���� �������� ��� ��������
//- �� �����, � ����, � ���� ������, ��� ���������� �� ���������.
//� ���� main ������ �� �������� �������� ������ ��������, ��������: 
//std::cout << "�����������: ";. �������� � ���, ��� ���� ������������ ������� �������� Figure2 
//� ������������ �� ���������������, ��� ����� ����� �������� ��� � ���� ������: �� ������� 46 � 47. 
//���� �� ������ �������� �������� ������ ���������� �� �������, �� �������� ������ ����� ����� �� 1 ��������, � ��� ������ �����.


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

