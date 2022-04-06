#include <optional>
#include "assignment/node.hpp"
#pragma once
namespace assignment {
    struct CartesianTree final{
        CartesianTree() = default;
        ~CartesianTree();

        void Clear();

        void Split(Node* node, int key, Node*& left, Node*& right);

        bool Contains(int key) const;

        bool IsEmpty() const;

        Node *root() const;
    private:
        Node *root_{nullptr};
    };
}