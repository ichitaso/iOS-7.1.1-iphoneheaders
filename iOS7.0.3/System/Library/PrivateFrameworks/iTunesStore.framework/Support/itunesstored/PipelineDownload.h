/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/Download.h>
#import <CoreFoundation/NSCopying.h>

@class SSOperationProgress, NSArray, NSNumber, NSString, DownloadStep;

@interface PipelineDownload : Download <NSCopying> {

	int _currentStepIndex;
	SSOperationProgress* _downloadProgress;
	NSArray* _downloadSteps;
	BOOL _requiresDownloadHandler;
	NSNumber* _orderSeed;

}

@property (nonatomic,readonly) int automaticType; 
@property (assign,nonatomic) int blockedReason; 
@property (nonatomic,readonly) NSString * clientIdentifier; 
@property (nonatomic,readonly) NSString * downloadKind; 
@property (nonatomic,retain) NSString * downloadPhase; 
@property (nonatomic,readonly) NSNumber * effectiveClientIdentifier; 
@property (assign,nonatomic) long long handlerIdentifier; 
@property (nonatomic,readonly) BOOL hasRestoreData; 
@property (getter=isRestoreDownload,nonatomic,readonly) BOOL restoreDownload; 
@property (getter=isStoreDownload,nonatomic,readonly) BOOL storeDownload; 
@property (nonatomic,retain) NSNumber * orderKey; 
@property (nonatomic,retain) NSNumber * orderSeed;                                         //@synthesize orderSeed=_orderSeed - In the implementation block
@property (assign,nonatomic) long long policyIdentifier; 
@property (assign,nonatomic) int priority; 
@property (nonatomic,readonly) long long restoreDataSize; 
@property (nonatomic,readonly) int restoreState; 
@property (nonatomic,readonly) BOOL shouldSuppressErrorDialogs; 
@property (nonatomic,readonly) NSString * title; 
@property (assign,nonatomic) long long downloadSize; 
@property (assign,nonatomic) long long policySizeLimit; 
@property (assign,nonatomic) BOOL requiresDownloadHandler;                                 //@synthesize requiresDownloadHandler=_requiresDownloadHandler - In the implementation block
@property (nonatomic,readonly) int URLBagType; 
@property (nonatomic,readonly) BOOL canAddToPipeline; 
@property (nonatomic,readonly) BOOL canHandleAllDownloadSteps; 
@property (nonatomic,readonly) DownloadStep * nextDownloadStep; 
@property (nonatomic,readonly) SSOperationProgress * downloadProgress; 
+(id)defaultProperties;
-(id)orderKey;
-(id)setDownloadProgress:(id)arg1 forDownloadStep:(id)arg2 ;
-(void)setHandlerIdentifier:(long long)arg1 ;
-(id)anyAssetForAssetType:(id)arg1 ;
-(id)effectiveClientIdentifier;
-(BOOL)hasRestoreData;
-(long long)restoreDataSize;
-(id)assetForAssetIdentifier:(long long)arg1 ;
-(BOOL)canHandleAllDownloadSteps;
-(id)_downloadSteps;
-(id)_newDownloadSteps;
-(void)_reloadDownloadSize;
-(BOOL)_booleanValueForProperty:(id)arg1 defaultValue:(BOOL)arg2 ;
-(int)automaticType;
-(int)blockedReason;
-(BOOL)_doesAnyMediaAssetSupportStreamUnzipping;
-(BOOL)isStoreDownload;
-(BOOL)canAddToPipeline;
-(id)nextDownloadStep;
-(void)noteDownloadStepDidFinish:(id)arg1 withResults:(id)arg2 ;
-(id)orderSeed;
-(long long)policyIdentifier;
-(long long)policySizeLimit;
-(BOOL)requiresDownloadHandler;
-(void)resetDownloadSteps;
-(void)setBlockedReason:(int)arg1 ;
-(void)setOrderKey:(id)arg1 ;
-(void)setPolicyIdentifier:(long long)arg1 ;
-(void)setPolicySizeLimit:(long long)arg1 ;
-(BOOL)shouldSuppressErrorDialogs;
-(void)setOrderSeed:(id)arg1 ;
-(void)setRequiresDownloadHandler:(BOOL)arg1 ;
-(id)downloadProgress;
-(BOOL)isRestoreDownload;
-(long long)downloadSize;
-(id)downloadPhase;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void)setAssets:(id)arg1 ;
-(void)setDownloadSize:(long long)arg1 ;
-(void)setDownloadPhase:(id)arg1 ;
-(long long)handlerIdentifier;
-(id)downloadKind;
-(id)clientIdentifier;
-(int)URLBagType;
-(void)setURLBagType:(int)arg1 ;
-(int)restoreState;
@end

