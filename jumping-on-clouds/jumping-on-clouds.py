def jumpingOnClouds(c_count, c):
    i = jumps = 0

    while i < c_count - 1:
        if i < c_count - 2 and c[i + 2] == 0:
            i += 2
        else:
            i += 1
        jumps += 1

    return jumps

def main():
    c_count = 7
    c = [0, 0, 1, 0, 0, 1, 0]
    print(jumpingOnClouds(c_count, c))

if __name__ == "__main__":
    main()
