//Program Name: Use C++ to make an avatar frame
//The author of this program: Liu Xiaozhen
//���棺��Ȼ�������ǿ�Դ�ģ���������ѧϰ��������ֹ��ҵ��;���˳����ֹδ��ͬ���ת�أ�
//Warning: Although this program is open source, it is only for learning and communication, commercial use is prohibited, and reproduction without consent is prohibited


void draw_a_circle()
{
		p.c(16);//���廭����ɫ
		p.show();//��ʾ����
		p.speed(9);//�����ٶ�
		for (int i=0;i<50;i++)
		{//����һ��forѭ��
			p.fd(100);//ǰ��100
			p.rt(50);
		}
}
int main(){
	draw_a_circle();
	return 0;
}