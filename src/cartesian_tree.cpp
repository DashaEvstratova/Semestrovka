#pragma once
#include <iostream>
#include <algorithm>
#include <cmath>
#include "cartesian_tree.hpp"

namespace assignment{
    CartesianTree::~CartesianTree(){
        CartesianTree::Clear();
    }

    void CartesianTree::Clear(){
        clear(root_);
        root_ = nullptr;
    }
    void CartesianTree::Split(Node* node, int key, Node*& left, Node*& right){
        if (node == nullptr){

        }
    }

    bool CartesianTree::Contains(int key) const {
        if (Find(key) == std::nullopt){
            return false;
        }
        return true;
    }

    bool CartesianTree::IsEmpty() const {
        return root_ == nullptr;
    }

    void CartesianTree::clear(Node* node) {
        if (node!= nullptr) {
            clear(node->left);
            clear(node->right);
        }
        delete node;
    }
}