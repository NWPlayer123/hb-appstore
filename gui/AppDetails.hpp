#ifndef APPDETAILS_H_
#define APPDETAILS_H_

#include "TextElement.hpp"
#include "ImageElement.hpp"
#include "ProgressBar.hpp"
#include "DetailsPopup.hpp"
#include "../libs/get/src/Package.hpp"
#include "../libs/get/src/Get.hpp"


class AppDetails : public Element
{
public:
	AppDetails(Package* package, Get* get);
	bool process(InputEvents* event);
	void render(Element* parent);
    
	bool operating = false;
	Package* package;
    Get* get;
	ProgressBar* pbar = NULL;
	int highlighted = -1;
    
	// the callback method to update the currently displayed pop up (and variables it needs)
    static int updateCurrentlyDisplayedPopup(void *clientp, double dltotal, double dlnow, double ultotal, double ulnow);
};

#endif
