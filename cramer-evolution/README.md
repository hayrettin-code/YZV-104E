# 📈 Cramer's Rule Solver: Code Evolution & Progression (C)

This directory showcases an incremental engineering progression of a C program that solves a system of two linear equations using Cramer's Rule. 

## 📝 About the Progression
Starting from a hardcoded procedural script, the project evolves through iterative stages, incorporating user input, loops, function modularity, arrays, pointers, dynamic memory allocation, structures, and finally command-line file I/O operations.

## 📂 Included Program Stages (Evolutionary Order)
1. `cramer_v1_static.c`: Initial hardcoded implementation solving a fixed set of linear equations.
2. `cramer_v2_user_input.c`: Adds interactive `scanf` inputs and dynamic sign formatting using `<math.h>`.
3. `cramer_v3_validation.c`: Introduces `do-while` loop validation to prevent division by zero (determinant = 0).
4. `cramer_v4_modular.c`: Refactors the code into custom modular functions (`calculate_x_or_y`, `print_equation`).
5. `cramer_v5_global_modular.c`: Uses global variables and switch-case structures for cleaner parameter handling.
6. `cramer_v6_arrays.c`: Implements arrays (`#define MAX_SIZE 3`) to handle multiple equation datasets in batches.
7. `cramer_v7_pointers.c`: Upgrades array processing to explicit pointer arithmetic (`*a1`, `*next_slot`).
8. `cramer_v8_dynamic_memory.c`: Integrates heap allocation (`malloc`) and double pointers for flexible memory management.
9. `cramer_v9_structs.c`: Implements custom `typedef struct Equation` templates to group related equation attributes cleanly.
10. `cramer_v10_file_io.c`: Finalizes the project as a command-line tool reading datasets from input files and writing formatted outputs to text files (`File I/O`).

## 🛠️ Technologies Used
* **Language:** C (ISO/IEC 9899 standard)
* **Libraries:** `<stdio.h>`, `<stdlib.h>`, `<math.h>`
* **Paradigms:** Procedural Programming, Modular Design, Pointer Arithmetic, Dynamic Allocation, Structs, File I/O.

---
*This progression demonstrates how clean code architecture and advanced C concepts are applied incrementally to solve computational problems.*
