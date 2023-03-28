
# 

# ⚡ JSX란?
- `JSX`는 Javascript에 XML을 추가한 확장한 문법이다.
 - JSX는 리액트로 프로젝트를 개발할 때 사용되므로 공식적인 자바스크립트 문법은 아니다.
 - 브라우저에서 실행하기 전에 코드가 번들링되는 과정에서 바벨을 사용하여 일반 자바스크립트 형태의 코드로 변환된다.
 
 > 즉, 자바스크립트에서 HTML을 작성하듯이 비슷하게 작성할 수 있도록 해 주는 것이 JSX의 가장 큰 장점이자, 이를 사용하는 이유가 된다.   
   
<br><br>
    
 ## 📃 JSX 문법   
    
    
 ### 바깥은 부모 요소가 하나가 감쌀 것!
 > 컴포넌트에 여러 요소가 있다면 반드시 부모 요소 하나가 감싸는 형태여야 한다.
 
 ```Javascript
function App() {
  return ( // 에러 발생
    <h1>test1</h1>
    <h1>test2</h1>
   )
}
```
위처럼 요소가 두 개 이상 존재하므로 이 요소들을 감싸는 부모 요소 한 개가 있어야 한다.


```Javascript
function App() {
  return (
    <div>
    	<h1>test1</h1>
    	<h1>test2</h1>
    </div>
   )
}
```
위처럼, 태그 한 가지로 가장 바깥을 감싼다.

이렇게 사용해야 하는 이유는 Virtual DOM에서 컴포넌트 변화를 감지할 때 효율적으로 비교할 수 있도록 컴포넌트 내부는 하나의 DOM 트리 구조로 이루어져야 한다는 규칙이 있기 때문이다.

<br>

### 자바스크립트 표현식
> JSX 안에서도 자바스크립트 표현식을 사용할 수 있다.
자바스크립트 표현식을 작성하려면 JSX 내부에서 코드를 `{}`로 감싸주면 된다.

```javascript
function App() {
  const name = 'Mini';
  const age = 18;
  return (
    	<div>
    		<h1>Hello, My Name is {name}</h1>
			<h1>My age is {age}</h1>
		</div>
	);
}
```

<br>

### if문(for문) 대신 삼항 연산자 사용
> if문과 for문은 Javascript 표현식이 아니기 때문에 JSX 내부 자바스크립트 표현식에서는 사용할 수 없다.
>
때문에 조건부에 따라 다른 렌더링 시 주변 코드에서 if문을 사용하거나, `{}` 안에서 삼항 연산자를 사용한다.

#### if문을 외부에서 사용하기
```javascript
function App() {
  let desc = '';
  const isWeekend = 'Y';
  if (isWeekend = 'Y') {
    desc = <div>오늘은 주말입니다!</div>;
  } else {
    desc = <div>오늘은 평일입니다!</div>;
  }
  
  return (
    <>
    	{desc}
    </>
  );
}
```

#### 삼항 연산자를 내부에서 사용하기
```javascript
function App() {
  const isWeekend = 'Y';
  return (
    <>
    	<div>
          {isWeekend === 'Y' ? (
           	  <div>오늘은 주말입니다!</div>
           ) : (
              <div>오늘은 평일입니다!</div>
          )}
		</div>
	</>
  );
}
```

#### AND연산자 사용하기
```javascript
function App() {
  const isWeekend = 'Y';
  return (
    	<>
          <div>
              {isWeekend === 'Y' && <div>오늘은 주말입니다!</div>}
               // 조건이 만족하지 않을 경우 아무것도 노출되지 않음
          </div>
     	</>
     );
}
```

#### 즉시실행함수를 사용하기
```javascript
function App() {
	const isWeekend = 'Y';
  	return (
      <>
        {
          (() => {
              if (isWeekend === "Y") {
                return (<div>오늘은 주말입니다!</div>);
              } else {
                  return (<div>오늘은 평일입니다!</div>);
              }
          })()
        }
     </>
}
```

<br>

### camelCase 명명 규칙 사용
1) JSX 스타일링
> JSX에서 자바스크립트 문법을 쓰려면 `{}`를 써야 하기 때문에, 스타일을 적용할 때도 객체 형태로 넣어 주어야 한다.
카멜 표기법으로 작성해야 한다. (font-size => fontSize)

```javascript
function App() {
  const style = {
    backgroundColor: 'tomato',
    fontSize: '12px'
  }
  return (
    <div style={style}>Text</div>
  );
}
```

2) class 대신 className
> - 일반 HTML에서 CSS 클래스를 사용할 때는 class 라는 속성을 사용한다.
> - JSX에서는 class가 아닌 `className`을 사용한다.

```javascript
function App() {
  const style = {
    backgroundColor: 'green',
    fontSize: '12px'
  }
  return (
    <div className = "testClass">Text</div>
  );
}
```

<br>

### JSX 내에서 주석 사용 방법
JSX 내에서 `{/*...*/}`와 같은 형식을 사용한다.

```javascript
function App() {
 	return (
    	<>
      		{/* 주석 사용 방법 */}
      		<div>Text!</div>
      	</>
    ) 
}
```


<hr>

> 출처 : https://goddaehee.tistory.com/296