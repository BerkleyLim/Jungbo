# Question 6

- 2022년 10월 기출문제
```java
public class Test {
    public static void main(String[] args) {
        int r = 0;
        for (int i = 1; i < 999; i++) {
            if (i % 3 == 0 && i % 2 == 0)
                r = i;
        }
        System.out.println(r);
    }
}

```