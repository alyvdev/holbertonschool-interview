# Minimum Operations

This project contains a Python function that calculates the minimum number of operations needed to achieve a target number `n` using a specific set of operations.

## Function

### `minOperations(n)`

This function takes an integer `n` and returns the minimum number of operations required to reach `n` starting from 1. The only operations allowed are:

1. Copy All
2. Paste

### Parameters

- `n` (int): The target number.

### Returns

- `int`: The minimum number of operations required to reach `n`.

### Example

```python
>>> minOperations(4)
4
>>> minOperations(12)
7
```

## Usage

To use the `minOperations` function, simply import it into your Python script and call it with the desired target number.

```python
from 0-minoperations import minOperations

result = minOperations(9)
print(result)  # Output: 6
```

## Files

- `0-minoperations.py`: Contains the `minOperations` function.
- `README.md`: This file, providing an overview of the project.

## Author

This project is maintained by [Your Name].