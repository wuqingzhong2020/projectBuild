//////////////////////////////////  @��Ȩ˵��  //////////////////////////////////////////////////
///						Jiedi(China nanjing)Ltd.                                    
/// @��Ȩ˵�� ����Ϳγ̰�Ȩ���Ĳܿ���ӵ�в��Ѿ���������Ȩ���˴��������Ϊѧϰ�ο���������Ŀ��ʹ�ã�
/// �γ����漰����������Դ���������������Ӧ����Ȩ
/// �γ�Դ�벻����ֱ��ת�ص������Ĳ��ͣ�������������ƽ̨�������������������߿γ̡�
/// �γ����漰����������Դ���������������Ӧ����Ȩ  @@              
/////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////  Դ��˵��  //////////////////////////////////////////////////
/// ��Ŀ����      : makefile������ʵս�������C/C++��Ŀ(linux)
/// Contact       : xiacaojun@qq.com
///  ����   :				http://blog.csdn.net/jiedichina
///	��Ƶ�γ� : �����ƿ���	http://study.163.com/u/xiacaojun		
///			   ��Ѷ����		https://jiedi.ke.qq.com/				
///			   csdnѧԺ		http://edu.csdn.net/lecturer/lecturer_detail?lecturer_id=961	
///           51ctoѧԺ		https://edu.51cto.com/sd/d3b6d
///			   ���Ŀ���		http://cppds.com 
/// �����������ڴ���ҳ����  http://ffmpeg.club
/// �����������γ�qqȺ ��296249312����ͬѧ���� 
/// ΢�Ź��ں�: jiedi2007
/// ͷ����	 : xiacaojun
///�������Ŀ���Ⱥ��296249312��ֱ����ϵȺ��ͷ����ؿγ�����
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// �γ̽���qqȺ296249312 //////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////// COMMENT ///////////////////////////////////////////////

#include <iostream>
#include "xthread.h"
#include "xcom.h"
using namespace std;
/*
LD_LIBRARY_PATH=./; 
export LD_LIBRARY_PATH 
*/
class XTask:public XThread
{
public:
	XTask(int s):sec_(s){}
	void Main() override
	{
		cout<<"XTask main"<<endl;
		for(int i = 0; ; i++)
		{
			cout<<"test task "<<i<<endl;
			this_thread::sleep_for(chrono::seconds(sec_));
		}
	}
private:
	int sec_ = 3;	
};
int main(int argc,char *argv[])
{
	cout<<"XServer"<<endl;
	int sec = 1;
	if(argc>1)
		sec = atoi(argv[1]);
	XCom com;
	XTask task(sec);
	task.Start();
	task.Wait();
	return 0;
}