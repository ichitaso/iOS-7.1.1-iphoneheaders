/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SBLockScreenViewDelegate <NSObject>
@required
-(BOOL)lockScreenViewIsCurrentlyBeingDisplayed;
-(BOOL)wantsToShowStatusBarTime;
-(BOOL)shouldShowSlideToUnlockTextImmediately;
-(void)removeCoordinatedPresentingController:(id)arg1;
-(void)addCoordinatedPresentingController:(id)arg1;
-(void)lockScreenView:(id)arg1 didScrollToPage:(long long)arg2;
-(BOOL)isAllowingWallpaperBlurUpdates;
-(void)lockScreenView:(id)arg1 didEndScrollingOnPage:(long long)arg2;
-(void)lockScreenViewDidBeginScrolling:(id)arg1;
-(BOOL)lockScreenViewPhonePluginIsActive;
-(void)lockScreenViewDidScrollWithNewScrollPercentage:(double)arg1 tracking:(BOOL)arg2;
-(void)lockScreenViewWillEndDraggingWithPercentScrolled:(double)arg1 percentScrolledVelocity:(double)arg2 targetScrollPercentage:(double)arg3;
-(id)effectiveCustomSlideToUnlockText;

@end

