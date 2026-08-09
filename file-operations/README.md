# 📁 Account Manager: Structured File I/O Systems (C)

This directory contains advanced C programs focused on binary and text file input/output (I/O), structured data management (`struct`), and random-access file manipulation.

## 📝 About the Projects
These applications simulate a professional client account management system, demonstrating how data can be persistently stored, updated, queried, and exported into reports.

**Key Concepts Applied:**
* **Binary File I/O:** Using `fopen`, `fread`, and `fwrite` with "rb+" and "wb" modes to manage structured records efficiently.
* **Random Access & Positioning:** Utilizing `fseek` and `rewind` to jump directly to specific records in binary files for fast updates and deletions.
* **Structured Data Handling:** Defining custom `struct` templates to group heterogeneous data (IDs, strings, floating-point balances).
* **Text Reporting:** Exporting structured database records into readable text reports (`report.txt`) using `fprintf`.

## 📂 Included Programs
* `account_initializer.c`: Initializes the binary database file (`accounts.dat`) by writing pre-formatted empty record structures to ensure file availability.
* `account_manager.c`: Implements an interactive menu-driven system to generate reports, update account balances, add new users, and delete existing records using direct file positioning.

## 🛠️ Technologies Used
* **Language:** C (ISO/IEC 9899 standard)
* **File Streams:** Standard I/O Library (`<stdio.h>`)
* **Data Paradigm:** Procedural File Processing and Persistent Storage Management

---
*These programs represent the culmination of core C programming, bridging data structures, memory alignment, and persistent storage operations.*
