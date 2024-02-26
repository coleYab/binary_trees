# Binary Trees

## Introduction

## Learning Objectives

### General

- What is a binary tree?
- What is the difference between binary tree and BST?
- What are the different types of trees?

## More Info
### Datastructures used

#### Basic Binary Tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

#### Binary Search Tree


```c
typedef struct binary_tree_s bst_t;
```

#### AVL Tree


```c
typedef struct binary_tree_avl_t;
```

#### Max Heap Tree


```c
typedef struct binary_tree_s heap_t;
```
