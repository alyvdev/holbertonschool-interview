# Log Parsing

This project involves two Python scripts for generating and parsing log data.

## Files

### `0-generator.py`

This script generates random log entries and writes them to the standard output. Each log entry includes a random IP address, a timestamp, a request method, a URL, an HTTP status code, and a response size.

### `0-stats.py`

This script reads log entries from the standard input, parses them, and prints statistics about the log data. It tracks the total file size and the count of each HTTP status code. The statistics are printed every 10 lines and upon termination of the script.

## Usage

To generate log data and parse it, you can use the following commands:

```sh
# Generate log data and pipe it to the parser
python3 0-generator.py | python3 0-stats.py
```

## Example Output

```
File size: 12345
200: 50
301: 5
400: 2
401: 1
403: 3
404: 4
405: 1
500: 2
```

## Requirements

- Python 3.x

## Author

- Ali Aliyev
- [GitHub Profile](https://github.com/alyvofficial)