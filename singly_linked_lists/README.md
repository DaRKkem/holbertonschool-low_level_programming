<p align="center">
  <a href="" rel="noopener">
 <img width=200px height=200px src="https://i.imgur.com/6wj0hh6.jpg" alt="Project logo"></a>
</p>

<h3 align="center">Singly Linked Lists in C</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/yourusername/singly-linked-lists.svg)](https://github.com/yourusername/singly-linked-lists/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/yourusername/singly-linked-lists.svg)](https://github.com/yourusername/singly-linked-lists/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center">
  A C project implementing singly linked lists, including basic operations like adding, printing, and deleting nodes.
</p>

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Usage](#usage)
- [Built Using](#built_using)
- [Contributing](#contributing)
- [Authors](#authors)
- [Acknowledgements](#acknowledgement)

## 🧐 About <a name = "about"></a>

This project focuses on learning and implementing **singly linked lists in C**. It includes creating nodes, traversing the list, printing node contents, and managing memory efficiently. The main goal is to strengthen understanding of **pointers, dynamic memory allocation, and data structures** in low-level programming.

## 🏁 Getting Started <a name = "getting_started"></a>

Follow these instructions to get a copy of the project up and running on your local machine for testing and learning purposes.

### Prerequisites

- GCC (or any C compiler)
- Make (optional)
- Basic knowledge of C and pointers

```bash
sudo apt update
sudo apt install build-essential

Installing
git clone https://github.com/yourusername/singly-linked-lists.git
cd singly-linked-lists
gcc 0-print_list.c _putchar.c -o print_list
./print_list
```
🎈 Usage <a name = "usage"></a>
Example usage :
list_t *head = NULL;
add_node(&head, "Hello");
add_node_end(&head, "World");
print_list(head);
free_list(head);

🔧 Built Using <a name = "built_using"></a>

✍️ Author : <a name = "DaRKkem"></a>

DaRKkem - Idea & Implementation

🎉 Acknowledgements <a name = "acknowledgement"></a>

Inspired by Holberton School

Reference: https://www.geeksforgeeks.org/linked-list-set-1-introduction/