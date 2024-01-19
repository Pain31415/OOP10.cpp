#include "doublylinkedlist.h"

int main() {
    DoublyLinkedList<int> myList;

    myList.AddToHead(3);
    myList.AddToTail(5);
    myList.AddToTail(7);
    myList.Show();

    myList.DeleteFromHead();
    myList.Show();

    myList.AddToHead(1);
    myList.AddToTail(9);
    myList.Show();

    myList.InsertAtPosition(4, 2);
    myList.Show();

    myList.Reverse();
    myList.Show();

    int searchResult = myList.SearchElement(5);
    if (searchResult != -1) {
        std::cout << "Found at position: " << searchResult << std::endl;
    }
    else {
        std::cout << "Not found." << std::endl;
    }

    int replaceCount = myList.ReplaceElement(5, 8);
    myList.Show();
    std::cout << "Replaced " << replaceCount << " occurrences." << std::endl;

    myList.DeleteAtPosition(3);
    myList.Show();

    return 0;
}