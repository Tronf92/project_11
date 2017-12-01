#include <Windows.h>

void APIENTRY WinSec(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow){

	if(DOUBLE_CLICK){
		MessageBox(NULL, "Bad choice", "Title 2" , NULL);
	}
	
}


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow){
	
	MessageBox(NULL,"Hi everyone","Title", 5);
	WinSec(NULL,hInstance,"Title",NULL);
	MessageBox(NULL,"Hi everyone","Title", 5);
	return 0;

}
