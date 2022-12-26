def switch(key):
    rs = {"black" : 0,
        "brown" : 1,
        "red" : 2,
        "orange" : 3,
        "yellow" : 4,
        "green" : 5,
        "blue" : 6,
        "violet" : 7,
        "grey" : 8,
        "white" : 9
        }.get(key, "")
    return rs

def square(n):
    res = 1
    for i in range(n):
        res *= 10
    return res
    

r1 = input()
r2 = input()
r3 = input()

r1 = switch(r1)*10
r2 = switch(r2)
mul = square(switch(r3))

print((r1 + r2) * mul)
