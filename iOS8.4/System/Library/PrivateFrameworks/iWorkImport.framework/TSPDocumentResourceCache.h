/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface TSPDocumentResourceCache : NSObject {

	NSURL* _cacheURL;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _entries;
	long long _maxCacheSizeInBytes;

}

@property (assign,nonatomic) long long maxCacheSizeInBytes;              //@synthesize maxCacheSizeInBytes=_maxCacheSizeInBytes - In the implementation block
+(id)defaultCacheURL;
+(id)sharedCache;
-(BOOL)cacheDocumentResourceDigestString:(id)arg1 extension:(id)arg2 sourceURL:(id)arg3 fileSize:(long long)arg4 wasDownloaded:(BOOL)arg5 ;
-(id)initWithCacheURL:(id)arg1 ;
-(void)reloadEntries;
-(id)entryForDigestString:(id)arg1 ;
-(void)shrinkCacheWithMaxCacheSizeInBytes:(long long)arg1 ;
-(void)enumerateEntriesFromCacheURLWithHandler:(/*^block*/id)arg1 ;
-(id)URLForDocumentResourceDigestString:(id)arg1 ;
-(BOOL)beginDocumentResourceAccessForDigestString:(id)arg1 ;
-(void)endDocumentResourceAccessForDigestString:(id)arg1 ;
-(void)shrinkCache;
-(long long)maxCacheSizeInBytes;
-(void)setMaxCacheSizeInBytes:(long long)arg1 ;
-(id)init;
-(void)clearCache;
@end

