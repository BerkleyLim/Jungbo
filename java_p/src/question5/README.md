# Question 4

- 2022년 10월 기출문제
```java
public class Test {
    static int[] mkarr() {
        int[] tmpArr = new int[4];
        for (int i = 0; i < tmpArr.length; i++)
            tmpArr[i] = i;
        return tmpArr;
    }

    public static void main(String[] args) {
        int[] arr;
        arr = mkarr();
        for (int i = 0; i < arr.length; i++)
            System.out.print(arr[i]);
    }
}
```