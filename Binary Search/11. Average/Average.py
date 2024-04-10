import sys

# Redirecting input and output to files
sys.stdin = open('Average.inp', 'r')
sys.stdout = open('Average.out', 'w')

# Reading input from file
n, k = map(int, input().split())
a = list(map(int, input().split()))

# Function to check if there exists a segment with average greater than or equal to `mid`
def is_possible(mid):
    prefix_sum = [0] * (n + 1)
    min_sum = 0

    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + a[i - 1] - mid

        if i >= k:
            min_sum = min(min_sum, prefix_sum[i - k])

        if i >= k and prefix_sum[i] - min_sum >= 0:
            return True

    return False

# Binary search to find maximum average
def max_average_segment(a, k):
    left = min(a)
    right = max(a)
    eps = 1e-6

    while right - left > eps:
        mid = (left + right) / 2
        if is_possible(mid):
            left = mid
        else:
            right = mid

    return left

# Calculate and print the maximum average segment
print("{:.3f}".format(max_average_segment(a, k)))
