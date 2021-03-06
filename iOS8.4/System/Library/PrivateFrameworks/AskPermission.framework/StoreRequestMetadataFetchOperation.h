/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/askpermissiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSData;

@interface StoreRequestMetadataFetchOperation : NSOperation {

	BOOL _isSandbox;
	NSString* _requestID;
	/*^block*/id _fetchCompletionHandler;

}

@property (readonly) NSString * requestID;                         //@synthesize requestID=_requestID - In the implementation block
@property (readonly) BOOL isSandbox;                               //@synthesize isSandbox=_isSandbox - In the implementation block
@property (copy) id fetchCompletionHandler;                        //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
@property (nonatomic,readonly) NSData * postBodyData; 
-(id)initWithRequestID:(id)arg1 isSandbox:(BOOL)arg2 ;
-(NSData *)postBodyData;
-(id)parseServerResponseData:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)isSandbox;
-(void)fetchMetadata;
-(NSString *)requestID;
-(void)main;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(id)fetchCompletionHandler;
@end

