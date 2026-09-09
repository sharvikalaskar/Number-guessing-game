# Number-guessing-game

A simple console-based number guessing game written in C++. The program picks a random number between 1 and 10, and the player has a limited number of attempts to guess it correctly.

## How It Works

1. The program generates a random number between `1` and `10` using `rand()`, seeded with the current time via `srand(time(0))`.
2. The player is prompted to enter a guess.
3. After each guess, the program gives feedback:
   - **"Too high! Try a lower number"** if the guess is greater than the secret number.
   - **"Too low! Try a higher number"** if the guess is less than the secret number.
4. The player keeps guessing until either:
   - They guess the correct number, **or**
   - They run out of attempts (default: 10).
5. At the end, the program prints whether the player guessed correctly and reveals the number.

## Requirements

- A C++ compiler (e.g. `g++`, `clang++`, or MSVC)
- C++11 or later (not strictly required here, but good practice)

## Build & Run

Using `g++`:

```bash
g++ -o guessing_game guessing_game.cpp
./guessing_game
```

On Windows (with MSVC or MinGW), the executable will be `guessing_game.exe`.

## Example Session

```
=========================================
        NUMBER GUESSING GAME
=========================================
I'm thinking of a number between 1 and 10.
You have 10 attempts.
Enter the number:
5
Too low! Try a higher number
Enter the number:
8
Too high! Try a lower number
Enter the number:
7
You guessed correctly! The number was 7.
```

## Game Rules

| Setting          | Value |
|-------------------|-------|
| Lower bound        | 1     |
| Upper bound        | 10    |
| Maximum attempts   | 10    |

These values are set as variables/constants near the top of `main()` and can be adjusted directly in the source code:

```cpp
int n, lower = 1, upper = 10, attempt = 1;
const int maxAttempts = 10;
```

## Known Limitations

- The random number is generated using `rand() % 10 + 1`, which has minor statistical bias but is fine for a simple game.
- Input validation is not implemented — entering non-numeric input (e.g. letters) will cause undefined behavior in the guessing loop.
- The upper bound in the intro message and the actual random range must be kept in sync manually if you change `upper`.

## License

Free to use and modify for personal or educational purposes.
