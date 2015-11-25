#ifndef _LOOP_QUEUE_H_
#define _LOOP_QUEUE_H_

#include <iostream>

using namespace std;

/************************************************************************/
/* ѭ�����е�ʵ�� ���ڴ洢 ��Ƶ���� ʹ��byte����                                                                     */
/************************************************************************/

class LoopQueue
{
private:
	uint8_t* data;	//��������
	int len;	//���еĳ��� �ܴ洢���������Ϊlen - 1
	int start;	//ָ���һ�����ݵ��±�
	int end;	//ָ�����һ����������һ���±�

public:
	/************************************************************************/
	/* ���캯�� sizeΪ�洢�����ݵ���󳤶�                                                                     */
	/************************************************************************/
	LoopQueue(int);
	~LoopQueue();

	/************************************************************************/
	/* �õ� �±� ���� �� С���Ӧ��ֵ                                                                     */
	/************************************************************************/
	int get_start();
	int get_end();
	int get_len();
	uint8_t get_byte(int);

	/************************************************************************/
	/* �Ƿ�Ϊ��                                                                     */
	/************************************************************************/
	bool empty();

	/************************************************************************/
	/* �����Ƿ�����                                                                     */
	/************************************************************************/
	bool full();

	/************************************************************************/
	/* �洢�����ݵĸ��� byte�ĸ���                                                                     */
	/************************************************************************/
	int size();

	/**
	 * ���ص�һ��byte
	 */
	uint8_t front();

	/************************************************************************/
	/* ѹ�� һ������ �����ǰ���������� ֱ�ӷ���false                                                                     */
	/************************************************************************/
	bool push(uint8_t);

	/************************************************************************/
	/* ����һ�� ���� ��ǰ�����ǿյ� ����false                                                                     */
	/************************************************************************/
	bool pop();

	/************************************************************************/
	/* ��ն���                                                                     */
	/************************************************************************/
	void clear();
};

#endif