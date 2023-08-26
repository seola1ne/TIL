# 글을 시작하며
다음 주에 있을 교내 알고리즘 경진 대회 준비를 위해, 코딩테스트에 자주 사용되거나 유용한 Python 개념들을 정리해 놓으려 한다. 간간이 내용을 더 추가할 예정이다!

# str, list, dict, set
### str
> `""` / `''`으로 생성한다.
- 인덱싱, 슬라이싱이 가능하고, 특정 인덱스 값 변경이 불가하다.
- 문자열 연산(+, *)이 가능하다.

```python
str1 = "mini"
str2 = "dodo"
print(str1 + " and " + str2) # mini and dodo
```

```python
str = "mini"
str[0] = "j" # TypeError: 'str' object does not support item assignment
```

### list
> `[]`, `list()`으로 생성한다. 
- 인덱싱, 슬라이싱이 가능하다.
- 원소는 중복될 수 있다.
- 특정 인덱스 값을 변경할 수 있다.
- 원소 추가(append, insert) / 제거(remove)가 가능하다.

**인덱싱**
```python
li = [1, 2, 3, 4, 5]
print(li[1], li[-1]) # 2 5
```

**슬라이싱**
```python
print(li[0:]) # [1, 2, 3, 4, 5] # 0번째부터 마지막까지
print(li[0::2]) # [1, 3, 5] # 0번째부터 2만큼 간격
print( li[len(li)::-1] ) 
# [5, 4, 3, 2, 1] # 슬라이싱의 step을 이용해 li를 뒤집어 출력
```

**슬라이싱을 이용한 치환**
```python
# 치환
li[0:2] = [10, 20]
print(li) # [10, 20, 3, 4, 5]
```

***슬라이싱을 이용한 삭제***
```python
# 삭제
li[1:2] = []
print(li) # [10, 3, 4, 5]
```

***슬라이싱을 이용한 삽입***
```python
# 삽입
li[2:2] = [7, 7]
print(li) # [10, 3, 7, 7, 4, 5]

li[:0] = ['first']
print(li) # ['first', 10, 3, 7, 7, 4, 5]

li[len(li):] = ['last']
print(li) # ['first', 10, 3, 7, 7, 4, 'last']
```

### dict
> `{}` / `dict()`으로 생성한다.
- 'key' : 'value'의 쌍을 데이터로 가지며, 'key'는 중복될 수 없다.
- 순서가 없어 인덱싱이 불가하다.
- 원소를 추가 / 삭제할 수 있다.
- 'key' 값으로 'value' 값 조회, 수정이 가능하다.
- key와 value의 자료형은 통일하지 않아도 된다.

```python
d = dict()
d['사과'] = 'Apple'
d['바나나'] = 'Banana'
```

```python
d.keys() # key만
d.values() # value만
# key 혹은 value만 리스트로 추출한다.
```

### set
>`{원소1, 원소2, ...}` 혹은 str을 통해 초기화한다.
- 순서가 없어 인덱싱이 불가하다.
- 원소는 중복될 수 없다.
- 원소 추가 / 제거 / 조회가 가능하다. 또, 원소로 조회할 수 있다.

```python
s = {1, 2, 3}

# 원소 추가
s.add(4) # {1, 2, 3, 4}

# 원소 여러 개 추가
s.update([5, 7]) # {1, 2, 3, 4, 5, 7}

# 원소 삭제
s.remove(7) # {1, 2, 3, 4, 5}
```



<hr />


출처 : https://choiiis.github.io/python/for-coding-test/, https://victorydntmd.tistory.com/236, https://daeun-computer-uneasy.tistory.com/42