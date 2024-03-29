#include <optional>
#include "assignment/node.hpp"
#pragma once
namespace assignment {
    struct CartesianTree final{
        CartesianTree() = default;
        ~CartesianTree();

        void Clear();

        void Split(Node* node, int key, Node*& left, Node*& right);

        Node *Merge(Node* left_tree, Node* right_tree) const;

        void Insert(int key, int priority);

        bool Contains(int key) const;

        bool Remove(int, key);

        bool IsEmpty() const;

        Node *root() const;
    private:
        Node *root_{nullptr};
    };
}