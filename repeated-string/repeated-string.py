def aCounter(s, nlen):
    i = a = 0
    
    while i < nlen:
        if s[i] == "a":
            a += 1
        i += 1
    return a

def repeatedString(s, n):
    slen = len(s) 
    a = aCounter(s, slen)
    result = (n / slen) * a
    result += aCounter(s, n % slen)
    return int(result)

def main():
    s = "a"
    n = 1000000000000
    print(repeatedString(s, n))

if __name__ == "__main__":
    main()
