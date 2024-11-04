# Read the number of test cases
T = int(input().strip())

results = []
for _ in range(T):
    # Read each test case values
    X, Y, Z = map(int, input().strip().split())
    
    # Calculate total number of students
    total_students = X * Y
    
    # Check if passed students are more than 50% of total students
    if Z > total_students / 2:
        results.append("YES")
    else:
        results.append("NO")

# Output all results
print("\n".join(results))
