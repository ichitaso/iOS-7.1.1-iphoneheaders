/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol RUTermsViewControllerDelegate;
@class NSString;

@interface RUTermsViewController : UIViewController {

	NSString* _terms;
	unsigned long long _currentTermsVersion;
	<RUTermsViewControllerDelegate>* _delegate;

}

@property (nonatomic,readonly) unsigned long long currentTermsVersion;                       //@synthesize currentTermsVersion=_currentTermsVersion - In the implementation block
@property (assign,nonatomic,__weak) <RUTermsViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(bool)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(id)initWithCurrentTermsVersion:(unsigned long long)arg1 terms:(id)arg2 ;
-(void)_cancelAction:(id)arg1 ;
-(void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1 ;
-(void)_acceptAction:(id)arg1 ;
-(unsigned long long)currentTermsVersion;
@end
