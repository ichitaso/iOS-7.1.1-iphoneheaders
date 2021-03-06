/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCOperation.h>
#import <CloudDocsDaemon/BRCOperationSubclass.h>

@class BRCOperationMultiplexer, BRCBatch, NSString;

@interface BRCMultiplexableOperation : BRCOperation <BRCOperationSubclass> {

	BRCOperationMultiplexer* _multiplexer;
	char _autoRetry;
	char _hasSentCompletion;
	/*^block*/id _progressBlock;
	BRCBatch* _batch;
	unsigned long long _size;
	double _progress;

}

@property (nonatomic,copy) id progressBlock;                        //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) char autoRetry;                        //@synthesize autoRetry=_autoRetry - In the implementation block
@property (nonatomic,retain) BRCBatch * batch;                      //@synthesize batch=_batch - In the implementation block
@property (assign,nonatomic) char hasSentCompletion;                //@synthesize hasSentCompletion=_hasSentCompletion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(unsigned long long)size;
-(NSString *)description;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(char)shouldRetryForError:(id)arg1 ;
-(char)autoRetry;
-(id)initWithName:(id)arg1 multiplexer:(id)arg2 ;
-(void)setAutoRetry:(char)arg1 ;
-(char)hasSentCompletion;
-(void)setHasSentCompletion:(char)arg1 ;
-(BRCBatch *)batch;
-(id)progressBlock;
-(void)setBatch:(BRCBatch *)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
@end

