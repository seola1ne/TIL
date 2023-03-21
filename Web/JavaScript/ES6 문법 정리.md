## ⚡ ES6란 무엇일까?

- ES란 ECMAScript의 약자로, 자바스크립트의 표준, 규격을 나타내는 용어이다.
-`ES5`는 2009년, `ES6`는 2015년에 출시되었다.
- ES6을 사용하면, 한결 코드가 간결해지고 생산성이 향상되기 때문에 사용을 권장한다.

<br>

## 1. var와 let, const

- `var`는 재정의와 재선언 모두 **가능**하다.
- `let`은 가변 변수로 재정의가 **가능**하지만 재선언은 **불가능**하다.
- `const`는 불변 변수로 재선언과 재정의 **모두 불가**하다.


- 다만, `var`는 예기치 못한 값을 반환할 수 있는 등 여러 문제점들이 있어 잘 사용하지 않으며 `let`과 `const` 키워드를 사용하는 것을 권장한다.

<br>

## 2. 템플릿 리터럴

- ES6부터 새로 도입된 문자열 표기법으로, **`(백틱)**을 사용한다.
- 문자열 사이에 변수나 연산을 넣을 때는 `${}` 사이에 표현식을 삽입한다.

```jsx
let name = "Lily"

// 기존 코드
console.log("Hi, " + name + "!");

// 템플릿 리터럴 방식
console.log(`Hi, ${name}!`);
```

<br>

## 3. 객체 리터럴

- 이전보다 훨씬 간결한 코드로 객체를 선언할 수 있다.
- 메소드에 콜론(:)이나 function을 붙이지 않아도 된다.
- 함수명이 겹치는 경우에는 한 번만 쓸 수 있다.

<br>

## 4. 화살표 함수

- 함수 표현식을 보다 단순하고 간결하게 작성하는 문법이다.

```jsx
// 기본 함수 형식
let sum = function(a, b) {
	return a+b;
};

// 화살표 함수 형식
let sum = (a, b) => a+b;
```

- 인수가 하나밖에 없다면 괄호를 생략할 수 있다.
- 인수가 하나도 없을 땐 괄호를 비워놓으면 된다. 단, 이 때 괄호는 생략할 수 없다.
- 본문이 한 줄 밖에 없다면 중괄호를 생략할 수 있다.

<br>

## 5. 구조 분해 할당(Destructuring)

- 배열이나 객체의 속성을 **해체**하여 그 값을 **개별 변수**에 담을 수 있게 하는 JS 표현식이다.
- 값을 해체한 후 개별 값을 변수에 새로 할당한다.

```jsx
// 기존의 방식
const Player = {
  name: "Lebron James",
  city: "LA Lakers",
  address: {
    city: "Los Angeles"
  }
};

console.log(Player.address.city);
```

기존의 방식으로 변수를 사용하려면 이름이 상당히 길어지는 반면,

```jsx
// 구조 분해 할당 방식
const {
  name,
  club,
  address: { city }
} = Player;
console.log(city);

console.log(`Hello ${name}!`);
```

구조 분해 할당을 하면 훨씬 간결해진다.

<br>

## 6. Export와 Import

모듈을 내보내는 방법으로는 **named export**와 **default export**가 있다.

```jsx
// named export 기본 형식
export { 모듈명1, 모듈명2 };
import { 모듈명1, 모듈명2 } form 'js 파일 경로';

// default export 기본 형식
export default 모듈명;
import 모듈명 from 'js 파일 경로';
```

### named export

- `named export`는 한 파일에서 여러 개를 `export`할 때 사용 가능하다. `export`한 이름과 동일한 이름으로 `import` 해야 하며, 중괄호에 묶어서 `import` 해야 한다.
- 다른 이름으로 `import` 하려면 `as`를 사용하고, 한 파일에 있는 클래스나 변수들을 한번에 `import` 하려면 `* as`를 사용한다.

```jsx
// named export에서 as를 사용하여 다른 이름으로 import
import { named1 as myExport, named2 } from './example.js';

// 한 파일에 있는 모든 클래스나 변수를 * as를 사용하여 한번에 import
import * as Hello from './example.js';

```

### default export

- `default export`는 하나의 파일에서 단 하나의 변수 또는 클래스 등등만 `export`할 수 있다. 또한 `import`할 때 아무 이름으로나 자유롭게 가능하며, 중괄호에 묶지 않아도 된다.

### 예시

```jsx
// data.js
export const add = (a, b) => {
  return a + b;
};
```

```jsx
// index.js
import { add } from "./data";

