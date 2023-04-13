
## 🧶 useState의 개념
### state란?
> state란 **컴포넌트가 가질 수 있는 상태**를 의미한다.
>
state를 사용하여 컴포넌트가 렌더링될 때 데이터를 보유하고, 이 데이터를 업데이트해 화면을 다시 렌더링할 수 있다.

state는 클래스형 컴포넌트에서 주로 사용되었는데, 
React 최신 버전에서는 함수형 컴포넌트에서도 `state`를 사용할 수 있다.

<br>

### state 관리 도구, useState
> `useState`는 reack Hooks 중 하나로, 컴포넌트의 state를 간편하게 생성하고 업데이트를 시킬 수 있게 해 주는 도구를 제공해 준다.

state를 함수형 컴포넌트에서 사용하기 위해 `useState`가 사용된다.

<br>

### 왜 useState 사용이 권장될까?
유동적이지 않은 데이터를 저장할 때는 `var`, `let`, `const` 변수에 저장해도 되지만,
자주 바뀌는 중요한 데이터일 경우 **useState**를 사용해 **state**에 저장하는 것이 좋다.

그 이유로는 아래와 같은 것들이 있다.
> **간단하고 직관적인 사용법**을 제공해 상태 관리를 쉽게 할 수 있다.
> 
**객체**나 **배열**과 같은 복잡한 상태를 관리할 수 있다.
>
**자동 재렌더링**이 되어, state 데이터들이 변경되면 **HTML에도 자동적으로 변경사항이 반영**된다.
> 
**새로고침 없이**도 HTML을 변경시켜 보여 주는 웹/앱 사이트를 만들 수 있다.

따라서 useState는 함수형 컴포넌트에서 반드시 사용해야 하는 React Hooks 중 하나라고 볼 수 있다.

<br>

## ✍️ useState 사용하기

### Import

```javascript
import { useState } from 'react';
```

`useState`를 사용하기 위해서는 이렇게 `react` 패키지에서 `import` 해 주어야 한다.

<br>


### 변수 선언
```javascript
const [state, setState] = useState(초기값);
```
state의 생성과 동시에 가져야 할 초기값을 useState 함수의 인자로 넣어주면 **`state`와 `setState`라는 두 가지 요소를 배열 형태로 리턴**해 준다.

>첫 번째 요소인 `state`는 상태 값을 저장할 **변수**이고, 
두 번째 요소인 `setState()`는 상태 값을 업데이트하는 **함수**이다.

<br>


### 변수 재선언
state의 값을 변경하려면 `setState()`를 호출해 인자에 변경될 값을 넣어 주면 된다.

```javascript
setState(1); // state의 값을 1로 변경
```

<br>

```javascript
const [time, setTime] = useState(5); 
// time : 5
```
예를 들어, 시계 컴포넌트를 사용할 때 이렇게 useState를 사용하면 time이라는 state가 만들어진다.
`useState(5)`를 통해 time의 초기값을 5로 설정해 주었다.



```javascript
setTime(10);
// time : 10
```
`setTime(10)`을 통해 time의 값을 10으로 바꾸었다.

<br>

>setState 함수를 이용해서 state의 값을 변경하면 해당 컴포넌트는 화면에 다시 렌더링 되어,
**state가 변경될 때마다 화면이 업데이트**된다. 

<br>

## 🔍 예제
### 시간 업데이트 컴포넌트
useState를 이용해 시간을 업데이트할 수 있는 시계 컴포넌트를 만들어 보자!
```javascript
import { useState } from "react";

function App() {
  const [time, setTime] = useState(0); // time의 초기값을 0으로 설정

  const updateTime = () => {
    setTime(time + 1); // time을 +1 해서 time에 다시 저장
  };

  console.log(`${time}시로 업데이트 됨!`);

  return (
    <div className="App">
      <span>현재 시간 : {time}시</span>
      <button onClick={updateTime}>update</button>
      // 버튼 클릭하면 updateTime() 호출
    </div>
  );
}

export default App;
```

![](https://velog.velcdn.com/images/seola1ne/post/a0c0c798-a2c0-4fb3-b5c9-2da3c6a45d25/image.png)

`update` 버튼을 클릭하면 onClick 이벤트로 updateTime()을 호출해 setTime() 함수를 불러 time을 +1 한 값으로 설정한다.

<br>

### 가산기 컴포넌트

두 번째로, 값을 변경할 수 있는 가산기를 만들어 보자!
```javascript
import { useState } from "react";

export default function App() {
  const [number, setNumber] = useState(0);

  function plusNumber() {
    setNumber((number) => number + 1);
  }

  function minusNumber() {
    setNumber((number) => number - 1);
  }

  function resetNumber() {
    setNumber((number) => (number = 0));
  }

  return (
    <div className="App">
      <h2>{number}</h2>
      <button onClick={plusNumber}>+</button>
      <button onClick={minusNumber}>-</button>
      <br />
      <button onClick={resetNumber}>reset</button>
    </div>
  );
}
```

![](https://velog.velcdn.com/images/seola1ne/post/42801f64-07bd-47cc-84c0-df068fecb0e6/image.png)

`+` 버튼이 눌리면 number를 +1, `-` 버튼이 눌리면 number를 -1 한 값으로 설정하고, 
`reset` 버튼을 누르면 number의 값을 0으로 설정한다.

<br>

### 투두 리스트 컴포넌트

세 번째로, useState를 이용해 간단한 투두 리스트 컴포넌트를 만들어 보자!
```javascript
import { useState } from "react";

function App() {
  const [todos, setTodos] = useState([]); // todos의 초기값은 빈 배열
  const [input, setInput] = useState(""); // input의 초기값은 공백

  const inputChange = (input) => {
    setInput(input.target.value);
  };

  const addTodo = (item) => {
    setTodos((item) => {
      console.log(`todo 추가 : ${input}`);
      return [input, ...item];
    });
    setInput("");
  };

  return (
    <div className="App">
      <div>
        <input
          type="text"
          value={input}
          placeholder="todo를 입력해 보세요!"
          onChange={inputChange}
        />
        <button onClick={addTodo}>todo 추가하기</button>
        {todos.map((todo, index) => {
          return <li key={index}>{todo}</li>;
        })}
      </div>
    </div>
  );
}

export default App;
```

![](https://velog.velcdn.com/images/seola1ne/post/4c9b8414-2e63-4669-8a68-b395a1a35690/image.png)

`todos`의 값이 갱신될 때마다 화면이 재렌더링되어 map()을 통해 `<li>` 태그에 감싸진 todo들이 화면에 보이게 되고, console에 출력이 된다!

<hr>


> 출처 :  https://www.youtube.com/watch?v=G3qglTF-fFI, https://itprogramming119.tistory.com/entry/React-useState-%EC%82%AC%EC%9A%A9%EB%B2%95-%EB%B0%8F-%EC%98%88%EC%A0%9C