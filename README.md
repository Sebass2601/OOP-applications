# OOP Applications in C++

A step-by-step series of C++ programs that shows how object-oriented programming grows from a first class to complete programs built on custom data structures.

## Projects

The folders are meant to be read in this order:

| Folder | What it shows |
| --- | --- |
| `hello_world_project` | Project setup: a minimal C++ program built with a makefile |
| `initial_file` | A first class definition |
| `pair` | A `Pair` class with its constructors |
| `pair_dtor` | The same class with a destructor, to follow an object's lifetime |
| `heap_pair_object` | Creating and freeing objects on the heap (`new` / `delete`) |
| `template_example` | Generic code with C++ templates |
| `linked_list` | A linked list data structure (`list.h` / `list.hpp`) |
| `tower` | The Tower of Hanoi game, built on a custom `Stack` class and a `Game` class |

## Build and run

Each project has its own makefile:

```bash
cd <project-folder>
make
./<program-name>
```

Requirements: `g++` and `make`.

## What I practised

- Classes, constructors, destructors and object lifetime
- Manual memory management on the heap
- Templates and generic data structures
- Splitting programs into headers and source files
