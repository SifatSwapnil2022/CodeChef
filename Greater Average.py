t = int(input())
for _ in range(t):
    a, b, c = map(float, input().split())
    avg_of_a_b = (a + b) / 2
    if avg_of_a_b > c:
        print("YES")
    else:
        print("NO")
