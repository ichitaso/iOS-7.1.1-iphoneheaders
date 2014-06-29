/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_source;
@class UILabel, UIProgressView, NSObject;

@interface MusicCloudLoadingView : UIView {

	UILabel* _titleLabel;
	UIProgressView* _progressView;
	NSObject<OS_dispatch_source>* _updateTimerSource;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)_updateCloudProgressAnimated:(bool)arg1 ;
@end
