## 웹 어플리케이션 계층 구조
![](https://velog.velcdn.com/images/seola1ne/post/a18c23ff-e1fe-4eaf-b37d-e8a5c6f0ba3b/image.png)
[이미지 출처](https://velog.io/@sloools/Spring-%EC%9B%B9%EC%95%A0%ED%94%8C%EB%A6%AC%EC%BC%80%EC%9D%B4%EC%85%98-%EA%B3%84%EC%B8%B5%EA%B5%AC%EC%A1%B0)

- **Controller** : 웹 MVC의 컨트롤러 역할
- **Service** : 컨트롤러에 필요한 핵심 비즈니스 로직 구현
- **Repository** : 데이터베이스에 접근, 도메인 객체를 DB에 저장하고 관리
- **Domain** : 비즈니스 도메인 객체(Entity, Model)

cf. **MVC**란, Model-View-Controller로, 사용자 인터페이스, 데이터 및 논리 제어를 구현하는데 널리 사용되는 **소프트웨어 디자인 패턴**임

### Controller
- 클라이언트가 이용할 수 있는 정점!
- 클라이언트의 요청을 어떻게 처리할지 정의한다.
- 화면에서 넘어오는 매개 변수를 이용해 서비스 객체를 호출하는 역할을 한다.

### Service
- 비즈니스 로직을 구현한다.
- HTTP 통신을 위한 객체(Request, Response)를 매개변수로 받으면 안 된다. (이 작업은 컨트롤러에서만)
- 데이터베이스 영역과 도메인 영역을 연결해 주는 매개체이다.

### Repository
- 데이터베이스에 접근한다.
- Domain의 CRUD 역할을 수행한다. (Domain 객체를 DB에 저장하고 관리함)
- DAO(Data Access Object) (=Repository)
	- DB에 접근하는 객체로, Service와 Controller를 연결한다.
    
### Domain
- Entity(DB 테이블과 매핑되는 객체) 클래스라고도 부른다.
- DTO(Data Transfer Object)
	- 각 계층간 데이터 교환을 위한 객체로, DB에서 데이터를 얻어 Service, Controller 등으로 보내 준다.
    - 로직을 갖지 않고 getter, setter 메소드를 가진다.
    
<hr>
참고 : https://velog.io/@codren/Domain-Repository,
https://velog.io/@sloools/Spring-웹애플리케이션-계층구조