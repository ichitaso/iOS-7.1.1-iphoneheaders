/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKeyboardCandidateBarSegmentControl;

@interface UIKeyboardCandidatePageControl : UIView {

	UIKeyboardCandidateBarSegmentControl* _pageControl;
	bool _usingVerticalArrows;

}
+(id)imageWithColor:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setUseVerticalArrows:(bool)arg1 ;
-(void)_changePage:(id)arg1 ;
-(void)updatePageControlWithStatus:(bool)arg1 rightControlButtonEnabled:(bool)arg2 ;
@end
