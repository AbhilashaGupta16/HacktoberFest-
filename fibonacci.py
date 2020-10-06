def fibonacci(n):
    if n <= 1:
        return n
        
    res = fibonacci(n-1) + fibonacci(n-2)

    return res


ac = fibonacci(4)

print(ac)