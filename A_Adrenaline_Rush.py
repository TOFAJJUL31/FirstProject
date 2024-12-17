def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    n = int(data[0])  # First input is `n`
    if n == 1:
        # If n = 1, no pairs can be formed
        print(0)
        return
    
    arr = list(map(int, data[1:]))  # Remaining inputs are the array elements

    if n == 2:
        # If n = 2, only one pair can exist
        print(2)
        print(arr[0], arr[1])
        print(arr[1], arr[0])
        return

    # For n > 2, calculate n + 1 pairs
    print(n + 1)

    pairs = []

    # Create pairs between other elements (excluding the first element initially)
    for i in range(1, n):
        for j in range(i + 1, n):
            pairs.append((arr[i], arr[j]))

    # Add a final pair where the first element wins indirectly
    pairs.append((arr[1], arr[0]))

    # Print the pairs
    for p in pairs:
        print(p[0], p[1])


if __name__ == "__main__":
    main()
