def switch(key): # 색상에 따른 값을 구하는 함수
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

def square(n): # 세 번째 수의 값에 따라 10의 제곱 수를 구하는 함수
    res = 1
    for i in range(n):
        res *= 10
    return res
    
r1 = input() # 첫 번째 저항 값 입력
r2 = input() # 두 번째 저항 값 입력
mul = input() # 세 번째, 곱하는 값 입력

r1 = switch(r1)*10 # 
r2 = switch(r2)
mul = square(switch(mul)) # 곱하는 값의 색에 해당하는 값을 반환받고, 그 값 만큼 10의 제곱 수를 반환받음

print((r1 + r2) * mul) # 결과 출력
