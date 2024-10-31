#!/usr/bin/python3

def canUnlockAll(boxes):
    opened_boxes = {0}
    to_check = [0]

    while to_check:
        box = to_check.pop()

        for key in boxes[box]:
            if key not in opened_boxes and key < len(boxes):
                opened_boxes.add(key)
                to_check.append(key)
                
    return len(opened_boxes) == len(boxes)

if __name__ == "__main__":
    boxes1 = [[1], [2], [3], [4], []]
    print(canUnlockAll(boxes1))

    boxes2 = [[1, 4, 6], [2], [0, 4, 1], [5, 6, 2], [3], [4, 1], [6]]
    print(canUnlockAll(boxes2))

    boxes3 = [[1, 4], [2], [0, 4, 1], [3], [], [4, 1], [5, 6]]
    print(canUnlockAll(boxes3))
