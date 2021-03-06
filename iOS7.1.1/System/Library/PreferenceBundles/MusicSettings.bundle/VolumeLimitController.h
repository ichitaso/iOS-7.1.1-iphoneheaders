/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSNumber, UIView;

@interface VolumeLimitController : PSListController {

	NSNumber* _limit;
	UIView* _disabledView;

}
+(bool)volumeLimitLockedByPIN;
+(bool)volumeLimitLockedByRestrictions;
+(bool)volumeLimitLockedByEU;
+(bool)volumeLimitLocked;
-(void)viewWillAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)setVolumeLimitLock:(id)arg1 ;
-(void)disableVolumeLimitLock;
-(void)applyVolumeLimit;
-(void)updateLockedState;
-(id)volumeLimit:(id)arg1 ;
-(void)setVolumeLimit:(id)arg1 specifier:(id)arg2 ;
-(id)volumeLimitEU:(id)arg1 ;
-(void)setVolumeLimitEU:(id)arg1 specifier:(id)arg2 ;
-(void)toggleLock:(id)arg1 ;
-(id)specifiers;
@end

