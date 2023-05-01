#include "YGOCard.hpp"
#include "YGOCard.hpp"
#include "CardShop.cpp"
#include "DoublyLinkedList.hpp"
#include <iostream>

int main()
{
  CardShop whatever("cards.csv");

  // std:: cout << whatever.bubbleSort(std::less<int>{}, "atk");
  // whatever.display();

  // whatever.bubbleSort(std::greater<int>{}, "def");
  // whatever.display();

  // whatever.bubbleSort(std::less<int>{}, "atk");
  // whatever.display();

  // whatever.insertionSort(std::less<int>{}, "def");
  // whatever.display();

  //  std:: cout << whatever.mergeSort(std::greater<int>{}, "def");
  // whatever.display();

  std:: cout << whatever.quickSort(std::less<int>{}, "atk");
  // whatever.display();


}
