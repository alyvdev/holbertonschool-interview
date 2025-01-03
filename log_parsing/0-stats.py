#!/usr/bin/python3
"""Script that reads stdin line by line and computes metrics"""

import sys

# Define valid status codes
VALID_CODES = {200, 301, 400, 401, 403, 404, 405, 500}

# Initialize variables
total_size = 0
line_count = 0
status_counts = {code: 0 for code in VALID_CODES}

def print_stats():
  """Print accumulated statistics"""
  print(f"File size: {total_size}")
  for code in sorted(status_counts.keys()):
    if status_counts[code] > 0:
      print(f"{code}: {status_counts[code]}")

try:
  for line in sys.stdin:
    line = line.strip()
    try:
      parts = line.split()
      status_code = int(parts[-2])
      file_size = int(parts[-1])
      
      if status_code in VALID_CODES:
        status_counts[status_code] += 1
      total_size += file_size
      line_count += 1

      if line_count % 10 == 0:
        print_stats()
    except (ValueError, IndexError):
      continue

except KeyboardInterrupt:
  print_stats()