let result = add(3, 2);
console.log(result);
```

data.js에서 add를 `export` 했고, index.js에서 add를 `import` 해 사용했다.

<br>

## 7. 클래스(class)

Class는 객체를 생성하기 위한 템플릿으로, 틀과 같은 역할을 한다. 반드시 정의한 뒤에 사용해야 한다.

- 클래스 선언은 let과 const처럼 블록 스코프에 선언되며, 호이스팅이 일어나지 않는다.
- 클래스의 메소드 안에서 `super` 키워드를 사용할 수 있다.
- `static` 키워드를 메소드 이름 앞에 붙여주면 해당 메소드는 정적 메소드가 된다.
- `Getter` 혹은 `Setter`를 정의하고 싶을 때는 메소드 이름 앞에 `get` 또는 `set`을 붙여 주면 된다.
- `extends` 키워드를 사용하여 클래스에서 다른 클래스로 상속하면서 클래스의 기능을 확장해 나갈 수 있다.

### 예시

```jsx
// Animail.js
export class Animal {
  constructor(type, legs) {
    this.type = type;
    this.legs = legs;
  }

  makeNoise(sound = "Loud Noise") { // 디폴트 값 설정
    console.log(sound);
  }

  get metaData() {
    return `Type: ${this.type}, Legs: ${this.legs}`;
  }

  static return10() {
    // static은 객체 생성 안 해도 사용 가능
    return 10;
  }
}

export class Cat extends Animal {
  // 클래스 상속 받음
  makeNoise(sound = "meow") {
    console.log(sound);
  }
}
```

```jsx
// index.js
import { Animal, Cat } from "./animal";

let cat = new Animal("Cat", 4); // Animal 객체 생성
cat.makeNoise("meow"); // 출력 결과 : meow

let cat2 = new Cat("Cat", 4); // Cat 객체 생성
cat2.makeNoise(); // 

console.log(Cat.return10());
console.log(cat2.metaData);
```

## 8. Promise
- 프로미스는 자바스크립트 비동기(특정 코드의 실행이 완료될 때까지 기다리지 X, 다음 코드 먼저 수행) 처리에 사용되는 객체이다.
- 주로 서버에서 받아온 데이터를 화면에 표시할 때 사용한다.
- 프로미스를 사용하면 다음과 같은 이점을 얻을 수 있다.

> - 비동기 처리 시점을 명확하게 표현할 수 있다.
- 연속된 비동기 처리 작업을 수정, 삭제, 추가하기 편하고 유연하다.
- 비동기 작업 상태를 쉽게 확인할 수 있다.
- 코드의 유지 보수성이 증가한다.

프로미스로 구현된 비동기 함수를 호출하는 측에서는 프로미스 객체의 **후속 처리 메소드(then, catch)** 를 통해 비동기 처리 결과 또는 에러 메시지를 전달받아 처리한다.

### then
- 두 개의 콜백 함수를 인자로 전달받는다.
- then 메소드는 기본적으로 프로미스를 반환한다.

### catch
- catch 메소드는 비동기 처리 혹은 then 메소드 실행 중 에러가 발생하면 호출된다.
- catch 메소드 역시 프로미스를 반환한다.

## 9. fetch
- fetch 함수는 XMLHttpRequest 객체보다 최근에 나온, HTTP 요청 전송 기능을 제공하는 Web API다. 
- HTTP response 객체를 래핑한 프로미스 객체를 반환한다. 따라서 프로미스의 후속 처리 메서드인 then을 사용하여 resolve한 객체를 전달받을 수 있다.

## 10. async & await
- 프로미스를 사용하면 catch() 메서드를 사용해 예외 처리를 해야 한다. 만약 동기 코드와 비동기 코드가 섞여 있을 경우, 예외 처리가 난해해지거나 예외 처리를 누락하는 경우가 생기기 쉽다.
- 프로미스의 이러한 불편한 점들을 해결하기 위해, `async`와 `await` 키워드를 사용한다. 비동기 코드를 마치 동기 코드처럼 보이게 작성할 수 있다!


> 참고 : [[https://velog.io/@kim_unknown_/JavaScript-ES6](https://velog.io/@kim_unknown_/JavaScript-ES6)], [[https://hanamon.kr/javascript-es6-문법/](https://hanamon.kr/javascript-es6-%EB%AC%B8%EB%B2%95/)]
>