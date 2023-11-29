#include <QCoreApplication>

#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << add(5, 6) << std::endl;

    return a.exec();
}
