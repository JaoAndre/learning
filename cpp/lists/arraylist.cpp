#include <iostream>

class ArrayList
{
private:
    int size = 4;
    int index = 0;
    int *arr = new int[size];

    void grow()
    {
        int new_size = size * 2;
        int *new_arr = new int[new_size];

        for (int i = 0; i < size; i++)
        {
            new_arr[i] = arr[i];
        }

        delete[] arr;
        size = new_size;
        arr = new_arr;
    }

public:
    void push(int n)
    {
        if (index == size)
        {
            grow();
        }
        arr[index++] = n;
    }

    int pop(int i)
    {
        int valor = arr[i];

        // ? (-1) Para não chegar em valor vazio.
        for (int j = i; j < index - 1; j++)
        {
            arr[j] = arr[j + 1];
        }

        index--;
        return valor;
    }

    int get(int i)
    {
        return arr[i];
    }
};

int main()
{
    ArrayList list;

    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);

    list.pop(2);
    list.push(5);

    std::cout << list.get(0) << '\n';
    std::cout << list.get(1) << '\n';
    std::cout << list.get(2) << '\n';
    std::cout << list.get(3) << '\n';

    return 0;
}