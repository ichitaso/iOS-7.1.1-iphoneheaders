/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/IDSIDQueryControllerDelegate.h>

@class NSString;

@interface TUIDSUtilities : NSObject <IDSIDQueryControllerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)idsServiceForType:(unsigned)arg1 ;
+(char)_anyStatusInResultDictionary:(id)arg1 equalsIDStatus:(int)arg2 ;
+(id)_IDSFormattedDestinationsForPerson:(id)arg1 ;
+(char)_availabilityForDestinations:(id)arg1 serviceType:(unsigned)arg2 ;
+(char)_refreshAvailabilityForDestinations:(id)arg1 serviceType:(unsigned)arg2 userInfo:(id)arg3 ;
+(id)personForABRecordID:(int)arg1 ;
+(char)_availabilityForPerson:(id)arg1 serviceType:(unsigned)arg2 ;
+(char)_refreshAvailabilityForPerson:(id)arg1 serviceType:(unsigned)arg2 ;
+(char)isService:(unsigned)arg1 availableForDestinations:(id)arg2 ;
+(char)isService:(unsigned)arg1 availableForABRecordID:(int)arg2 ;
+(char)refreshAvailabilityForABRecordID:(int)arg1 serviceType:(unsigned)arg2 ;
@end

