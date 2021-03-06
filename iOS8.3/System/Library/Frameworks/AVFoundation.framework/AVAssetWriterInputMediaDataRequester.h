/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:31:28 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVAssetWriterInputMediaDataRequesterDelegate;
@class NSObject;

@interface AVAssetWriterInputMediaDataRequester : NSObject {

	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _requestBlock;
	id<AVAssetWriterInputMediaDataRequesterDelegate> _delegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue;                  //@synthesize requestQueue=_requestQueue - In the implementation block
@property (assign) id<AVAssetWriterInputMediaDataRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithRequestQueue:(id)arg1 requestBlock:(/*^block*/id)arg2 ;
-(void)requestMediaDataIfNecessary;
-(void)_collectUncollectables_invokedFromDeallocAndFinalize;
-(void)dealloc;
-(void)setDelegate:(id<AVAssetWriterInputMediaDataRequesterDelegate>)arg1 ;
-(id)init;
-(id<AVAssetWriterInputMediaDataRequesterDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)finalize;
@end

