#!/usr/bin/python3
"""Script that reads stdin line by line and computes metrics for HTTP logs"""

import sys
from collections import OrderedDict
import re

def grep(pattern, line):
    """Helper function to find pattern in line"""
    return re.search(pattern, line)

def print_log(size, codes):
    """Print statistics for file size and status codes"""
    print("File size: {}".format(size))
    for k, v in codes.items():
        if k and v:
            print("{}: {}".format(k, v))

def main():
    """Main function to process log input"""
    line_count = total_size = 0
    CODES = [200, 301, 400, 401, 403, 404, 405, 500, None]
    codes = OrderedDict((k, 0) for k in CODES)
    try:
        for line in sys.stdin:
            status, size = grep(" \d{3} ", line), grep("\d{1,4}$", line)
            status = int(status.group()) if status else None
            codes[status] += 1
            total_size += int(size.group()) if size else 0
            line_count += 1
            if line_count % 10 == 0:
                print_log(total_size, codes)
        print_log(total_size, codes)
    except KeyboardInterrupt:
        print_log(total_size, codes)

if __name__ == "__main__":
    main()
