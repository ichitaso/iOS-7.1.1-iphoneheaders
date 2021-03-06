/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>

@protocol SBBannerButtonViewControllerDelegate;
@class NSArray;

@interface SBBannerButtonViewController : UIViewController {

	NSArray* _buttons;
	id<SBBannerButtonViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<SBBannerButtonViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_buttonForActionTitle:(id)arg1 ;
-(id)_buttonView;
-(void)dealloc;
-(void)setDelegate:(id<SBBannerButtonViewControllerDelegate>)arg1 ;
-(id<SBBannerButtonViewControllerDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)setButtonTitles:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
@end

