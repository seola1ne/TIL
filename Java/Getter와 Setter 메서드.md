
## 🧶 서론
> 객체 지향 프로그래밍 언어인 자바에서는 데이터를 보호하기 위해 외부에서 직접적으로 접근하는 것을 막아두는 경우가 있다.
>
> 외부에서 마음대로 데이터를 읽고 변경하게 되면 `무결성`(해당 객체의 결점이 없는 상태)가 깨질 수 있기 때문이다.

<br>

예를 들어, 나이나 키, 자동차의 속도 같은 것들은 음수가 될 수 없다.
만약 외부에서 해당 데이터를 음수로 변경하게 되면 객체의 무결성이 깨진다.
```Java
MyCar.speed = -30;
```

<br>

이러한 경우 접근 제어자 `private`를 사용해서 필드의 **직접적인 접근**은 막아두고, 메서드를 이용해 데이터(매개변수의 값)을 받아와 검사한다.

> 이때 `getter`와 `setter` 메서드를 사용하면 객체의 무결성을 해치지 않고 데이터를 안전하게 사용할 수 있다! 또한, 필드를 노출하면서도 필드의 내부 표현을 숨길 수 있다.

<br><br>

## ✨ Getter 메서드 
> getter 메서드는 선택된 요소에 접근하여 그 값을 읽어오기 위한
메서드이다.
getter 메서드는 아무런 인수를 전달하지 않고 호출한다.

외부에서 객체의 데이터를 읽어올 때도 안전하게 값을 유지할 수 있도록 사용한다.

<br><br>

## 📌 Setter 메서드
> private으로 선언된 필드의 값을 수정하고자 할 때 필요하다.
private 필드는 직접 접근할 수 없으므로, 객체가 입력 값을 setter 메서드의 매개변수로 넘겨주고, 값을 검사한 후 그 값이 필드의 값으로 적절한 경우에만 저장하게 된다.


값을 변경하는 역할은 생성자에서도 가능하다. 그러나 생성자가 없는 경우도 있기 때문에, setter를 이용해 값을 입력할 수 있다.

<br><br>

## 🔍 예시
```java
class MyCar {
	private String name;
    private String color;
	private int speed;
    private int gas;

	public String getName() {
    	return name;
    }
    
    public void setName(String name) {
    	this.name = name;
    }
    
	public String getColor() {
    	return color;
    }
    
    public void setColor(String color) {
		this.color = color;
	}
    
    public int getSpeed() {
    	return speed;
    }
    
    public void setSpeed(int speed){
    	this.speed = speed;
    }
    
    public int getGas() {
    	return gas;
    }
    
    public void setGas(int gas) {
		this.gas = gas;
	}
```


<br><br><br>
> 참고 : https://m.blog.naver.com/leejjoo112/222007699174