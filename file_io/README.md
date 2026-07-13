# File I/O
![C](https://img.shields.io/badge/C-99-blue) ![Betty](https://img.shields.io/badge/style-Betty-green) ![License](https://img.shields.io/badge/License-Holberton-yellow)

POSIX system calls for file operations — reading, writing, creating, appending, and implementing a cp clone.

---

## Tasks

- **0-read_textfile.c**: Read text file and print to stdout
- **1-create_file.c**: Create a file with text content
- **2-append_text_to_file.c**: Append text to end of file
- **3-cp.c**: Copy file to another (like cp command)

> **Example:** `ssize_t read_textfile(const char *filename, size_t letters) { int fd = open(filename, O_RDONLY); ... }`

## Key Concepts

open(), read(), write(), close(), file descriptors, O_RDONLY/O_WRONLY/O_CREAT/O_APPEND flags, error handling, buffer management

---

Repository

GitHub repository: holbertonschool-low_level_programming
Directory: file_io

---

Author

Damien Rossi - DaRKkem — Holberton School, cohort C28, Auvergne-Rhône-Alpes
