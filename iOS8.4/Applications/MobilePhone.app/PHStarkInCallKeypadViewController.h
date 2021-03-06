/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/PHStarkGenericViewController.h>

@class UIButton, DialerController, UIView, PHStarkNoContentBannerView, AVExternalDevice;

@interface PHStarkInCallKeypadViewController : PHStarkGenericViewController {

	char _limitedSoftPhoneKeypad;
	UIButton* _backButton;
	UIButton* _endButton;
	DialerController* _dialerController;
	UIView* _fakeNavigationBar;
	int _currentHighlightedControlIndex;
	PHStarkNoContentBannerView* _noContentBannerView;
	AVExternalDevice* _carPlayExternalDevice;

}

@property (retain) UIButton * backButton;                                         //@synthesize backButton=_backButton - In the implementation block
@property (retain) UIButton * endButton;                                          //@synthesize endButton=_endButton - In the implementation block
@property (retain) DialerController * dialerController;                           //@synthesize dialerController=_dialerController - In the implementation block
@property (retain) UIView * fakeNavigationBar;                                    //@synthesize fakeNavigationBar=_fakeNavigationBar - In the implementation block
@property (assign) int currentHighlightedControlIndex;                            //@synthesize currentHighlightedControlIndex=_currentHighlightedControlIndex - In the implementation block
@property (retain) PHStarkNoContentBannerView * noContentBannerView;              //@synthesize noContentBannerView=_noContentBannerView - In the implementation block
@property (retain) AVExternalDevice * carPlayExternalDevice;                      //@synthesize carPlayExternalDevice=_carPlayExternalDevice - In the implementation block
@property (assign,nonatomic) char limitedSoftPhoneKeypad;                         //@synthesize limitedSoftPhoneKeypad=_limitedSoftPhoneKeypad - In the implementation block
-(void)backButtonTapped:(id)arg1 ;
-(void)setBackButton:(UIButton *)arg1 ;
-(void)endButtonTapped:(id)arg1 ;
-(void)setEndButton:(UIButton *)arg1 ;
-(UIButton *)endButton;
-(void)setCarPlayExternalDevice:(AVExternalDevice *)arg1 ;
-(AVExternalDevice *)carPlayExternalDevice;
-(void)setDialerController:(DialerController *)arg1 ;
-(DialerController *)dialerController;
-(void)setLimitedSoftPhoneKeypad:(char)arg1 ;
-(void)postMessageOverlayIfNeeded;
-(char)limitedSoftPhoneKeypad;
-(PHStarkNoContentBannerView *)noContentBannerView;
-(void)setNoContentBannerView:(PHStarkNoContentBannerView *)arg1 ;
-(int)currentHighlightedControlIndex;
-(void)setCurrentHighlightedControlIndex:(int)arg1 ;
-(UIView *)fakeNavigationBar;
-(void)setFakeNavigationBar:(UIView *)arg1 ;
-(void)limitedUINotification:(id)arg1 ;
-(void)dealloc;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)preferredFocusedItem;
-(void)_moveWithEvent:(id)arg1 ;
-(void)focusedViewDidChange;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(UIButton *)backButton;
-(void)hardwareControlEventNotification:(id)arg1 ;
@end

