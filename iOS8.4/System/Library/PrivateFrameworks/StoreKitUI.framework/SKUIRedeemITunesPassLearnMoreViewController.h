/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>
#import <StoreKitUI/SKUIPassbookLoaderDelegate.h>

@class SKUIRedeemITunesPassLearnMoreView, SKUIPassbookLoader, NSURL, NSString;

@interface SKUIRedeemITunesPassLearnMoreViewController : SKUIRedeemStepViewController <SKUIPassbookLoaderDelegate> {

	BOOL _didTapAddPassbookButton;
	SKUIRedeemITunesPassLearnMoreView* _learnMoreView;
	SKUIPassbookLoader* _passbookLoader;
	NSURL* _passbookURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_doneButtonAction:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)presentationViewControllerForPassbookLoader:(id)arg1 ;
-(void)passbookLoaderDidFinish:(id)arg1 ;
-(id)_existingPass;
-(void)_passButtonAction:(id)arg1 ;
-(void)_loadPassbookPass;
-(void)_loadPassbookURL;
-(void)_showErrorDialog;
-(void)_didLoadPassbookURLString:(id)arg1 ;
@end

