/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBCenterIconZoomAnimator.h>

@class UIView, SBCenterAppZoomSettings;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator {

	UIView* _appView;
	double _distantScale;

}

@property (nonatomic,retain) SBCenterAppZoomSettings * settings; 
@property (assign) double distantScale;                                       //@synthesize distantScale=_distantScale - In the implementation block
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)initWithFolderController:(id)arg1 appView:(id)arg2 ;
-(void)setDistantScale:(double)arg1 ;
-(double)_iconZoomDelay;
-(void)_delayedForRotation;
-(void)_zoomAppForZoomFraction:(double)arg1 ;
-(void)_fadeAppForZoomFraction:(double)arg1 ;
-(double)_appZoomDelay;
-(double)distantScale;
-(void)dealloc;
@end

