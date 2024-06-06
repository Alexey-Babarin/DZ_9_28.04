#include <iostream>
#include <locale>

using namespace std;

class Flat // Объявление класса Flat
{
private:
    float area;  // Площадь квартиры
    float price; // Цена квартиры

public:
    Flat(float a, float p) : area(a), price(p) {} // Конструктор класса

    float getArea() const // Методы для получения площади и цены
    {
        return area;
    }

    float getPrice() const 
    {
        return price;
    }

    void setArea(float a) // Методы для установки площади и цены
    {
        area = a;
    }

    void setPrice(float p) 
    {
        price = p;
    }

    bool operator==(const Flat& other) const // Перегрузка оператора ==
    {
        return this->area == other.area;
    }

    void operator=(const Flat& other) // Перегрузка оператора =
    {
        this->area = other.area;
        this->price = other.price;
    }

    bool operator>(const Flat& other) const // Перегрузка оператора >
    {
        return this->price > other.price;
    }
};

int main() 
{
    setlocale(LC_ALL, "Russian");

    // Создание двух объектов класса Flat
    Flat flat1(100, 2000000);
    Flat flat2(120, 2500000);

    if (flat1 == flat2) // Проверка на равенство площадей квартир
    {
        cout << "Площади квартир равны" << endl;
    }
    else 
    {
        cout << "Площади квартир не равны" << endl;
    }

    flat1 = flat2; // Присваивание значений одного объекта другому
    cout << "Площадь квартиры 1: " << flat1.getArea() << " Цена: " << flat1.getPrice() << endl;

    if (flat1 > flat2) // Сравнение двух квартир по цене
    {
        cout << "Первая квартира дороже второй" << endl;
    }
    else 
    {
        cout << "Первая квартира дешевле второй" << endl;
    }

    return 0;
}