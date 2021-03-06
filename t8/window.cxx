// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "window.h"

UserInterface::UserInterface() {
  { w = new Fl_Double_Window(405, 560, "Generator");
    w->box(FL_EMBOSSED_BOX);
    w->user_data((void*)(this));
    { deleteBtn = new Fl_Button(215, 130, 72, 25, "Delete");
    } // Fl_Button* o
    { insertBtn = new Fl_Button(35, 130, 72, 25, "Insert");
    } // Fl_Button* o
    { updateBtn = new Fl_Button(125, 130, 72, 25, "Update");
    } // Fl_Button* o
    { clearBtn = new Fl_Button(300, 130, 72, 25, "Clear");
    } // Fl_Button* o
    { okBtn = new Fl_Button(273, 20, 78, 25, "OK");
    } // Fl_Button* o
    { dataBrowser = new Fl_Browser(35, 190, 335, 260, "");
      dataBrowser->type(2);
    } // Fl_Browser* o
    { idInput = new Fl_Input(65, 55, 285, 25, "ID   ");
    } // Fl_Input* o
    { labelInput = new Fl_Input(65, 90, 285, 25, "Label ");
    } // Fl_Input* o
    { titleBox = new Fl_Box(35, 168, 325, 22, "");
    } // Fl_Box* o
    { titleInput = new Fl_Input(65, 20, 197, 25, "Title ");
    } // Fl_Input* o
    { fileInput = new Fl_Input(60,470,150,25, "File  ");
    }
    { importBtn = new Fl_Button(220,470,70,25, "Import");
    }
    { exportBtn = new Fl_Button(300,470,70,25, "Export");
    }
    { generateBtn = new Fl_Button(60,510,285,30,"Generate HTML");
    }
    w->end();
  } // Fl_Double_Window* w
}
