def countingValleys(n, s):
    alt = val = i = 0

    while i < n:
        if alt == 0 and s[i] == "D":
            val += 1
        if s[i] == "D":
            alt += 1
        else:
            alt -= 1
        i += 1
   
    return val

def main():
    n = 8
    s = "UDDDUDUU"
    print(countingValleys(n, s))

if __name__ == "__main__":
    main()
