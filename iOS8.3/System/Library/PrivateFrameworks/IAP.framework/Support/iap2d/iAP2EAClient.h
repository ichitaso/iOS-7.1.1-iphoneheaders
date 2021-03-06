/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:02:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
#import <iap2d/iap2d-Structs.h>
@class NSString, NSObject, NSTimer;

@interface iAP2EAClient : NSObject {

	unsigned _clientID;
	unsigned _capabilities;
	char _supportsAccessibility;
	char _clientRequiresAccReset;
	int _processId;
	SCD_Struct_iA18 _auditToken;
	NSString* _bundleId;
	NSObject*<OS_xpc_object> xpcConnection;
	SBSProcessAssertionRef _processAssertion;
	long _processAssertionStartTime;
	NSTimer* _processAssertionTimer;
	int _iapSessionRefCount;
	NSObject*<OS_xpc_object> _xpcConnection;

}

@property (assign,nonatomic) unsigned clientID;                                     //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                 //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) SCD_Struct_iA18 auditToken;                          //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) unsigned capabilities;                               //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) char locationSupportedByClient; 
@property (nonatomic,readonly) char supportsAccessibility;                          //@synthesize supportsAccessibility=_supportsAccessibility - In the implementation block
@property (assign,nonatomic) char clientRequiresAccReset;                           //@synthesize clientRequiresAccReset=_clientRequiresAccReset - In the implementation block
+(unsigned)clientIDForLocationClient;
-(void)takeProcessAssertion:(id)arg1 ;
-(int)_getProcessId;
-(char)locationSupportedByClient;
-(void)_processAssertionTimerExpired;
-(id)initWithCapabilities:(unsigned)arg1 auditToken:(SCD_Struct_iA18)arg2 xpcConnection:(id)arg3 andBundleId:(id)arg4 ;
-(void)increaseSessionRefCount;
-(void)decreaseSessionRefCount;
-(void)setLocationSupportedByClient:(char)arg1 ;
-(void)setClientRequiresAccReset:(char)arg1 ;
-(char)clientRequiresAccReset;
-(char)supportsAccessibility;
-(NSString *)bundleId;
-(void)dealloc;
-(SCD_Struct_iA18)auditToken;
-(unsigned)capabilities;
-(void)setClientID:(unsigned)arg1 ;
-(unsigned)clientID;
-(NSObject*<OS_xpc_object>)xpcConnection;
@end

