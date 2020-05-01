def aCounter(s, l):
    i = a = 0
    
    while i < l:
        if s[i] == "a":
            a += 1
        i += 1
    return a

def repeatedString(s, n):
    l = len(s) 
    a = aCounter(s, l)
    result = (n / l) * a
    result += aCounter(s, n % l)
    return int(result)

def main():
    s = "a"
    n = 1000000000000
    print(repeatedString(s, n))

if __name__ == "__main__":
    main()
