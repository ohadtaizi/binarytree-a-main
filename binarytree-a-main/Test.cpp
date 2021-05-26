#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "BinaryTree.hpp"
#include "doctest.h"
#include <string>
using namespace ariel;
using namespace doctest;



TEST_CASE(" Integer")
{
  BinaryTree<int> tree;

  // overriding root

  CHECK_NOTHROW(tree.add_root(2));
  CHECK_NOTHROW(tree.add_left(2, 8));
  CHECK_NOTHROW(tree.add_left(8, 9));
  CHECK_NOTHROW(tree.add_right(8, 5));
  CHECK_NOTHROW(tree.add_right(5, 6));
  CHECK_NOTHROW(tree.add_left(5, 4)); 
   CHECK_NOTHROW(tree.add_left(4, 3)); 
     CHECK_NOTHROW(tree.add_right(9, 10));
         CHECK_NOTHROW(tree.add_right(10, 11));
            // check_pre(t, "2 3 4 5 6 7 8 9 10 11 ");
  }
TEST_CASE ("Test") {
    BinaryTree<int> tree;
     CHECK_NOTHROW(tree.add_root(0));
    CHECK_NOTHROW(tree.add_root(1));
    CHECK_NOTHROW(tree.add_root(2));
    CHECK_NOTHROW(tree.add_root(3));
    CHECK_NOTHROW(tree.add_root(4));
    CHECK_NOTHROW(tree.add_root(5));
    CHECK_NOTHROW(tree.add_root(6));
    CHECK_NOTHROW(tree.add_root(7));
    CHECK_NOTHROW(tree.add_root(8));
    CHECK_NOTHROW(tree.add_root(9));
    CHECK_NOTHROW(tree.add_root(10));
   
    
}
