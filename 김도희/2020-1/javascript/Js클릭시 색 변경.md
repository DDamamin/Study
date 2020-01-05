<!DOCTYPE html>
<html>
    <head>
        <title>somthing</title>
        <link rel="stylesheet" href = "test.css">
    </head>
    <body><h1 id = "title">Hello</h1>
    <script src="test.js"></script>
    </body>
</html>

========================================== < ���� html �ڵ� , �Ʒ��� JS �ڵ� >

const title = document.querySelector("#title");

const Base_color = "red";     // �⺻ ������ ����
const Other_color = "blue";    //�ٸ� ������ �Ķ����� ����

function hand()
{  
    const current = title.style.color;    //current �� ���� ������ ����

    if(current === Base_color)
    {
        title.style.color = Other_color;   //current ���� �⺻ ���� ������ �ٸ� ������ ����
    }
    else
    {
        title.style.color = Base_color;   //current ���� �ٸ� ���̶�� ���������� ����
    }
}

function init()
{
    title.style.color = Base_color;   //���� ���� �⺻�� ����
    title.addEventListener("click", hand);   //Ŭ���� �̺�Ʈ �߻� ( hand ȣ�� )
}

init();