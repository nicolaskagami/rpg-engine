//Main tester for Graphics
//Author: Nicolas Silveira Kagami

#include <stdio.h>
#include "Graphics.h"


int main(int argc, char ** arv)
{
    Window w;
    w.init();    
    w.close();
    Map hehe(5,5);
    hehe.print_ascii();
}
