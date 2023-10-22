// // The mathematical operation min (x, y) can be represented by the conditional expression
// // (x < y) ? x : y
// // In a similar fashion, using only conditional expressions, describe the mathematical operations
// // min(x, y, z) and max(x, y, z, w)

// // ������ ���� min(x, y)�� ���ǽ� (x < y) ? x : y�� ǥ���� �� �ֽ��ϴ�. 
// // ����������, ���ǽĸ��� ����Ͽ� ������ ���� min(x, y, z)�� max(x, y, z, w)�� �����Ͻʽÿ�.



// min(x, y, z): �ּҰ��� ã�� �Լ��� ������ ���� ǥ���� �� �ֽ��ϴ�:

// c
// ((x < y) ? ((x < z) ? x : z) : ((y < z) ? y : z))
// �� ���� ���� x�� y�� ���Ͽ� �� �� ���� ���� �����ϰ� �� ����� �ٽ� z�� ���Ͽ� ���� ���� ���� ã�Ƴ��ϴ�.

// max(x,y,z,w): �ִ밪�� ã�� �Լ��� ������ ���� ǥ���� �� �ֽ��ϴ�:

// c
// ((x > y)? ((x > z)? ((x > w)? x: w): ((z > w)? z: w)): ((y > z)? ((y > w)? y: w):((z > w)?z:w)))
// �� ���� ���� x�� y�� ���Ͽ� �� �� ū ���� �����ϰ� �� ����� �ٽ� ������ ����� ���Ͽ� ���� ū ���� ã�Ƴ��ϴ�.




// #include <stdio.h>

// int main(void)
// {
     
// }
