/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:09 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKCancellableRemoteOperation <NSObject>
@optional
-(void)receivedBatchResultsFromServer:(id)arg1 finished:(char)arg2;

@required
-(void)cancel;
-(void)disconnect;

@end

