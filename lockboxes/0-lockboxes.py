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