// Author Raisa Methila
// project 5

#ifndef CARD_SHOP_HPP_
#define CARD_SHOP_HPP_
#include "DoublyLinkedList.hpp"
#include "YGOCard.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

class CardShop : public DoublyLinkedList<YGOCard *>
{
public:
  CardShop() = default; // default constructor
  ~CardShop();          // destructor calls clear

  /**
  @pre  : the input file is in csv format: "name,type,level_rank,race,attribute,atk,def"
  @param: the name of the input file
  @post:  Reads the input file and adds pointers to YGOCard objects
          instantiated with the information read from the file.
    */
  CardShop(std::string input_file_name); // parameterized constructor

  //@post: displays information of all cards in the shop, one per line
  void display();

  //@param: the index of the first card to be displayed
  //@param: the index of the last card to be displayed
  //@post: displays the names of all cards in the shop with startRange and endRange,
  //       inclusive, one per line
  void displayName(int startRange, int endRange);

  //@post: removes all cards from the shop
  void clear();

  //@return:  true if all the cards in rhs are equal to the cards in the shop, false otherwise
  bool operator==(const CardShop &rhs) const;

  /// @brief sorts by ordering the largest int to the end of the array, check in acssending order
  /// @tparam Comparator template
  /// @param comp compares the ints
  /// @param key "atk" or "def"
  /// @return number of sorts
  template <typename Comparator>
  int bubbleSort(Comparator comp, std::string key);

  /// @brief sorts by bringing the smallest int to front of the array by comparing an int to its previous every pass
  /// @tparam Comparator template
  /// @param comp compares the ints
  /// @param key "atk" or "def"
  /// @return number of sorts
  template <typename Comparator>
  int insertionSort(Comparator comp, std::string key);

  /// @brief Sorts the items by dividing in middle then comparing
  /// @tparam Comparator template
  /// @param comp compares the ints
  /// @param key  gets either "Atk" or "Def" for sorting the numbers
  /// @return number of swaps
  template <typename Comparator>
  int mergeSort(Comparator comp, std::string key);

  /// @brief merges the parts
  /// @tparam Comparator template
  /// @param comp compares the ints
  /// @param left left half
  /// @param mid  mid point
  /// @param right  right half
  /// @param key "atk" or "def" stats
  template <typename Comparator>
  void merge(Comparator comp, int left, int mid, int right, std::string key);

  /// @brief dividing the list in half
  /// @tparam Comparator template
  /// @param comp compares the ints
  /// @param left left half
  /// @param right right half
  /// @param key gets either "Atk" or "Def" for sorting the numbers
  /// @return number of sorts
  template <typename Comparator>
  int sortMerge(Comparator comp, int left, int right, std::string key);

  /// @brief calls partition to create a pivot then sorts each parts between the pivots
  /// @tparam Comparator
  /// @param comp template
  /// @param key atk or def
  /// @param left left half
  /// @param right right half
  /// @param c number of sorts
  template <typename Comparator>
  void sort(Comparator comp, std::string key, int left, int right, int &c);

/// @brief traverse each element of the array and compare them with the pivot
/// @param comp compares the ints 
/// @param key gets either "Atk" or "Def" for sorting the numbers
/// @param left left half
/// @param right right half
/// @param c number of sorts count variable
/// @return nuber of sorts
  template <typename Comparator>
  int partition(Comparator comp, std::string key, int left, int right, int &c);

/// @brief calls sort function which in sort funtion it sorts via pivot 
/// @param comp compares the ints
/// @param key "atk" or "def"
/// @return number of sorts
  template <typename Comparator>
  int quickSort(Comparator comp, std::string key);
};

#endif