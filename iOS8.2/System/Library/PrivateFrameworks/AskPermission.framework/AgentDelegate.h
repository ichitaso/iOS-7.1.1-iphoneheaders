/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/askpermissiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <askpermissiond/NSXPCListenerDelegate.h>

@class NSMutableArray, NSLock, NSString;

@interface AgentDelegate : NSObject <NSXPCListenerDelegate> {

	NSMutableArray* _interfaces;
	NSLock* _interfacesLock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAgentDelegate;
-(void)xpcConnectionWasDisposedOfForAgent:(id)arg1 ;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

