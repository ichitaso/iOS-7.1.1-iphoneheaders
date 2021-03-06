/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RLNDataProviderFactory : NSObject {

	NSMutableDictionary* _dataProvidersBySectionID;

}
+(id)sharedInstance;
-(void)_noteInstalledAppsDidChange:(id)arg1 ;
-(void)_notePushStoreAppsDidChange:(id)arg1 ;
-(void)_noteRemotePushAppsDidChange:(id)arg1 ;
-(void)reloadDataProviders;
-(id)createDataProviderWithSectionID:(id)arg1 ;
-(void)_reloadDataProviders:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

