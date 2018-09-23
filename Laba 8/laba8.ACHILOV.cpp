#include<stdio.h>
#include<conio.h>

#define YES  1
#define NO   0
#define MAXLINE 1000

void process_line(char buffer[]);

void main(void)
{
	char line[MAXLINE];

	gets_s(line);
	process_line(line);
	puts(line);
	_getch();
}
void process_line(char buffer[])
{
	char c;  // ������� ������ 
	char *buf_ptr; // ��������� �� ������� ������ ������ 
	char *end;   // ��������� �� ����� ����� 
	char *begin; // ��������� �� ������ �����
	char prev_c; // ���������� ������
	int found; // ������� ����� ������������� � ���������������� �� ���� � �� �� �����
	int flag;  // ������� �����
	int a;
	int b;
	
	flag = NO;
	found = NO;
	prev_c = ' ';

	buf_ptr = buffer;
	begin = buffer;
	end = buffer;
	
	do
	{
		c = *buf_ptr; // ����� ������� ������ �� ������
		if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0')
		{
			if (flag == YES)
			{
				end = buf_ptr - 1;  // ��������� ������� ����� �����

				if (a == b)  
				{
					char *src = end + 1;
					char *dst = begin;
					while ((*dst++ = *src++) != '\0');
					buf_ptr = begin;
				}
			}
			flag = NO;
		}
		else
		{
			if ((c >= 'A') && (c <= 'Z') || (c >= 'a') && (c <= 'z'))
			{
				if (flag == NO)
			{
					a = c;
					begin = buf_ptr;

			}



				flag = YES;
				b = c;
				if (a == b + 32 || a == b - 32)
					b = a;
			}
		}
		buf_ptr++;
	} while (c != '\0');
}
