#!/usr/bin/python3
"""
Reads from standard input and computes metrics
"""
import sys


# Define valid status codes
VALID_CODES = {200, 301, 400, 401, 403, 404, 405, 500}

# Initialize variables
total_size = 0
line_count = 0
status_counts = {code: 0 for code in VALID_CODES}

# Function to print statistics
def print_stats():
  global total_size, line_count, status_counts
  print(f"Total file size: {total_size}")
  print(f"Number of lines by status code:")
  for code, count in sorted(status_counts.items()):
    if count > 0:
      print(f"{code}: {count}")
  line_count = 0
  status_counts = {code: 0 for code in VALID_CODES}  # Reset counters

# Main loop
try:
  for line in sys.stdin:
    line = line.strip()  # Remove trailing newline
    # Parse log entry
    try:
      ip, date, _, _, status_code, file_size = line.split()
      file_size = int(file_size)
      if status_code not in VALID_CODES:
        continue  # Skip invalid status codes
      total_size += file_size
      status_counts[int(status_code)] += 1
      line_count += 1
    except ValueError:
      continue  # Skip invalid lines

    # Print stats every 10 lines or on keyboard interrupt
    if line_count % 10 == 0 or line_count == 1:
      print_stats()

except KeyboardInterrupt:
  print_stats()
