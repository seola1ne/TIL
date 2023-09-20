# 🖼️ Tailwind란?
**Tailwind**는 CSS 코드를 담은 다양한 클래스들로 이루어진 `CSS 프레임워크`이다.

최소한의 CSS 코드를 담은 클래스를 `유틸리티 클래스`라고 하는데,
Tailwind에서 제공하는 유틸리티 클래스들을 조합해 사용하면 추가적인 CSS 코드 작성없이, **HTML 요소의 class 속성에 입력**해주는 것만으로도 스타일링이 적용된다.


## Styled Components와 Tailwind
이전 글에서는 [Styled Components](https://velog.io/@seola1ne/React-Styled-Components-%EC%82%AC%EC%9A%A9%ED%95%98%EA%B8%B0)에 대해 알아봤다.
오늘 주제인 Tailwind 또한 스타일을 적용하는 데 쓰이는 도구인데, 
두 가지가 어떻게 다른지 장단점을 알아보자.

>### Styled Components
- **컴포넌트 기반**
- 작은 스타일이더라도 **컴포넌트를 만들어야** 함
- **동적 스타일링** 가능(Props에 따른 가변 스타일링)

>### Tailwind
- **클래스 기반**
- **사전 정의된 클래스**를 사용할 수 있음, **빠른 개발** 가능
- 코드가 **직관적**이나, 스타일이 **눈에 잘 띄지 않을 수** 있음

