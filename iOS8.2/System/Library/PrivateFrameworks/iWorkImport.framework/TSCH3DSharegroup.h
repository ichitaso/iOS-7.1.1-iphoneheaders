/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUFlushable.h>

@protocol TSCH3DSharegroupDelegate;
@class NSThread, TSCH3DResourceCache, TSCH3DShaderCache, NSMutableSet, TSCH3DSharegroupToken, NSString;

@interface TSCH3DSharegroup : NSObject <TSUFlushable> {

	NSThread* mOwningThread;
	TSCH3DResourceCache* mResourceCache;
	TSCH3DShaderCache* mShaderCache;
	NSMutableSet* mPurgeableResourceSet;
	int mPerformance;
	char mDidReceiveFlush;
	id<TSCH3DSharegroupDelegate> mDelegate;
	TSCH3DSharegroupToken* mToken;

}

@property (assign,nonatomic) int performance; 
@property (assign,nonatomic) id<TSCH3DSharegroupDelegate> delegate; 
@property (nonatomic,readonly) TSCH3DResourceCache * resourceCache; 
@property (nonatomic,readonly) TSCH3DShaderCache * shaderCache; 
@property (nonatomic,readonly) TSCH3DSharegroupToken * token; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uniqueSharegroupWithOwningThread:(id)arg1 token:(id)arg2 ;
-(void)nonThreadOwnedFlushCache;
-(void)setPerformance:(int)arg1 ;
-(id)initWithOwningThread:(id)arg1 token:(id)arg2 ;
-(char)isOneShot;
-(char)mustRunOnMainThread;
-(FlushResult)p_flushCacheIfNecessary;
-(void)p_flushInTargetThread;
-(char)owningThreadIsNil;
-(char)isCurrentThreadOwner;
-(void)flushMemoryForResourceSet:(id)arg1 ;
-(void)flushResourceSet:(id)arg1 ;
-(void)forceFlushResourceSet:(id)arg1 ;
-(void)setIfIsMoreDemandingPerformance:(int)arg1 ;
-(void)flushInTargetThread;
-(int)performance;
-(TSCH3DShaderCache *)shaderCache;
-(void)dealloc;
-(void)setDelegate:(id<TSCH3DSharegroupDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<TSCH3DSharegroupDelegate>)delegate;
-(void)flush;
-(TSCH3DSharegroupToken *)token;
-(TSCH3DResourceCache *)resourceCache;
-(void)flushIfNecessary;
-(void)setOwningThread:(id)arg1 ;
@end

