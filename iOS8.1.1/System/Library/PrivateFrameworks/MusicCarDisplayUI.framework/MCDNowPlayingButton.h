/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class CALayer;

@interface MCDNowPlayingButton : UIButton {

	CALayer* _leftBorder;
	CALayer* _focusColorLayer;
	BOOL _hidesLeftBorder;

}

@property (assign,nonatomic) BOOL hidesLeftBorder;              //@synthesize hidesLeftBorder=_hidesLeftBorder - In the implementation block
+(id)buttonWithHeight:(double)arg1 ;
-(void)layoutSubviews;
-(void)_focusStateDidChange;
-(BOOL)_isFocusableElement;
-(void)sizeToFit;
-(void)setHidesLeftBorder:(BOOL)arg1 ;
-(BOOL)hidesLeftBorder;
@end

