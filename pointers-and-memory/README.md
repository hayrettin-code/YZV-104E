# 📍 Pointers & Memory Management: Systems Programming (C)

This directory demonstrates mastery of C's memory management capabilities, pointer arithmetic, and dynamic allocation. These programs move beyond static data structures to manage memory manually.

## 📝 About the Projects
These exercises focus on the manual control of heap memory (`malloc`/`realloc`/`free`) and the effective use of pointer addressing for complex data manipulation.

**Key Concepts Applied:**
* **Dynamic Memory Allocation:** Allocating and resizing memory blocks during runtime to optimize resource usage.
* **Pointer Arithmetic:** Navigating and manipulating data structures directly through memory addresses.
* **Manual Lifecycle Management:** Ensuring memory safety by systematically deallocating (`free`) memory to prevent leaks.
* **Jagged Arrays:** Creating multi-dimensional structures with variable row sizes (e.g., Galton board simulation).

## 📂 Included Programs
* `string_scroll.c`: Demonstrates pointer-based character manipulation and string scrolling through address shifting.
* `route_reducer.c`: Manages dynamic route optimization by allocating, filtering, and resizing memory blocks using `malloc` and `realloc`.
* `galton_board.c`: Simulates a Galton board using a dynamically allocated jagged array, demonstrating complex pointer-to-pointer usage and iterative memory management.

## 🛠️ Technologies Used
* **Language:** C (ISO/IEC 9899 standard)
* **Memory Management:** Heap-based allocation (`<stdlib.h>`)
* **Logic:** Address-based manipulation and procedural systems architecture.

---
*These programs demonstrate a deep understanding of memory architecture, essential for systems programming and resource-efficient software development.*
