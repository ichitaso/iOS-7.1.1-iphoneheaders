/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:58:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/GameCenterSettings.bundle/GameCenterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <GameCenterSettings/PSHeaderFooterView.h>

@class PSSpecifier, UIActivityIndicatorView;

@interface GKSettingsSpinnerView : UIView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,readonly) PSSpecifier * specifier; 
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(PSSpecifier *)specifier;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(float)preferredHeightForWidth:(float)arg1 inTableView:(id)arg2 ;
-(UIActivityIndicatorView *)spinnerView;
@end

