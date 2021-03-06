/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:40:44 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/Support/fileproviderd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSOperationQueue, NSString;


@protocol NSFileProvider <NSObject>
@property (copy,readonly) NSURL * _providedItemsURL; 
@property (readonly) NSOperationQueue * _providedItemsOperationQueue; 
@property (copy,readonly) NSString * _fileReactorID; 
@optional
-(NSString *)_fileReactorID;
-(id)_physicalURLForURL:(id)arg1;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
-(void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
-(void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
-(void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;
-(void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;

@required
-(void)_provideItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSURL *)_providedItemsURL;
-(NSOperationQueue *)_providedItemsOperationQueue;

@end

