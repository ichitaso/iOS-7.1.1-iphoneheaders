/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/BrowserPanel.h>

@class BrowserPrintPageRenderer, WebFrame;

@interface PrintBrowserPanel : NSObject <BrowserPanel> {

	BrowserPrintPageRenderer* _pageRenderer;
	WebFrame* _webFrame;

}
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(id)printControllerWithBrowserView:(id)arg1 URLString:(id)arg2 pageTitle:(id)arg3 printFooter:(BOOL)arg4 ;
-(void)dealloc;
-(id)initWithWebFrame:(id)arg1 ;
@end

