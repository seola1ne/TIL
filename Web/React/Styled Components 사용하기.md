## 💅 Styled Components란?
JS 안에 CSS가 있다는 의미인 `CSS in JS` 라이브러리 중 하나로, **React에서 CSS를 적용**하는 방법 중 널리 사용되는 한 가지이다. 

스타일에 대한 **고유 클래스명을 생성**하기 때문에 **중복**이나 **오타**에 대한 걱정이 없고, Props에 따라 스타일이 달라지게끔 **가변 스타일링이 가능**하다는 장점이 있다. 

## 👨‍💻 Styled Components를 사용해 보자!
### 설치하기
```
$ npm i styled-components
```
커맨드 창에 위와 같이 입력해 패키지를 설치해 준다.

### import 하기
```jsx
import styled from "styled-components";
```
설치가 되었다면 Styled Components를 사용하기 위해 `styled-components` 패키지에서 `styled` 함수를 import한다.  

### 기본 문법
Styled Components는 기본적으로 **html의 모든 태그들**에 스타일을 적용할 수 있다. 

```jsx
import styled from "styled-components";

const 변수이름 = styled.HTML엘리먼트`
	// CSS 스타일
`;
```

기본적인 사용 방법은 `const 변수이름 = ` 다음에 `styled.div`, `styled.button`과 같이 작성하고, **백틱 태그(``)** 안에 **CSS 스타일을 작성**하면 된다. 

```jsx
import styled from "styled-components";

const StyledSection = styled.div`
	background-color: red;
	display: flex;
	justify-content: center;
`;

export default function Section() {
 return <StyledSection></StyledSection>; 
}
```

예를 들어, 이렇게 사용할 수 있다!
이처럼 스타일이 적용된 `Section` 컴포넌트는 **다른 컴포넌트에서도 사용**할 수 있다. 

<br>

## 🤝 부모 요소 상속받아 스타일링하기
```jsx
const Title = styled.h1`
  color: #aac9f0;
`;
```
위와 같은 `Title` 변수가 있다고 할 때, Title의 스타일을 상속받은 다른 변수를 만든다고 해 보자,

```jsx
const SubTitle = styled(Title)`
	font-size: 12px;
    align-self: center;
`;
```
`styled(부모 변수)`와 같이 작성하면 부모 변수의 스타일을 상속받을 수 있다!

```jsx
import React from "react";
import styled from "styled-components";

const Section = styled.div`
  background-color: beige;
  border-radius: 15px;
`;

const Title = styled.h1`
  color: #aac9f0;
`;

const SubTitle = styled(Title)`
  font-size: 12px;
  align-self: center;
`;

export default function Content() {
  return (
    <Section>
      <Title>Section</Title>
      <SubTitle>I am a SubTitle</SubTitle>
    </Section>
  );
}
```

![](https://velog.velcdn.com/images/seola1ne/post/521fd2cf-3303-46a6-9fc4-748b34963332/image.png)
    
(위 코드가 적용이 된 모습)

<br>

## 🎨 Props에 따라 달라지는 스타일링
Styled Components로 컴포넌트에 전달받은 Props에 따라 다른 스타일을 적용할 수 있다. 

버튼의 스타일이 Props에 따라 바뀌도록 `삼항 연산자`를 사용해 코드를 작성해 보면 아래와 같다. 
```jsx
import React from "react";
import styled from "styled-components";

const StyledButton = styled.div`
  background-color: ${({ primary }) => (primary ? "red" : "blue")};
  display: flex;
  justify-content: center;
  height: 20px;
  padding: 5px;
  margin: 5px;
  border-radius: 15px;
`;

export default function Button({ primary, text }) {
  return <StyledButton primary={primary}>{text}</StyledButton>;
}

```

`<Button />` 컴포넌트에 넘어온 `primary`와 `text` Props를 `<StyledButton />`로 넘겨주어야 한다. (`<StyledButton />`이 Props를 인식할 수 있게 하기 위해서이다)

![](https://velog.velcdn.com/images/seola1ne/post/fb746803-7e43-4495-8e15-c659f5cff391/image.png)
(`<Button />` 컴포넌트를 `<Content />`에 넣은 모습, 빨간 색 버튼은 Primary Props를 부모 컴포넌트로부터 전달받은 버튼)

<hr>

출처 : https://velog.io/@sorious77/React-Styled-Components-사용-방법-e9o4rnfq, https://www.daleseo.com/react-styled-components/, https://nykim.work/107