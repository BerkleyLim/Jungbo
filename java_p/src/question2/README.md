# Question2

- 2023년 4월 기출문제

```java
abstract class Vehicle {
    String name;
    abstract public String getName(String val);
    public String getName() {
        return "Vehicle name : " + name;
    }
}

class Car extends Vehicle {
    private String name;
    public Car(String val) {
        name = super.name = val;
    }
    public String getName(String val) {
        return "Car name : " + val;
    }
    public String getName(byte[] val) {
        return "Car name : " + val;
    }
}

public class Test {
    public static void main(String[] args) {
        Vehicle obj = new Car("Spark");
        System.out.println(obj.getName());
    }
}

```