# Thanks to elven.io :)

import csv
import sys


def calc_state_points(obj):
    published_rating = int(obj['published_rating'] or 0)
    return {0: 0, 3: 2, 4: 4, 5: 6}.get(published_rating) or 0


def calc_total_points(obj):
    return (int(obj['site_visit_points'] or 0) +
            int(obj['staff_points'] or 0) +
            int(obj['sas_points'] or 0))


def calc_overall_rating(total):
    for (threshold, rating) in ((13, 'Gold'), (10, 'Silver'), (5, 'Bronze')):
        if total >= threshold:
            return rating
    return 'Below Bronze'


def generate_new_rows(filename):
    with open(filename) as f:
        reader = csv.reader(f)
        cols = reader.next() + ['state_points', 'total_points',
                                'overall_rating']
        yield cols
        for row in reader:
            obj = dict(zip(cols, row))
            total = calc_total_points(obj)
            yield row + [calc_state_points(obj), total,
                         calc_overall_rating(total)]


if __name__ == '__main__':
    filename = sys.argv[1]
    rows = list(generate_new_rows(filename))
    with open(filename, 'w') as f:
        csv.writer(f).writerows(rows)
