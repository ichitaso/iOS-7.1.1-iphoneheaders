/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString;

@interface SBActivationInfoViewController : UIViewController {

	NSString* _meid;
	NSString* _imei;
	NSString* _iccid;
	NSString* _csn;
	BOOL _isOnBootstrap;
	double _alertHeight;

}
-(id)_formattedIMEI;
-(id)_formattedCSN;
-(id)_formattedICCID;
-(void)_updateTextView;
-(id)_formattedString:(id)arg1 withSpaceAfterDigits:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)textView;
-(void)_simStatusChanged:(id)arg1 ;
@end

