#include <iostream>

struct Node
{
    int number;
    Node *next;
};

int main()
{
    Node a{1, nullptr};
    Node b{2, &a};
    Node c{3, &b};

    Node *current = &c;

    while (current != nullptr)
    {
        std::cout << current->number << '\n';
        current = current->next;
    }

    return 0;
}