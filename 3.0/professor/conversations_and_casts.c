// ��ȯ
// int i = 10;
// double d;
// d = i; 

// ���� i�� �Ǽ��� �ڵ����� ��ȯ�Ǿ� d�� ����˴ϴ�. 
//i�� ���� �����˴ϴ�.



//ĳ����
// double d = 3.14;
// int i;
// i = (int)d;  

// �Ǽ� d�� ������ ĳ�����Ͽ� i�� �����մϴ�.
// d�� ���� ������ 3.14����, (int)d ǥ������ 3�� �˴ϴ�



//��ȯ�� ĳ���� ��� ���� �����͸� �������� �ʽ��ϴ�.

//unsigned�� 0�� ����� ǥ�� �����ϴ�. 

// char short int -> int
// unsigned int double -> double
// char int -> int
// char double -> double
// double short -> double 
// int long -> long

// ������ �Ϲ����� Ÿ�� ���θ�� ��Ģ�Դϴ�:

// char�� short�� ������ �����ϱ� ���� �׻� int�� ���θ�ǵ˴ϴ�.
// �ǿ����� �� �ϳ��� long double ���̸�, �ٸ� �ǿ����ڵ鵵 ��� long double���� ���θ�ǵ˴ϴ�.
// �׷��� �ʰ� �ǿ����� �� �ϳ��� double ���̸�, �ٸ� �ǿ����ڵ鵵 ��� double���� ���θ�ǵ˴ϴ�.
// �׷��� �ʰ� �ǿ����� �� �ϳ��� float ���̸�, �ٸ� �ǿ����ڵ鵵 ��� float���� ���θ�ǵ˴ϴ�.
// �׷��� �ʰ� �ǿ����� �� �ϳ��� unsigned long long, long long, unsigned long, or 'long' ���̸�, �ٸ� �ǿ����ڵ鵵 �ش� Ÿ������ ���θ�� �� �� �ֽ��ϴ�.
// u �� l�� ������ system  dependant ��� �Ѵ�. 

//�� 

// long double
// double
// float
// unsigned long
// long
// unsigned
// int ������� �ڵ� Ÿ�� ��ȯ�� �̷������. 

//long�� unsigned�� ��� ��� ���� long���� ǥ���� �� ������ long���� ��ȯ, 
//�ƴ϶�� unsigned long���� ��ȯ


// C ����� ǥ�� ������ Ÿ�Ե��� ǥ���� �� �ִ� ���� ������ �� ���� ������ �����ϸ� ������ �����ϴ�:

// char / unsigned char
// short / unsigned short
// int / unsigned int
// long / unsigned long
// long long / unsigned long long
// float
// double
// long double





// (double) i: i��� ������ double Ÿ������ ĳ�����մϴ�.
// (long) ('A' + 1.0): ���� 'A'�� �ƽ�Ű �ڵ� ���� 1.0�� ���� �� long Ÿ������ ĳ�����մϴ�.
// f = (float) ((int) d + 1): d��� ������ int�� ĳ������ �� 1�� ���ϰ� �� ����� float�� ĳ�����Ͽ� f�� �����մϴ�.
// d = (double) i / 3: i��� ������ double�� ĳ������ �� 3���� ������ �� ������� d�� �����մϴ�.
// (double) (x = 77) : x�� 77�� �����ϰ� �� ������� 77�� double�� ĳ��Ʈ �մϴ�.
// ������ ���� ��찡 �߸��� ���Դϴ�:

// (double)x = 77; // equivalent to ((double)x)=77, error.: �� ������ x�� double�� �ٲ� ���¿��� ���� �Ҵ��Ϸ� �ϹǷ� ������ �߻��մϴ�.

// (float)i + 3 <==> ((float)i)+3 ������ �켱������ ���� �����Դϴ�. 
// �̰��� (float)i�� ���� ���Ǹ�, ���Ŀ� ��� �����ٰ� ������ '3'�� �������ϴ�. 
// �ֳ��ϸ� ��ȣ�� ���� '( )' ���� ������ '+', '-' ��� �켱�ϱ� �����Դϴ�.