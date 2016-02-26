# Thanks to elven.io :)

import csv
import sys


def calc_state_points(obj):
    if obj['PublishedRating'] == 'Empty Star':
        PublishedRating = 0
    else:
        PublishedRating = int(obj['PublishedRating'] or 0)
    return {0: 0, 3: 2, 4: 4, 5: 6}.get(PublishedRating) or 0


def calc_total_points(obj):
    return (int(obj['site_visit_points'] or 0) +
            int(obj['staff_points'] or 0) +
            int(obj['state_points'] or 0))


def calc_overall_rating(site_visit_points, staff_points, state_points, old_rating):
    if (site_visit_points == 0 or staff_points == 0 or state_points == 0):
      return 'Below Bronze'

    rating = site_visit_points + staff_points + state_points

    if (rating >= 13):
        return 'Gold'
    elif (rating >= 10):
        return 'Silver'
    elif (rating >= 5):
        return 'Bronze'
    else:
        return old_rating


def generate_new_rows(filename):
    with open(filename) as f:
        reader = csv.reader(f)
        cols = reader.next() + ['state_points', 'esd_total_points',
                                'esd_overall_rating']
        yield cols
        for row in reader:
            obj = dict(zip(cols, row))
            obj['state_points'] = calc_state_points(obj)
            total = calc_total_points(obj)
            esd_overall_rating = calc_overall_rating(int(obj['site_visit_points']), int(obj['staff_points']), int(obj['state_points']), obj['overall_rating'])
            yield row + [obj['state_points'], total, esd_overall_rating]


if __name__ == '__main__':
    filename = sys.argv[1]
    rows = list(generate_new_rows(filename))
    with open(filename, 'w') as f:
        csv.writer(f).writerows(rows)
