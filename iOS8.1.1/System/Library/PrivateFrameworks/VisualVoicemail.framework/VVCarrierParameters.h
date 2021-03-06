/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface VVCarrierParameters : NSObject {

	NSDictionary* _parameterValues;

}
+(id)carrierServiceName;
+(BOOL)supportsGreetingChanges;
+(BOOL)supportsPasswordChanges;
+(BOOL)ignoresRoamingSwitch;
+(id)messageNotificationFallbackTimeout;
+(id)retryIntervals;
+(BOOL)supportsDetachedStorage;
-(void)dealloc;
-(id)initForService:(id)arg1 ;
-(id)parameterValueForKey:(id)arg1 ;
-(void)_initForBundle:(id)arg1 ;
-(id)initForServiceBundleId:(id)arg1 ;
@end

