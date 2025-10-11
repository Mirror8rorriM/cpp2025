// ForStudy1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
float Squre(float a);
float STrapezoid(float a, float b, float h);
int main()
{
    
    while (true) {
        int chois;
        std::cout << "For squre area press 1!\nFor Trapezoid area press 2" << std::endl;
        std::cin >> chois;
        switch (chois) {
        case 1:
            float a;
            std::cout << "Sqare side: ";
            std::cin >> a;
            std::cout << std::endl << "area = " << Squre(a) << std::endl;
            break;

        case 2:
            float x, y, h;
            std::cout << "first side: ";
            std::cin >> x;
            std::cout << std::endl;
            std::cout << "second side: ";
            std::cin >> y;
            std::cout << std::endl;
            std::cout << "hight: ";
            std::cin >> h;
            std::cout << std::endl<<"area = "<< STrapezoid(x,y,h)<<std::endl;
            break;
        default:
            std::cout << "this chois dosen't exist";
            break;
            
        }

    }
    return 0;
}
float Squre(float a){
    return a * a;
}
float STrapezoid(float a, float b, float h) {
    return (a + b) / 2 * h;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
