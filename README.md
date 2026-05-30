# 🏆 Competitive Programming

This repository is dedicated to organizing and sharing study codes, problem-solving solutions, and contest submissions for **Competitive Programming** developed in **C**, **C++**, and **Python**. The problems are sourced from various training platforms, primarily **Beecrowd** and **CSES**, alongside local competitions hosted at **UFPB** (Federal University of Paraíba).

---

## 🛠️ Technologies and Platforms

The following languages and tools are used in this project:

<div style="display: inline-block">
  <img src="https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black" alt="C Badge" />
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++ Badge" />
  <img src="https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white" alt="Python Badge" />
  <img src="https://img.shields.io/badge/VS_Code-007ACC?style=for-the-badge&logo=visual-studio-code&logoColor=white" alt="VS Code Badge" />
  <img src="https://img.shields.io/badge/PowerShell-5391FE?style=for-the-badge&logo=powershell&logoColor=white" alt="PowerShell Badge" />
</div>

### Platforms
* **Beecrowd**: Contains multiple solutions divided into basic and intermediate structural topics, such as Mathematics, Strings, and AD-HOC.
* **CSES Problem Set**: Challenges focused on classic and advanced algorithm topics.
* **UFPB / Pacode**: Submissions for internal programming marathons and competitive programming track.

---

## 📂 Repository Structure

The file structure of the repository is organized as follows:

```
Competitive_Programming/
├── 📁 Beecrowd/              # Solved problems categorized by topic
│   ├── 📁 AD-HOC/            # General logic and simulation problems (C/Python)
│   ├── 📁 Estruturas_Bibliotecas/ # Native and custom data structures (C)
│   ├── 📁 Iniciante/         # Basic introductory problems (C/Python)
│   ├── 📁 Matemática/        # Numerical algorithms and math problems (C/Python)
│   └── 📁 Strings/           # String manipulation and pattern matching (C)
├── 📁 CSES/                  # CSES Problem Set solutions (C++)
├── 📁 Pacode/                # Solutions for local UFPB programming contests
│   └── 📁 Maratona02/        # Codes developed during the second Maratona edition
└── 📁 Studies/               # Classic algorithms and data structures implemented for study
    ├── 📁 BIT/               # Binary Indexed Tree (Fenwick Tree)
    ├── 📁 SegTree/           # Segment Tree (Range Queries)
    └── 📁 SparseTable/       # Sparse Table for fast range queries (RMQ, Modulo, etc.)
```

---

## 📚 Studied Topics & Data Structures

Below are the implementations created for conceptual study and reuse in problem-solving:

| Topic / Structure | Description / Supported Operations | Related Files |
| :--- | :--- | :--- |
| **BIT (Fenwick Tree)** | Range sum queries and point updates efficiently in $O(\log N)$. | 📄 [CuriousRobinHood.cpp](Studies/BIT/CuriousRobinHood.cpp) |
| **Segment Tree (SegTree)** | Range queries and point/range updates efficiently in $O(\log N)$. | 📄 [DynamicRangeSumQueries.cpp](Studies/SegTree/DynamicRangeSumQueries.cpp)<br>📄 [RangeUpdateQueries.cpp](Studies/SegTree/RangeUpdateQueries.cpp) |
| **Sparse Table** | Static structure for range queries (like RMQ) in $O(1)$ after $O(N \log N)$ preprocessing. | 📄 [MaximumModuloEquality.cpp](Studies/SparseTable/MaximumModuloEquality.cpp)<br>📄 [StaticRangeMinimumQueries.cpp](Studies/SparseTable/StaticRangeMinimumQueries.cpp) |

---

## 🚀 How to Compile and Run

To run the codes locally, you will need compilers configured on your machine (such as **GCC/G++** for C/C++ or **Python 3** interpreter).

### C / C++
It is recommended to compile using contest optimization flags:
```bash
# Compiling C++ files (.cpp)
g++ -O2 -Wall -std=c++17 file_name.cpp -o executable_name

# Compiling C files (.c)
gcc -O2 -Wall file_name.c -o executable_name

# To execute (Windows PowerShell)
.\executable_name.exe
```

### Python
To run Python solutions:
```bash
python file_name.py
```

---

## 📝 License

This project is licensed under the [MIT License](LICENSE).
