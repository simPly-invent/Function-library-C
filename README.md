# Libft

A custom C standard library implementation containing standard libc functions, memory manipulation utilities, string handling, linked list operations, and I/O helpers.

## Project Structure

```
.
├── include/
│   └── libft.h              # Header file with all prototypes and types
├── src/
│   ├── mandatory/           # Standard libc & helper functions
│   └── bonus/               # Linked list bonus functions (ft_lst*.c)
├── Makefile                 # Build configuration
└── .github/
    └── workflows/           # CI/CD automation (build & release)
```

## Compilation

The library is built using `make`:

- `make` or `make all`: Compiles mandatory functions and generates `libft.a`.
- `make bonus`: Compiles both mandatory and bonus functions into `libft.a`.
- `make clean`: Removes object files (`.obj/`) and dependency files (`.dep/`).
- `make fclean`: Removes object files, dependency files, and `libft.a`.
- `make re`: Rebuilds the library from scratch (`fclean` + `all`).

## Continuous Integration & Releases

A GitHub Actions workflow automatically builds `libft.a` on every pull request targeting `main` and on pushes to `main`.
Pre-compiled binaries are made available both as workflow run artifacts and directly from the repository's GitHub Releases.
