/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/WeatherExtensionBridgeSettings.bundle/WeatherExtensionBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class BPSAppGlanceManager;

@interface WeatherCompanionBridgeSettingsController : PSListController {

	BPSAppGlanceManager* _manager;

}

@property (nonatomic,retain) BPSAppGlanceManager * manager;              //@synthesize manager=_manager - In the implementation block
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)localizedPaneTitle;
-(BPSAppGlanceManager *)manager;
-(void)setManager:(BPSAppGlanceManager *)arg1 ;
-(id)specifiers;
@end

