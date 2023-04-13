## 🔦 onClick이란?
**이벤트**란 브라우저에서 사용자의 조작이나 환경의 변화로 벌어진 사건을 말하며, 
이러한 이벤트에 대해 즉각적인 반응을 할 수 있게 하는 것을 **핸들러**라 부른다.

> react에서 **`onClick`**은 **사용자가 요소를 클릭**할 때 실행할 함수를 정의하는 이벤트 핸들러이다.

**onClick 이벤트**는 사용자가 마우스나 터치를 사용하여 요소를 클릭할 때 발생하며, 이벤트 핸들러 함수는 **이벤트가 발생한 후 호출**된다.

**onClick 이벤트 핸들러 함수**는 사용자의 입력에 반응하여 상태를 변경하거나 다른 작업을 수행할 수 있다.

<br>

```jsx
<button onClick={buttonClick}>
  Click me!
</button>
```

예를 들어, 위처럼 버튼이 클릭될 때 `buttonClick` 함수가 실행된다.
해당 함수 내부에서는 상태를 변경하거나 다른 작업을 수행할 수 있다. 

```jsx
function buttonClick() {
	console.log('Button Clicked!');
}
```

버튼이 클릭될 때 'Button Clicked!' 메시지를 콘솔에 출력하는 `buttonClick` 함수를 정의했다.

<br>


### ✍️ 이벤트 문법
#### 소문자가 아닌 카멜 케이스로 작성한다.
```jsx
onClick={addtext} // X
onClick={addText} // O
```

#### 문자열이 아닌 함수로 전달한다.
```jsx
onClick="함수이름()" // X
onClick={함수이름} // O
```

<br>

**기존 HTML**
```html
<button onClick="addtext()">
  add text
</button>
```

**React**
```jsx
<button onClick={addText}>
  add Text
</button>
```