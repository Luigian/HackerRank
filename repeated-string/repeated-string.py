def aCounter(s, length):
    i = a_count = 0
    
    while i < length:
        if s[i] == "a":
            a_count += 1
        i += 1
    return a_count

def repeatedString(s, n):
    length = len(s) 
    a_count = aCounter(s, length)
    result = (n / length) * a_count
    result += aCounter(s, n % length)
    return int(result)

def main():
    s = "a"
    n = 1000000000000
    print(repeatedString(s, n))

if __name__ == "__main__":
    main()
