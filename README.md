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

The library can be compiled from source using `make`:

- `make` or `make all`: Compiles mandatory functions and generates `libft.a`.
- `make bonus`: Compiles both mandatory and bonus functions into `libft.a`.
- `make clean`: Removes object files (`.obj/`) and dependency files (`.dep/`).
- `make fclean`: Removes object files, dependency files, and `libft.a`.
- `make re`: Rebuilds the library from scratch (`fclean` + `all`).

## Continuous Integration & Distribution Bundles

A GitHub Actions workflow automatically builds and packages the library on every pull request targeting `main` and on push to `main`. It generates pre-compiled distribution bundles for both Linux (`x86_64`) and macOS (`ARM64`).

Each release contains:
- `libft.tar.gz`: Default distribution archive containing:
  ```
  libft/
  ├── include/
  │   └── libft.h
  └── lib/
      └── libft.a
  ```
- `libft-Linux-X64.tar.gz`: Linux x86_64 precompiled bundle.
- `libft-macOS-ARM64.tar.gz`: macOS Apple Silicon precompiled bundle.
- `libft.h`: Direct header file.
- `libft.a`: Direct Linux static library.

## Using Precompiled Libft in Downstream Projects

To use the precompiled library in other repositories without having to compile libft from source, add a download rule to your project's `Makefile`:

```makefile
LIBFT_DIR = ./libs/libft
LIBFT_URL = https://github.com/tristan-gscn/simply-invent-libft/releases/latest/download/libft.tar.gz

$(LIBFT_DIR):
	@mkdir -p $(LIBFT_DIR)
	curl -sL $(LIBFT_URL) | tar -xz -C $(LIBFT_DIR)

# Compilation flags
CFLAGS  += -I$(LIBFT_DIR)/include
LDFLAGS += -L$(LIBFT_DIR)/lib -lft
```
