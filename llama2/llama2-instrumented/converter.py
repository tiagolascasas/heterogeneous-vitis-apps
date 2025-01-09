import csv
from collections import defaultdict

data = defaultdict(list)

with open('loop_iterations.csv', 'r') as file:
    reader = csv.reader(file)
    for row in reader:
        key, value = row[0], int(row[1])
        data[key].append(value)

with open('loop_iterations_summary.csv', 'w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(['loop', 'max', 'min', 'avg', 'directive'])
    for key in sorted(data):
        values = data[key]
        max_iter = max(values)
        min_iter = min(values)
        avg_iter = round(sum(values) / len(values))
        directive = f"#pragma HLS loop_tripcount max={max_iter} min={min_iter} avg={avg_iter}"
        writer.writerow([key, max_iter, min_iter, avg_iter, directive])
