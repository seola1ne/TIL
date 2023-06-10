## 본문에 앞서
이 글은 코드온의 영상을 보고 개념을 정리한 글입니다! ([원본 영상 링크](https://youtu.be/C7yhysF_wAg))

<hr>


## 📱 API?

### API를 알아야 하는 이유
API는 서버와 클라이언트가 서로 소통할 때 중요한 역할을 담당하며, 백엔드도 프론트엔드도 꼭 알아야 하는 개념이기 때문!

### API의 개념

**API**란 **Application Programming Interface**의 약자로, 응용 프로그램에서 사용할 수 있도록, 운영체제나 프로그래밍 언어에서 제공하는 기능을 제어할 수 있게 해 주는 인터페이스를 말한다. 

### 예시를 들자면

우리가 폰을 사용할 때 폰 내부가 어떻게 동작하는지는 몰라도 인터페이스를 통해서 쉽게 사용할 수 있다. 버튼으로 소리를 올리거나 내리거나, 전원을 끄고 켜는 것처럼!

### 아하 API는...
API는 어플리케이션 간에 지정된 형식으로 요청과 응답을 할 수 있도록 연결하는 역할을 한다. 

카셰어링 앱이나 맛집 예약 앱에서 사용하는 실시간 지도도 API를 활용한 예시라 할 수 있다.
네이버나 구글 등, 기업에서 제공하는 API를 내 서비스에 적용해서 지도를 연결하는 원리이다.

<br>

## REST API
Rest API는 다른 컴퓨터와 프로그램과의 소통을 쉽게 할 수 있어 많은 개발자들이 활용하고 있다.

**REST API**는 인터넷 식별자 **URL**(Uniform Resource Identifier)와 **HTTP**를 기반으로 하고, 브라우저 간 호환성이 좋은 JSON 형식을 주로 사용한다. 
REST의 가장 중요한 특성은 각 요청이 어떤 정보나 동작을 위한 것인지 그 모습 자체만으로 추론이 가능하다는 점이다.

REST는 문서, 그림, 데이터 등의 자원을 이름으로 구분해 해당 자원에 대한 상태, 정보를 주고 받는 것을 의미한다.
또한 HTTP Method를 활용해서 해당 자원에 대한 CRUD를 적용하는 것을 의미한다.

cf. CRUD란 Create, Read, Update, Delete의 약자!

![](https://velog.velcdn.com/images/seola1ne/post/764d5c74-ead1-4363-8da5-a5501a2d413d/image.png) [이미지 출처](https://mannhowie.com/rest-api)


REST API에서는 다양한 HTTP Method 중에서도 GET, POST, PUT, DELETE 4가지 혹은 이 4가지에서 PATCH를 더한 다섯 가지를 사용한다. 

### 정리
REST API는 HTTP 요청을 할 때 어떤 URL에 어떤 Method를 사용할지에 대한 개발자들 사이에서 널리 사용되어지는 약속이라 할 수 있음!
