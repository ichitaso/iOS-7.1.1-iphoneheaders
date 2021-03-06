/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPTransitionController.h>

@class UIView;

@interface MPFlipTransitionController : MPTransitionController {

	UIView* _fromView;
	CGRect _toFrame;
	double _topMargin;

}

@property (nonatomic,retain) UIView * fromView;              //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) CGRect toFrame;                 //@synthesize toFrame=_toFrame - In the implementation block
@property (assign,nonatomic) double topMargin;               //@synthesize topMargin=_topMargin - In the implementation block
-(void)performTransition:(unsigned long long)arg1 ;
-(void)setToFrame:(CGRect)arg1 ;
-(id)_subtypeForTransitionType:(unsigned long long)arg1 ;
-(CGRect)toFrame;
-(double)topMargin;
-(void)setTopMargin:(double)arg1 ;
-(id)init;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIView *)fromView;
-(void)setFromView:(UIView *)arg1 ;
@end

