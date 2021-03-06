/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UILegibilityView, UIStatusBarItem, UIStatusBarLayoutManager, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarItemView : UIView {

	double _currentOverlap;
	CGContextRef _imageContext;
	double _imageContextScale;
	_UILegibilityView* _legibilityView;
	bool _visible;
	bool _allowsUpdates;
	UIStatusBarItem* _item;
	UIStatusBarLayoutManager* _layoutManager;
	UIStatusBarForegroundStyleAttributes* _foregroundStyle;

}

@property (nonatomic,readonly) UIStatusBarItem * item;                                              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) UIStatusBarLayoutManager * layoutManager;                              //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,readonly) UIStatusBarForegroundStyleAttributes * foregroundStyle;              //@synthesize foregroundStyle=_foregroundStyle - In the implementation block
@property (assign,getter=isVisible,nonatomic) bool visible;                                         //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) bool allowsUpdates;                                                    //@synthesize allowsUpdates=_allowsUpdates - In the implementation block
+(id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4 ;
-(void)dealloc;
-(id)description;
-(void)setContentMode:(long long)arg1 ;
-(bool)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)layoutManager;
-(id)item;
-(void)setVisible:(bool)arg1 ;
-(long long)textAlignment;
-(id)imageWithShadowNamed:(id)arg1 ;
-(id)foregroundStyle;
-(void)beginImageContextWithMinimumWidth:(double)arg1 ;
-(id)imageFromImageContextClippedToWidth:(double)arg1 ;
-(void)endImageContext;
-(bool)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(void)setLayoutManager:(id)arg1 ;
-(long long)legibilityStyle;
-(bool)isVisible;
-(void)setPersistentAnimationsEnabled:(bool)arg1 ;
-(id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4 ;
-(void)setAllowsUpdates:(bool)arg1 ;
-(double)updateContentsAndWidth;
-(bool)allowsUpdates;
-(double)legibilityStrength;
-(double)adjustFrameToNewSize:(double)arg1 ;
-(void)setLayerContentsImage:(id)arg1 ;
-(long long)textStyle;
-(double)standardPadding;
-(double)shadowPadding;
-(void)endDisablingRasterization;
-(void)setVisible:(bool)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(void)setCurrentOverlap:(double)arg1 ;
-(double)currentOverlap;
-(double)currentLeftOverlap;
-(double)currentRightOverlap;
-(double)setStatusBarData:(id)arg1 actions:(int)arg2 ;
-(id)textFont;
-(double)extraLeftPadding;
-(double)extraRightPadding;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(double)maximumOverlap;
-(bool)animatesDataChange;
-(void)performPendedActions;
-(id)imageWithText:(id)arg1 ;
-(void)beginDisablingRasterization;
@end

