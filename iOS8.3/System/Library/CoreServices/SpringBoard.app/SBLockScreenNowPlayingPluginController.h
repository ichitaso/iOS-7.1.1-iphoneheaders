/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:33 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBLockScreenViewController, SBMediaController, PCPersistentTimer;

@interface SBLockScreenNowPlayingPluginController : NSObject {

	SBLockScreenViewController* _viewController;
	SBMediaController* _mediaController;
	PCPersistentTimer* _disableTimer;

}
-(void)_addObservers;
-(void)_updateNowPlayingPlugin;
-(void)invalidateDisableTimer;
-(void)_startDisableTimer;
-(void)_disableNowPlayingPlugin;
-(id)initWithLockScreenViewController:(id)arg1 mediaController:(id)arg2 ;
-(char)isNowPlayingPluginActive;
-(void)dealloc;
@end

