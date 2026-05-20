# Cub3D

> A simple 3D raycasting engine written in C using MiniLibX, inspired by the legendary game Wolfenstein 3D.

## Overview

Cub3D is a project from 42 that consists of creating a first-person 3D game engine using the raycasting technique.

The goal of the project is to understand:
- raycasting mathematics
- graphical rendering
- event handling
- texture mapping
- player movement
- parsing and map validation

This project is heavily inspired by early FPS games such as Wolfenstein 3D.

---

## Features

### Raycasting Engine

- Real-time 3D rendering using raycasting
- Perspective projection
- Wall collision detection
- Smooth player movement
- Real-time rotation

### Textures

- North, South, East and West wall textures
- Texture mapping
- Dynamic wall rendering

### Map Parsing

- `.cub` configuration file support
- Map validation
- Player spawn detection
- RGB floor and ceiling colors
- Invalid map detection

### Controls

```text
W / A / S / D  -> Move player
Left Arrow     -> Rotate left
Right Arrow    -> Rotate right
ESC            -> Exit game
```

### Graphics

- MiniLibX rendering
- Minimap support
- Floor and ceiling colors
- Real-time frame rendering

---

## Project Structure

```bash
.
├── parsing/
├── raycasting/
├── rendering/
├── textures/
├── events/
├── utils/
├── includes/
├── libft/
├── minilibx-linux/
├── maps/
├── Makefile
└── cub3D
```

---

## Compilation

Clone the repository:

```bash
git clone <your-repository-url>
cd cub3D
```

Compile the project:

```bash
make
```

Clean object files:

```bash
make clean
```

Remove all generated files:

```bash
make fclean
```

Recompile everything:

```bash
make re
```

---

## Usage

Launch the program with a valid `.cub` map:

```bash
./cub3D maps/map.cub
```

Example map:

```text
NO ./textures/north.xpm
SO ./textures/south.xpm
WE ./textures/west.xpm
EA ./textures/east.xpm

F 220,100,0
C 225,30,0

111111111111
100000000001
100000000001
1000N0000001
100000000001
111111111111
```

---

## Raycasting

Cub3D uses the raycasting technique to simulate a 3D environment from a 2D map.

For each vertical screen column:
- a ray is cast from the player's position
- wall intersections are calculated
- wall height is projected on screen
- textures are applied

This reproduces a classic pseudo-3D effect similar to early FPS games.

---

## Map Rules

The map must:
- be fully enclosed by walls
- contain only valid characters
- contain exactly one player spawn
- use valid texture paths
- use valid RGB colors

Allowed map characters:

```text
0 -> empty space
1 -> wall
N/S/E/W -> player spawn
```

---

## Allowed Functions

This project was developed using only the functions allowed by the 42 subject, including:

- `open`
- `close`
- `read`
- `write`
- `malloc`
- `free`
- `math.h`
- MiniLibX functions

and other standard Unix functions.

---

## Learning Objectives

Through this project, we learned:

- raycasting mathematics
- graphical rendering
- texture projection
- event management
- parsing and validation
- memory management
- low-level graphics programming

---

## Testing

The project was tested with:
- valid and invalid maps
- memory leak checks using Valgrind
- edge cases
- texture validation
- map parsing errors
- collision handling

Example tests:

```bash
./cub3D maps/map.cub

./cub3D invalid_map.cub
```

---

## Technologies

- Language: C
- Standard: C99
- MiniLibX
- Unix/Linux
- Raycasting

---

## Disclaimer

This project is for educational purposes only and follows the rules of the 42 curriculum.
