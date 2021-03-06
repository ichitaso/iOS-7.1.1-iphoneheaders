/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>

@class UIViewController;

@interface SBAlertAdapter : SBAlert {

	UIViewController* _effectiveViewController;

}
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(id)_basicDescription;
-(id)viewControllerForSupportedInterfaceOrientations;
-(void)alertWindow:(id)arg1 resizedFromContentFrame:(CGRect)arg2 toContentFrame:(CGRect)arg3 ;
-(id)effectiveViewController;
-(void)dealloc;
-(id)display;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)setView:(id)arg1 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(char)shouldAutomaticallyForwardRotationMethods;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(id)initWithViewController:(id)arg1 ;
-(void)setDisplay:(id)arg1 ;
@end

