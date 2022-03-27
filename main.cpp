#include <cstdlib>
#include <cstdio>

#include "include/view.h"
#include "include/gview.h"
#include "include/tview.h"
#include "include/game.h"

int main(int argn, char *argv[]) {
  	std::string type;

  	if (argn == 1) {
    		type = "text";
  	} else {
    		type = argv[1];
 	}

	view* v = view::get(type);
  	v -> MainLoop();
	v -> ~view(); 
	
	return 0;
}
