
# 📋 Props란?
> properties의 줄임말로, 상위 컴포넌트가 **하위 컴포넌트로 데이터를 전달**할 때 사용된다.
부모 컴포넌트로부터 받는 데이터이므로 자식 컴포넌트에서는 **변경할 수 없다.**

<br><br>

## ✍️ 사용 방법
### 단일 값 전달하기
App 컴포넌트에서 MyName이라는 컴포넌트로 `name`이라는 값을 전달해 보자.

**App.js**
```javascript
import React from 'react';
import MyName from "./MyName.js"

function App() {
  return (
      <MyName name="Mini" />
  );
}

export default App;
```

**MyName.js**
```javascript
import React from 'react'

function MyName(props) {
    return <h1>My Name is {props.name}!</h1>;
  }

export default MyName;
```
MyName.js에서 props인 name을 전달받아 사용했다. 

<br>


컴포넌트에게 전달되는 props는 파라미터를 통하여 조회할 수 있다. props는 객체 형태로 전달되며, 만약 `name` 값을 조회하고 싶다면 `props.name`을 조회하면 된다.

<br>

### 여러 값 전달하기
MyInfo라는 컴포넌트에 `name`, `age`, `hobby` 세 가지 props를 전달해 보자.

**App.js**
```javascript
import React from 'react';
import MyInfo from "./MyInfo.js"

function App() {
  return (
    <div className="App">
      <MyInfo name="Mini" age={20} hobby="watching TV"/>
      <MyInfo name="Berry" age={20} hobby="playing game"/>
    </div>
  );
}
```


**MyInfo.js**
```javascript
import React from 'react'

function MyInfo({props}) {
    return (
      <div>
      	<h1>My name is {props.name}!</h1>
	  	<h2>My age is {props.age}, My Hobby is {props.hobby}.</h2>
      </div>
  	);
  }

export default MyInfo;
```

<br>

props의 값을 사용할 때마다 `props.`을 입력하고 있는데,
함수의 파라미터에서 **비구조화 할당** 문법을 사용하면 `props.`를 입력하지 않고 보다 간결하게 사용할 수 있다.

<br>

**MyInfo.js**
```javascript
import React from 'react'

function MyInfo({ name, age, hobby }) { // 비구조화 할당
    return (
      <div>
       	<h1>My name is {name}!</h1>
	  	<h2>My age is {age}, My Hobby is {hobby}.</h2>
      </div>
  	);
  }

export default MyInfo;
```

<br>

### defaultProps로 기본값 설정
컴포넌트에 props를 지정하지 않았을 때 기본적으로 사용할 값을 설정하고 싶다면 컴포넌트에 `defaultProps`을 설정해 주면 된다.

**App.js**
```javascript
import "./styles.css";
import MyName from "./MyName";

export default function App() {
  return (
    <div className="App">
      <MyName />
    </div>
  );
}

```

**MyInfo.js**
```javascript
import React from "react";

function MyInfo({ name, age, hobby }) {
  return (
    <div>
      <h1>My name is {name}!</h1>
      <h2>
        My age is {age}, My Hobby is {hobby}.
      </h2>
    </div>
  );
}

MyInfo.defaultProps = {
  name: "이름 공백",
  age: "나이 공백",
  hobby: "취미 공백"
};

export default MyInfo;
```

이렇게 App 컴포넌트에서 MyInfo 컴포넌트로 아무런 Props를 넘기지 않았을 때 설정된 defaultProps를 사용한다.


<br><br>

# 🔍 조건부 렌더링이란?
> 특정 조건에 따라 다른 결과물을 렌더링하는 것을 의미한다.

<br>

## ✍️ 사용 방법
### 삼항연산자 사용하기
```javascript
<div>
  {isLogin ? <h1>Hello!</h1> : null }
</div>
```

`isLogin` 값이 `true`라면 `<h1>Hello!</h1>`가, 그렇지 않다면 `null`이 렌더링된다.
(JSX에서 null, false, undefined를 렌더링하면 아무것도 나타나지 않는다.)

<br>

### `&&` 사용하기
```javascript
<div>
  <isLogin && <h1>Hello!</h1>}
</div>
```
`isLogin`의 값이 `false`이면 `false`, `isLogin`이 `true` 일 때는 `<h1>Hello!</h1>`이 렌더링된다.

<br>

<hr>
 

> 출처 : https://react.vlpt.us/basic/05-props.html, https://react.vlpt.us/basic/06-conditional-rendering.html
