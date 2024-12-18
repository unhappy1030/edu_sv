#include <iostream> // 입력과 출력을 위해 iostream 헤더 포함

using namespace std; // std 네임스페이스 사용

int main() {
    int age; // 나이를 저장할 정수형 변수
    string name; // 이름을 저장할 문자열 변수

    // 입력 요청 메시지 출력
    cout << "이름을 입력하세요: ";
    cin >> name; // 이름 입력

    cout << "나이를 입력하세요: ";
    cin >> age; // 나이 입력

    // 입력 받은 데이터 출력
    cout << "안녕하세요, " << name << "님! ";
    cout << "당신은 " << age << "살입니다." << endl;

    return 0; // 프로그램 정상 종료
}
