# C++ 100 Patterns 🚀

Welcome to C++ 100 Patterns, a curated collection of 100 C++ programs designed to help learners build confidence with nested loops, coordinate-based thinking, and pattern logic.

Whether you are just beginning with C++ or revisiting the fundamentals, this repository offers a structured path from simple stars and numbers to more advanced patterns. Each program is intentionally simple, readable, and beginner-friendly.

## 📂 Repository Structure

The patterns are organized into four progressive categories:

- 01-star-patterns/ - Fundamental shapes such as squares, triangles, and pyramids using `*`.
- 02-number-patterns/ - Patterns built from numbers, arithmetic sequences, and numeric grids.
- 03-alphabet-patterns/ - Patterns using letters and ASCII-style character logic.
- 04-general-utility/ - Additional utility-focused or general practice programs.

## 💡 Why This Repository?

This repository is designed to help you learn by doing. Instead of jumping straight into abstract concepts, you can practice with small, focused examples that gradually become more challenging.

What makes it useful:

- Modern C++ style: Programs use standard `<iostream>`-based syntax and modern, straightforward structure.
- Clear naming: Variables are written as `row` and `col` to make the grid logic easier to follow.
- Educational comments: Each file explains the pattern logic so you can understand how the loops work, not just copy them.
- Consistent formatting: Files follow a uniform style, making it easier to compare solutions and build good habits.

If you want a practical, approachable way to strengthen your understanding of loops and pattern design, this repository is a strong place to start.

## 🚀 Getting Started

### Prerequisites

Make sure you have a C++ compiler installed, such as `g++`.

### Clone the repository

```bash
git clone https://github.com/muhammadabdurrehmanmaqsood/cpp-100-patterns.git
cd cpp-100-patterns
```

### Compile and run a program

```bash
g++ 01-star-patterns/pyramid-star-pattern.cpp -o pyramid
./pyramid
```

If you are using Windows, you can follow the equivalent `.exe` output approach in your terminal or IDE.

## 🧪 Example

Here is a simple example of the kind of output you will practice with:

```cpp
#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int row = 1; row <= rows; ++row) {
        for (int col = 1; col <= row; ++col) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```

## 🤝 Contributing

Contributions are welcome. If you would like to improve the explanations, add new patterns, or help refine existing examples, feel free to open an issue or submit a pull request.

## 📄 License

This repository currently does not include a license file. If you plan to reuse or redistribute the content publicly, consider adding an appropriate open-source license.
