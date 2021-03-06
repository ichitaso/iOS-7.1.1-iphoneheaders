/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSRemoteURLConnectionAgent.app/IDSRemoteURLConnectionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSRemoteURLConnectionDaemon : NSObject {

	NSMutableDictionary* _uniqueIDToURLLoaderMap;
	void* _transaction;
	id _stateMonitor;

}
+(id)sharedInstance;
-(void)addURLLoader:(id)arg1 ;
-(void)removeURLLoaderForUniqueID:(id)arg1 ;
-(id)urlLoaderForUniqueID:(id)arg1 ;
-(void)logState;
-(void)_pidSuspended:(int)arg1 ;
-(void)_terminate;
-(void)dealloc;
-(id)init;
-(void)shutdown;
@end

