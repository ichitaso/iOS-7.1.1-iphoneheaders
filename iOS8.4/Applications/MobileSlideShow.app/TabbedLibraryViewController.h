/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSlideShow.app/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUTabbedLibraryViewController.h>

@class WImportViewController;

@interface TabbedLibraryViewController : PUTabbedLibraryViewController {

	WImportViewController* _importViewController;

}

@property (nonatomic,retain) WImportViewController * importViewController;              //@synthesize importViewController=_importViewController - In the implementation block
-(void)setImportViewController:(WImportViewController *)arg1 ;
-(WImportViewController *)importViewController;
-(char)shouldShowTabForContentMode:(int)arg1 ;
-(id)newRootViewControllerForContentMode:(int)arg1 ;
-(void)dealloc;
@end

