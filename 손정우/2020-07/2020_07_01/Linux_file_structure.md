# 리눅스 디렉토리 구조

### /

루트, 최상위 디렉토리로 모든 디렉토리의 시작점

---

### /bin

기본적인 명령어가 저장된 디렉토리
mv, cp, rm 등의 명령어가 존재하며 root 사용자와 일반 사용자 모두 사용할 수 있음

---

### /boot

리눅스의 부트로더가 존재하는 디렉토리
GRUB 같은 부트로더와 관련된 파일들이 존재함

---

### /dev

시스템 디바이스 파일을 저장하고 있는 디렉토리

---

### /etc

시스템 환경 설정 파일과 부팅 관련 스크립트 파일 저장
/etc/sysconfig(시스템 제어판용 설정파일), /etc/pass

| 위치             | 설명                                                         |
| ---------------- | ------------------------------------------------------------ |
| /etc/rc.d        | 부팅 레벨별 부팅 스크립트 파일 존재                          |
| /etc/rc.d/init.d | 시스템 초기화 파일들이 존재                                  |
| /etc/mail        | sendmail의 설정 파일들이 저장                                |
| /etc/xinetd.d/   | xinetd 슈퍼 데몬에 의해 서비스되는 서비스 설정 파일이 존재   |
| /etc/ssh/        | sshd 데몬에서 사용하는 각종 설정 파일들이 존재               |
| /etc/samba/      | 삼바 관련 설정 파일들이 존재                                 |
| /etc/group       | 그룹의 정보가 담겨 있는 파일                                 |
| /etc/passwd      | 자원을 사용할 수 있는 사용자 목록 저장                       |
| /etc/shadow      | /etc/passwd의 두 번째 필드인 패스워드 부분을 암호화 관리<br />패스워드 만기일, 계정 만기일 등을 설정 |

---

### /home

사용자 계정들의 홈 디렉토리
일반 사용자가 로그인 시 처음으로 위치하게 되는 디렉토리
/home/유저명

---

### /lib

공유 라이브러리 디렉토리
커널 모듈 파일들과 프로그램 실행을 지원해 주는 라이브러리 저장

---

### /mnt

파일 시스템을 일시적으로 마운트할 때 사용
마운트: 특정 폴더를 또 다른 특정 폴더에 위치 시킴(실제로 이동되는 것은 아님)
              mount 명령어는 원래 장치 (윈도우에서 디스크가 D드라이브로 자동 마운트)를 마운트 시킴
              단 --bind 속성을 달아주면 폴더도 마운트시킬 수 있다

---

### /proc

가상파일 시스템
시스템 정보 디렉토리이며 커널 기능을 제어하는 역할
현재 메모리에 존재하는 모든 작업(프로세스)들이 파일형태로 존재

---

### /root

시스템 관리자용 홈 디렉토리

---

### /sbin

관리자용 시스템 표준 명령 및 시스템 관리와 관련된 실행 명령어
(ifconfig, e2fsck, ethtool, halt 등)

---

### /tmp

각종 프로그래램이나 프로세스 작업을 할 때 임시로 생성되는 파일 저장
공용 디렉토리, 모든 사용자에 대해 읽기 쓰기 허용

---

### /usr

일반 사용자 디렉토리로 사용자 데이터나 애플리케이션 저장

| 위치            | 설명                                                         |
| --------------- | ------------------------------------------------------------ |
| /usr/bin/       | 일반 사용자들이 사용 가능한 명령어 파일 존재                 |
| /usr/include/   | C 프로그램에 필요한 헤더 파일 존재                           |
| /usr/local/     | MySQL, Apache, PHP 등 어플리케이션들을 소스로 컴파일을 설치할 때 사용되는 저장소 |
| /usr/share/man/ | 명령어들의 도움말을 주는 매뉴얼 페이지 디렉토리<br />시스템에서 사용하는 모든 맨 페이지 파일이 존재<br />(맨 페이지 : help처럼 전반적인 정보가 입력되어 있는 매뉴얼) |

---

### /var

가변 자료 저장 디렉토리로 로그 파일이나 메일 데이터 저장

---

### /lost+found
결함이 있는 파일에 대한 정보가 저장