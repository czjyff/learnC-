#include <iostream>

using namespace std;


//���м̳У�public������һ���������Թ��л���ʱ������Ĺ��г�ԱҲ��������Ĺ��г�Ա������ı�����ԱҲ��������ı�����Ա��
//                    �����˽�г�Ա����ֱ�ӱ���������ʣ����ǿ���ͨ�����û���Ĺ��кͱ�����Ա�����ʡ�
//�����̳У�protected���� ��һ���������Ա�������ʱ������Ĺ��кͱ�����Ա����Ϊ������ı�����Ա��
//˽�м̳У�private������һ����������˽�л���ʱ������Ĺ��кͱ�����Ա����Ϊ�������˽�г�Ա

// ����
class Shape
{
   public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
   protected:
      int width;
      int height;
};

// ������
class Rectangle: public Shape
{
   public:
      int getArea()
      {
         return (width * height);
      }
};

int main(void)
{
   Rectangle Rect;

   Rect.setWidth(5);
   Rect.setHeight(7);

   // �����������
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}
