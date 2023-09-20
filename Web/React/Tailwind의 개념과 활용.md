# 🖼️ Tailwind CSS란?
**Tailwind CSS** (이하 Tailwind)는 다양한 유틸리티 클래스들로 이루어진 `CSS 프레임워크`이다.

![](https://velog.velcdn.com/images/seola1ne/post/efe73a76-1997-4db6-b901-de8b00265671/image.png)


이 사진의 `block`, `flex` 클래스처럼 최소한의 CSS 코드를 담은 클래스를 `유틸리티 클래스`라고 한다. 

이렇게 Tailwind에서 제공하는 유틸리티 클래스들을 조합해서 사용하면 추가적인 CSS 코드 작성없이, **HTML 요소의 class 속성에 입력**해주는 것만으로도 스타일링이 적용된다.


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
- **미리 정의된 클래스**를 사용할 수 있음, **빠른 개발** 가능
- 코드가 **직관적**이지만, 스타일을 추가할수록 **가독성**은 낮아질 수 있음


상태, Props에 따른 동적 스타일링이 가능한 `Styled Components`, 
직관적이고 빠른 개발이 가능한 `Tailwind` 중 각자에게 맞는 도구를 사용하면 될 것 같다.

## 사용해 보자!
```jsx
<button class="bg-teal-400 text-white px-4 py-2 rounded-2xl">
  Primary
</button>
```

이처럼, HTML 요소에 클래스들을 조합해 넣으면서 원하는 스타일링을 할 수 있다. 
해당 버튼 클래스에 사용된 스타일은 다음과 같다.

<table border='1'>
  <tr>
    <td>bg-teal-400</td>
    <td>background-color: rgb(45 212 191);</td>
  </tr>
  <tr>
    <td>text-white</td>
    <td>color: rgb(255 255 255);</td>
  </tr>
  <tr>
    <td>px-4</td>
    <td>padding-left: 1rem;
      <br>
padding-right: 1rem;</td>
  </tr>
  <tr>
    <td>py-2</td>
    <td>padding-top: 0.5rem;
      <br>
padding-bottom: 0.5rem;</td>
  </tr>
  <tr>
    <td>rounded-2xl</td>
    <td>border-radius: 1rem;</td>
  </tr>
</table>

더 많은 클래스가 궁금하다면, [이 공식 문서](https://tailwindcss.com/docs/aspect-ratio)를 살펴 보자!


<hr />

출처 : https://wonny.space/writing/dev/hello-tailwind-css, https://onlydev.tistory.com/127

