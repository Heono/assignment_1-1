def isPrime(n):
    if n <= 1: 
        print('error')
        return
    for i in range(2, n+1):
        if n % i == 0: break
    if i == n: 
        print('%d is a prime number'%n)
        return 
    else: 
        print('%d is not a prime number'%n)
        return

a = int(input())
isPrime(a)