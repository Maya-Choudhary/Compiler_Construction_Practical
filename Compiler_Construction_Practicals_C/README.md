# Compiler Design Practicals in C

This repository contains the first five practical programs from the compiler-design index.

## Programs

1. **Fibonacci Series** — `01_fibonacci_series.c`
2. **Macro Processor (simplified)** — `02_macro_processor.c`
3. **Lexical Analysis** — `03_lexical_analysis.c`
4. **Arithmetic Parse Tree** — `04_arithmetic_parse_tree.c`

## Requirements

- A C compiler such as GCC (MinGW on Windows, GCC on Linux, or Clang).
- A terminal or IDE such as VS Code or Code::Blocks.

## Compile and run

Run these commands from the project folder. Replace the filename as needed.

### Windows (GCC / MinGW)

```bash
gcc 01_fibonacci_series.c -o fibonacci.exe
fibonacci.exe

gcc 02_macro_processor.c -o macro_processor.exe
macro_processor.exe

gcc 03_lexical_analysis.c -o lexical_analysis.exe
lexical_analysis.exe

gcc 04_arithmetic_parse_tree.c -o parse_tree.exe
parse_tree.exe

```

### Linux / macOS

```bash
gcc 01_fibonacci_series.c -o fibonacci
./fibonacci

gcc 02_macro_processor.c -o macro_processor
./macro_processor

gcc 03_lexical_analysis.c -o lexical_analysis
./lexical_analysis

gcc 04_arithmetic_parse_tree.c -o parse_tree
./parse_tree

```

## Upload to GitHub

1. Create a new repository on GitHub.
2. Open a terminal in the extracted folder.
4. Run:

```bash
git init
git add .
git commit -m "Add first five compiler design practicals in C"
git branch -M main
git remote add origin https://github.com/YOUR-USERNAME/YOUR-REPOSITORY.git
git push -u origin main
```

Replace the remote URL with your own GitHub repository URL.
