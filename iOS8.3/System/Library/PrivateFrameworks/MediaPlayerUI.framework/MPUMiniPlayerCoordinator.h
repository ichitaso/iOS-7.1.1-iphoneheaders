/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:24:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPPlaybackControlsDelegate.h>
#import <MediaPlayerUI/MPTransportControlsTarget.h>
#import <MediaPlayerUI/MPUMiniPlayerActionsViewControllerDelegate.h>

@class MPQueueFeeder, _UINavigationControllerPalette, MPUMiniPlayerPlaybackControlsView, UINavigationController, NSTimer, UIViewController, MPAVController, NSString;

@interface MPUMiniPlayerCoordinator : NSObject <MPPlaybackControlsDelegate, MPTransportControlsTarget, MPUMiniPlayerActionsViewControllerDelegate> {

	MPQueueFeeder* _feeder;
	_UINavigationControllerPalette* _miniPlayerPalette;
	MPUMiniPlayerPlaybackControlsView* _playbackControlsView;
	UINavigationController* _navigationController;
	NSTimer* _skipInformationRevealTimer;
	UIViewController* _viewController;
	MPAVController* _player;

}

@property (nonatomic,readonly) MPAVController * player;                                                //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) UINavigationController * _navigationController; 
@property (nonatomic,readonly) MPUMiniPlayerPlaybackControlsView * _playbackControlsView; 
@property (nonatomic,readonly) UIViewController * _viewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlayer:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(char)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(char)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(UIViewController *)_viewController;
-(void)_skipLimitDidChangeNotification:(id)arg1 ;
-(void)_didSkipTrackNotification:(id)arg1 ;
-(void)_setFeeder:(id)arg1 ;
-(void)_revealSkipInformationMomentarily;
-(void)_updateMiniPlayerAttachment;
-(void)_scheduleSkipInformationRevealTimer;
-(void)_invalidateSkipInformationRevealTimer;
-(void)_updateMiniPlayerPaletteForNavigationController:(id)arg1 ;
-(void)willShowViewController:(id)arg1 inNavigationController:(id)arg2 ;
-(void)prospectivePlaybackInformationDidChangeForViewController:(id)arg1 ;
-(MPUMiniPlayerPlaybackControlsView *)_playbackControlsView;
-(void)navigationController:(id)arg1 traitCollectionDidChange:(id)arg2 ;
-(id)_currentProspectivePlaybackInformation;
-(void)miniPlayerActionsViewController:(id)arg1 didSelectAction:(int)arg2 ;
-(Class)_miniPlayerPlaybackControlsViewClass;
-(MPAVController *)player;
-(UINavigationController *)_navigationController;
@end

