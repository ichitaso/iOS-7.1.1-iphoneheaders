/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying> {

	NSNumber* _wantsDeliveryStatus;
	NSDictionary* _deliveryStatusContext;
	NSNumber* _version;

}

@property (copy) NSNumber * wantsDeliveryStatus;                    //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
@property (copy) NSDictionary * deliveryStatusContext;              //@synthesize deliveryStatusContext=_deliveryStatusContext - In the implementation block
@property (copy) NSNumber * version;                                //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setVersion:(id)arg1 ;
-(id)version;
-(bool)wantsAPSRetries;
-(bool)wantsUserAgentInHeaders;
-(id)userAgentHeaderString;
-(bool)wantsHTTPHeaders;
-(id)wantsDeliveryStatus;
-(void)setWantsDeliveryStatus:(id)arg1 ;
-(id)deliveryStatusContext;
-(void)setDeliveryStatusContext:(id)arg1 ;
-(id)messageBody;
@end

