/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, UISnapshotView, UIWindow, NSArray;

@interface UIClientRotationContext : NSObject {

	UIView* _headerView;
	UIView* _footerView;
	UIView* _contentView;
	UIView* _snapshotTargetView;
	UIView* _rotatingSnapshotView;
	UIView* _footerStartSnapshotView;
	UIView* _footerEndSnapshotView;
	bool _headerWasHidden;
	bool _footerWasHidden;
	bool _contentWasHidden;
	bool _snapshotTargetWasHidden;
	bool _orderKeyboardInAfterRotating;
	bool _skipFooterRotation;
	bool _skipHeaderRotation;
	long long _fromOrientation;
	long long _toOrientation;
	double _duration;
	UISnapshotView* _headerSnapshotViewStart;
	UISnapshotView* _footerSnapshotViewStart;
	UISnapshotView* _contentSnapshotViewStart;
	double _contentTopAdjustmentStart;
	id _rotatingClient;
	SCD_Struct_UI73 _rotationSettings;
	double contentBottomInset;
	UIWindow* _window;
	bool _skipClientRotationCallbacks;
	NSArray* _backdropViews;

}

@property (nonatomic,readonly) id rotatingClient;                           //@synthesize rotatingClient=_rotatingClient - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) bool skipClientRotationCallbacks;              //@synthesize skipClientRotationCallbacks=_skipClientRotationCallbacks - In the implementation block
@property (nonatomic,readonly) long long fromOrientation;                   //@synthesize fromOrientation=_fromOrientation - In the implementation block
@property (nonatomic,readonly) long long toOrientation;                     //@synthesize toOrientation=_toOrientation - In the implementation block
-(void)dealloc;
-(double)duration;
-(void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3 ;
-(void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(bool)arg3 forInterfaceOrientation:(long long)arg4 ;
-(id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4 ;
-(id)contentView;
-(id)rotatingClient;
-(void)setSkipClientRotationCallbacks:(bool)arg1 ;
-(void)slideHeaderViewAndFooterViewOffScreen:(bool)arg1 forInterfaceOrientation:(long long)arg2 ;
-(void)setupRotationOrderingKeyboardInAfterRotation:(bool)arg1 ;
-(void)disableBackdropViewUpdates:(bool)arg1 ;
-(void)rotateSnapshots;
-(long long)toOrientation;
-(void)finishFirstHalfRotation;
-(long long)fromOrientation;
-(bool)skipClientRotationCallbacks;
-(void)finishFullRotateUsingOnePartAnimation:(bool)arg1 ;
-(bool)_isHeaderTranslucent;
-(bool)_isFooterTranslucent;
-(void)_slideFooterWithStartSnapshot:(id)arg1 endSnapshot:(id)arg2 duration:(double)arg3 ;
@end

