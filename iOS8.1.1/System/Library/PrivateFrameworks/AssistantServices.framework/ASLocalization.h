/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface ASLocalization : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _languageCode;
	NSMutableDictionary* _stringTables;

}
+(id)sharedLocalization;
-(void)_clearTableCache;
-(id)_languageCode;
-(void)_languageCodeChanged;
-(id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end

