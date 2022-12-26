init = int(input());
n = init

count = 0

while n != init:
    n = (n % 10) * 10 + ((n / 10) + n % 10) % 10
    count += 1

print(count)