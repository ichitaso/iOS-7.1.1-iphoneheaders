/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableDictionary;

@interface PDObjectSettingsManager : NSObject {

	NSObject*<OS_dispatch_semaphore> _archiveSemaphore;
	NSMutableDictionary* _objectSettings;

}
+(id)archive;
-(void)updateSettings:(long long)arg1 forObjectWithUniqueIdentifier:(id)arg2 ;
-(BOOL)settingEnabled:(long long)arg1 forObjectWithUniqueIdentifier:(id)arg2 ;
-(void)removeSettingsForObjectWithUniqueIdentifier:(id)arg1 ;
-(long long)settingsForObjectWithUniqueIdentifier:(id)arg1 ;
-(void)_requestArchiveToDisk;
-(id)initWithObjectSettings:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

