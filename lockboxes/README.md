# Lockboxes

This project is part of the Holberton School interview preparation curriculum. It involves solving the lockboxes problem using Python.

## Table of Contents
- [Description](#description)
- [Requirements](#requirements)
- [Usage](#usage)
- [Example](#example)
- [License](#license)

## Description

The lockboxes problem is a classic algorithmic challenge. You have `n` number of locked boxes in front of you. Each box is numbered sequentially from `0` to `n - 1` and each box may contain keys to other boxes. The goal is to determine if you can open all the boxes starting from box `0`.

## Requirements

- Python 3.x
- A text editor or an IDE

## Usage

To use the script, simply run it with Python:

```bash
python3 lockboxes.py
```

## Example

Here is an example of how the lockboxes problem can be solved:

```python
def canUnlockAll(boxes):
    opened = [False] * len(boxes)
    opened[0] = True
    keys = boxes[0]
    
    for key in keys:
        if key < len(boxes) and not opened[key]:
            opened[key] = True
            keys.extend(boxes[key])
    
    return all(opened)

# Example usage
boxes = [[1], [2], [3], [4], []]
print(canUnlockAll(boxes))  # Output: True
```

## License

This project is licensed under the MIT License.