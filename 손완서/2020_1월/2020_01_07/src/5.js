let x;
x = 3 * 5;

let x, y;
y = x = 3 * 5;

let x, y;
y = x = 3 * 5; // 원래 문
y = x = 15; // 곱셈 표현식을 평가했습니다.
y = 15; // 첫 번째 할당을 평가했습니다. x는 이제 15이고,
// y는 아직 undefined입니다.
15; // 두 번째 할당을 평가했습니다. y는 이제 15입니다.
// 전체 문의 결과는 15입니다. 이 값은 사용하지도 않았고
// 어딘가에 할당하지도 않았으니 그냥 버려집니다.
