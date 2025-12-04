<p align="center">
  <a href="" rel="noopener">
 <img width=200px height=200px src="https://i.imgur.com/6wj0hh6.jpg" alt="Project logo"></a>
</p>

<h3 align="center">Doubly Linked Lists in C</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/yourusername/doubly-linked-lists.svg)](https://github.com/yourusername/doubly-linked-lists/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/yourusername/doubly-linked-lists.svg)](https://github.com/yourusername/doubly-linked-lists/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center">
  A C project implementing <strong>doubly linked lists</strong>, providing operations such as adding nodes, deleting nodes, traversing the list, and managing memory safely.
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

This project focuses on implementing and understanding <strong>doubly linked lists</strong> in C.  
Each node contains:

- an integer value
- a pointer to the next node
- a pointer to the previous node

Doubly linked lists allow traversal in both directions, making insertions and deletions more flexible than singly linked lists.

The project includes functions such as:

- `add_dnodeint` (add at the beginning)
- `add_dnodeint_end` (add at the end)
- `print_dlistint`
- `get_dnodeint_at_index`
- `delete_dnodeint_at_index`
- `free_dlistint`

## 🏁 Getting Started <a name = "getting_started"></a>

### Prerequisites

- GCC (or any standard C compiler)
- Make (optional)
- Basic understanding of C and pointers

Install build tools:

```bash
sudo apt update
sudo apt install build-essential
Installing
bash
Copier le code
git clone https://github.com/yourusername/doubly-linked-lists.git
cd doubly-linked-lists
gcc *.c -o dlist
./dlist
```
🎈 Usage <a name = "usage"></a>
Example usage:

dlistint_t *head = NULL;

add_dnodeint(&head, 10);
add_dnodeint_end(&head, 20);
add_dnodeint_end(&head, 30);

print_dlistint(head);

free_dlistint(head);

🔧 Built Using
<a name = "built_using"></a> Valgrind (recommended for memory debugging)

✍️ Author :
<a name = "DaRKkem"></a>
DaRKkem – Design & Implementation

🎉 Acknowledgements
<a name = "acknowledgement"></a>
Inspired by Holberton School
References: https://www.geeksforgeeks.org/data-structures/linked-list/