# More malloc and Free
![C](https://img.shields.io/badge/C-99-blue) ![Betty](https://img.shields.io/badge/style-Betty-green) ![License](https://img.shields.io/badge/License-Holberton-yellow)

Advanced dynamic memory — error handling, custom calloc, bounded string concat, and integer range creation.

---

## Tasks

- **0-malloc_checked.c**: malloc with exit(98) on failure
- **1-string_nconcat.c**: String concatenation with n bytes
- **2-calloc.c**: Custom calloc (zero-initialized memory)
- **3-array_range.c**: Create array of ints from min to max

> **Example:** `void *malloc_checked(unsigned int b) { void *p = malloc(b); if (!p) exit(98); return (p); }`

## Key Concepts

malloc with error handling via exit(), custom calloc (zero-initialized), bounded string concat, array range creation

---

Repository

GitHub repository: holbertonschool-low_level_programming
Directory: more_malloc_free

---

Author

Damien Rossi - DaRKkem — Holberton School, cohort C28, Auvergne-Rhône-Alpes
