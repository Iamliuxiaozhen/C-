//Program Name: Use C++ to make an avatar frame
//The author of this program: Liu Xiaozhen
//警告：虽然本程序是开源的，但仅用于学习交流，禁止商业用途，此程序禁止未经同意的转载！
//Warning: Although this program is open source, it is only for learning and communication, commercial use is prohibited, and reproduction without consent is prohibited


void draw_a_circle()
{
		p.c(16);//定义画笔颜色
		p.show();//显示画笔
		p.speed(9);//定义速度
		for (int i=0;i<50;i++)
		{//定义一个for循环
			p.fd(100);//前进100
			p.rt(50);
		}
}
int main(){
	draw_a_circle();
	return 0;
}