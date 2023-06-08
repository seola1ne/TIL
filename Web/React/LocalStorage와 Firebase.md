# 📦 Local Storage와 Firebase
React로 개발을 할 때 데이터를 저장하고 동기화해야 하는 경우가 종종 있는데, 
이럴 때 **Local** **Storage**와 **Firebase**를 사용할 수 있다.

**Local Storage**는 브라우저 내에서 데이터를 임시로 저장하는 간단한 방법이고, 
**Firebase**는 클라우드 기반의 실시간 데이터 베이스 및 인증 서비스를 제공하는 플랫폼이다.

<hr>

## 📌 Local Storage
**Local Storage**는 웹 브라우저에서 클라이언트 측에 데이터를 임시로 저장할 수 있는 웹 저장소로, 브라우저나 OS가 재시작하더라도 데이터가 파기되지 않고 유지된다. LocalStorage에서는 데이터 저장, 접근, 업데이트, 삭제와 같은 기능이 있다.

Local Storage는 다양한 용도로 활용될 수 있는데, 예를 들어, 사용자 기본 설정, 테마 선택, 장바구니 상태, 최근 본 상품 목록 등을 저장해 사용할 수 있다. 또한, 웹 애플리케이션의 상태 관리에 활용되기도 한다.

>**데이터를 추가/제거**하는 메소드
>
```javascript
localStorage.setItem(key, value) // key와 value를 사용해 데이터를 저장
localStorage.getItem(key) // 특정 key에 해당하는 값을 가져옴
localStorage.removeItem(key) // 특정 key와 해당하는 값을 제거함
```

>**Object/Array 데이터를 저장**하는 메소드
>
```javascript
localStorage.setItem(key, JSON.stringify(value));
//localStorage.setItem('student', JSON.stringify({name: 'kim'}))
```

여기서 `JSON.stringify()`란 Objcet나 Array를 넣으면 문자처럼 인식할 수 있는 JSON 파일로 바꿔주는 메소드이다!

**데이터를 읽어올 때**도, `JSON.parse()`를 통해 JSON을 Object 형식으로 바꿔서 읽어온다(이를 하지 않으면 JSON 그대로 읽어온다).

### LocalStorage 사용하기

Local Storage를 사용하기 위해서는, `componentDidMount`나 `useEffect` 훅을 사용해 데이터를 불러오고, `componentWillUnmount` 또는 다른 특정 이벤트에서 데이터를 저장해야 한다.

예시 코드로 알아보자!
```jsx
import React, { useEffect } from 'react';

function App() {
  useEffect(() => {
    // 데이터 로드
    const data = localStorage.getItem('myData');
    if (data) {
      // 데이터가 있다면 처리
    }

    // 컴포넌트 언마운트 시 데이터 저장
    return () => {
      localStorage.setItem('myData', 'someValue');
    };
  }, []);

  return (
    // 컴포넌트 내용
  );
}

export default App;
```
<hr>

## 📌 Firebase
Firebase는 구글에서 제공하는 클라우드 기반 개발 플랫폼으로, 웹/모바일 어플리케이션 개발에 사용되는 다양한 기능과 서비스를 제공한다. 
사용자 인증, 실시간 데이터베이스, 호스팅, 스토리지, 클라우드 함수, 푸시 알림 등 다양한 기능을 포함하고 있다.

### Firebase 사용하기
>1. Firebase 가입 & 프로젝트 생성
2. Firebase에 앱 정보 추가
3. Firebase SDK 추가
4. 앱 접속 및 연동 결과 확인

Firebase를 사용하기 위한 절차는 위와 같이 요약할 수 있다. 글이 길어질 것 같아 해당 블로그에서는 기술하지 않았지만, 설명이 자세히 되어 있는 블로그가 있으니 궁금하다면 [여기](https://richwind.co.kr/83)를 통해 알아보면 좋겠다.
