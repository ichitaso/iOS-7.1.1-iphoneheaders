/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject {

	AVAssetResourceLoadingDataRequestInternal* _dataRequest;

}

@property (nonatomic,readonly) long long requestedOffset; 
@property (nonatomic,readonly) long long requestedLength; 
@property (nonatomic,readonly) long long currentOffset; 
-(id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 canSupplyIncrementalDataImmediately:(BOOL)arg4 ;
-(id)_loadingRequest;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)finalize;
-(long long)requestedLength;
-(long long)currentOffset;
-(long long)requestedOffset;
-(void)respondWithData:(id)arg1 ;
@end

