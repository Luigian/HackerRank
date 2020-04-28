def sockMerchant(n, ar):
    i = j = result = 0
    array = 101 * [0]

    while i < n:
        array[ar[i]] += 1
        i += 1 
    
    while j < 101:
        result += int(array[j] / 2)
        j += 1 
    
    return result

def main():
    n = 9
    ar = [10, 20, 20, 10, 10, 30, 50, 10, 20]
    print(sockMerchant(n, ar))

if __name__ == "__main__":
    main()
