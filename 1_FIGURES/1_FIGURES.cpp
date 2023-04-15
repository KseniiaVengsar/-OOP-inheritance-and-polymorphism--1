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
	Triangle() :Figure("Треугольник",3) {
		
	}
};
////////////////////////////////////////////////////////////////////////////////
class Quadrangle :public Figure {
public:
	Quadrangle() :Figure("Четырёхугольник", 4) {
		
	}
};
////////////////////////////////////////////////////////////////////////////////
int main()

{
	setlocale(LC_ALL, "RU");

	std::cout << "Количество сторон:" << std::endl;
	Figure Figure1 = Figure("Фигура",0);
	Triangle Figure2;
	Quadrangle Figure3;

	std::cout << Figure1.getType()<<"  "<< Figure1.get_sides_count() << std::endl;
	std::cout << Figure2.getType() << " " << Figure2.get_sides_count() << std::endl;
	std::cout << Figure3.getType() << " " << Figure3.get_sides_count() << std::endl;
	return 0;
}
/*Отвечаю на ваш вопрос: Вы можете переписать конструктор так, чтобы он не принимал аргументов. Пример конструктора без аргументов:
class Triangle :public Figure {
public:
	Triangle() :Figure(3, "Треугольник") {

	}
};
Тогда вы сможете создавать объект, не передавая никаких аргументов:
// Так:
Triangle t1;

// Или так:
Triangle t2 = Triangle();

// Или так:
Triangle t3{};*/

//Нужно добавить также член класса, который обозначает название фигуры. 
//Получается, как будто фигура “знает” о том, как она называется.
//По аналогии с количеством сторон, нужно добавить аргумент в конструкторе класса Figure и инициализировать этот член класса там.
//Также нужно добавить метод-геттер для этого члена класса - чтобы фигура могла сообщить свое название.
//Метод get_sides_count это должен быть метод-геттер. 
//Он должен возвращать значение, а не выводить его на экран. 
//Его сигнатура должна быть: int get_sides_count().
//Используя ваш класс, другие программисты сами будут решать куда выводить это значение
//- на экран, в файл, в базу данных, или передавать по интернету.
//В коде main сейчас вы выводите название фигуры напрямую, например: 
//std::cout << "Треугольник: ";. Проблема в том, что если пользователь захочет поменять Figure2 
//с треугольника на четырехугольник, ему нужно будет поменять код в двух местах: на строках 46 и 47. 
//Если вы будете выводить название фигуры получаемое из объекта, то поменять фигуру можно будет за 1 действие, и код станет проще.


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

