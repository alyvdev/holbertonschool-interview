#!/usr/bin/python3
"""Log parsing script"""

import sys


def print_stats(total_size, status_codes):
    """
    Print the accumulated metrics.
    """
    print("File size: {}".format(total_size))
    for code in sorted(status_codes):
        if status_codes[code] > 0:
            print("{}: {}".format(code, status_codes[code]))


def main():
    """
    Process stdin line by line and compute metrics.
    """
    total_size = 0
    status_codes = {200: 0, 301: 0, 400: 0,
                    401: 0, 403: 0, 404: 0, 405: 0, 500: 0}
    line_count = 0

    try:
        for line in sys.stdin:
            line = line.strip()
            parts = line.split()
            if len(parts) < 9:
                continue

            try:
                # Parse file size
                file_size = int(parts[-1])
                total_size += file_size

                # Parse status code
                status_code = int(parts[-2])
                if status_code in status_codes:
                    status_codes[status_code] += 1
            except ValueError:
                continue

            line_count += 1
            if line_count % 10 == 0:
                print_stats(total_size, status_codes)

    except KeyboardInterrupt:
        print_stats(total_size, status_codes)
        raise

    print_stats(total_size, status_codes)


if __name__ == "__main__":
    main()
