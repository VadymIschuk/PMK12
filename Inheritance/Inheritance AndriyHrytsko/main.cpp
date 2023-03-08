#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ������� ���� ��� ����� ������
class Product {
protected:
    string country_code; // ��� �����-���������
    double price; // ���� ������
public:
    // ����������� � �����������
    Product(string country_code, double price) {
        this->country_code = country_code;
        this->price = price;
    }

    // ������� ��� ��������� ����� ��� �����
    string getCountryCode() const {
        return country_code;
    }

    double getPrice() const {
        return price;
    }
};

// ���� ��� ����� �������, �� ������ ���� ������
class Toy : public Product {
private:
    string name; // ����� �������
    int min_age; // ��������� �� ��� ������������
    int max_age; // ������������ �� ��� ������������
public:
    // ����������� � �����������, �� ������� ����������� �������� �����
    Toy(string country_code, double price, string name, int min_age, int max_age)
        : Product(country_code, price) {
        this->name = name;
        this->min_age = min_age;
        this->max_age = max_age;
    }

    // ������� ��� ��������� ����� ��� �������
    string getName() const {
        return name;
    }

    int getMinAge() const {
        return min_age;
    }

    int getMaxAge() const {
        return max_age;
    }
};

int main() {
    // ��������� �������� �������
    Toy toy1("US", 9.99, "Lego", 4, 12);
    Toy toy2("CN", 4.99, "Rubik's Cube", 8, 99);
    Toy toy3("JP", 14.99, "Tamagotchi", 6, 99);
    Toy toy4("US", 19.99, "Barbie", 3, 8);
    Toy toy5("CN", 24.99, "RC Car", 6, 14);

    // ��������� ������� � ���� ���������
    vector<Toy> toys = { toy1, toy2, toy3, toy4, toy5 };

    // ����� ����������� �� �������� ������� �������� �� ������� ���
    int min_age, max_age;
    double min_price, max_price;
    cout << "Enter minimum age: ";
    cin >> min_age;
    cout << "Enter maximum age: ";
    cin >> max_age;
    cout << "Enter minimum price: ";
    cin >> min_price;
    return 0;
}
