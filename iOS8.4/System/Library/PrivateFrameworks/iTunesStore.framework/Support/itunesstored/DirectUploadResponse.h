/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSError;

@interface DirectUploadResponse : NSObject {

	NSString* _assetToken;
	NSString* _assetTokenType;
	long long _countOfBytesSent;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSString * assetToken;                  //@synthesize assetToken=_assetToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetTokenType;              //@synthesize assetTokenType=_assetTokenType - In the implementation block
@property (assign,nonatomic) long long countOfBytesSent;                    //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
-(id)initWithURLResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)assetToken;
-(NSString *)assetTokenType;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(long long)countOfBytesSent;
-(NSError *)error;
@end

