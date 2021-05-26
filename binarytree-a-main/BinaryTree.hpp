#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
namespace ariel
{
    template <class T>

    class BinaryTree
    {
        struct Node
        {
            T val;
            Node *r = nullptr;
            Node *l = nullptr;
         

               Node(const T& v,  Node* r = nullptr  ,Node* l = nullptr)
            : val(v), l(l), r(r) {
        }
        };
        Node *root;
    public:
       
        BinaryTree<T>(){root = nullptr;}
        BinaryTree<T> add_root(const T &v){return *this;}
        BinaryTree<T> add_left(const T &v, const T &l){return *this;}
        BinaryTree<T> add_right(const T &v, const T &r){return *this;}

        class Iterator
        {
        private:
            Node *currNode;
        public:
            Iterator(Node *ptr = nullptr): currNode(ptr){}
            T &operator*() const{
                return currNode->val;
                }
            
            T *operator->() const{
                return &(currNode->val);
                }
            Iterator &operator++() {
           
                return *this;
            }
            const Iterator operator++(int){
                     Iterator t = *this;
                currNode = currNode->left;
                return t;
            }
            bool operator==(const Iterator &opertor) const{
                return currNode==opertor.currNode;
                }
            bool operator!=(const Iterator &opertor) const{
                return currNode!=opertor.currNode;;
                }
        };


        Iterator begin(){return Iterator{root};}
        Iterator end(){return Iterator{root};}
        Iterator begin_inorder(){return Iterator{root};}
        Iterator end_inorder(){return Iterator{root};}
        Iterator begin_preorder(){return Iterator{root};}
        Iterator end_preorder(){return Iterator{root};}
        Iterator begin_postorder(){return Iterator{root};}
        Iterator end_postorder(){return Iterator{root};}

        friend ostream &operator<<(ostream &os, const BinaryTree &tree){
            return  os ;
            }
    };
}