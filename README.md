# WinUI3_CommandBar


### 1. 소스코드

+ **xaml 코드**
![xaml](https://user-images.githubusercontent.com/86341272/206838006-82d28df5-0b4e-4524-82e2-bf870aeb5ffe.PNG)
여기서 Click 이하 부분을 지웠다가 다시 =을 입력하면 이벤트처리기를 생성할 수 있습니다.

직접 생성하여도 되지만 .cpp파일과 .h파일에도 코드를 입력해야 해서 에러가 발생하기 쉬우니 이 방법을 사용하는 것이 좋습니다.

+ **cpp 코드**
![cpp2](https://user-images.githubusercontent.com/86341272/206838005-6fb07c6f-1d47-4bd2-a012-7cba4da3f509.PNG)
xaml 코드 마지막 부분에 만들어둔 TextBlock을 이용하여 어떤 버튼을 눌렀는지 알려주는 기능입니다.

---

### 2. 실행결과

초기 실행화면

![1](https://user-images.githubusercontent.com/86341272/206838000-38e629f2-2c8f-4197-aa3e-7c225bb23e75.PNG)

버튼을 눌렀을 때

![2](https://user-images.githubusercontent.com/86341272/206838002-0c791b5d-d012-4ff7-af24-d14a1e6ae23f.PNG)

세컨더리 커맨드

![3](https://user-images.githubusercontent.com/86341272/206838003-6077ccc8-2e75-44c7-b605-c5ab31314a9f.PNG)

실행 영상

![커맨드바 실행영상](https://user-images.githubusercontent.com/86341272/206890813-0af3f44a-ea76-4f64-a49b-91fd3f280057.gif)

---
### 3. 설명

메뉴바와 같이 Xaml 코드에서 Icon을 사용하여 버튼 아이콘을 직관적으로 보이게 꾸밀 수 있고, KeyboardAccelerators를 사용해 버튼의 단축키를 만들 수 있습니다.
이 때 컨트롤+S로 설정하고 싶으면 Modifiers를 사용하여 
```xaml
Modifiers="Control" Key="S"
```
이런 식으로 사용하면 됩니다.
커맨드바는 전체적으로 메뉴바와 비슷합니다. 다만 저는 커맨드바가 조금 더 간편하다고 느꼈습니다.
