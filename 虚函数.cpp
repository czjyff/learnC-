#include <stdio.h>
//�麯��
//���壺��ĳ����������Ϊ virtual ����һ�������������б����¶� ��ĳ�Ա����[1]
//�﷨��virtual ������������ �������������� { ������ }
//��;��ʵ�ֶ�̬�ԣ�ͨ��ָ��������Ļ���ָ�룬������������ͬ�����ǳ�Ա����

class A {
public:
    void fn() { printf("fn in A\n"); }
    //virtual void v_fn() = 0 ;      // ���麯����
    virtual void v_fn(){ printf("virtual fn in A\n"); }  // �麯�����ж���
};

class B : public A {
public:
    void fn() { printf("fn in B\n"); }
    virtual void v_fn() { printf("virtual fn in B\n"); }  // �����������B����麯���ж��壬���ڵ���ʱB�Ḳ��A���麯����
};

int main() {
    A *a = new B();
    a->fn();
    a->v_fn();   // ���B�ﶨ����麯����
    delete a;

    return 0;
}
