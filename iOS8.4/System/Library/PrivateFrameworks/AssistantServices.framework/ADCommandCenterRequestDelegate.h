/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ADCommandCenterRequestDelegate <NSObject>
@required
-(void)adRequestDidFinish;
-(void)adRequestDidFailWithError:(id)arg1 requestClass:(id)arg2;
-(void)adAceConnectionWillRetryOnError:(id)arg1;
-(void)adRequestRequestedDismissAssistant;
-(void)adRequestDidReceiveCommand:(id)arg1 reply:(/*^block*/id)arg2;

@end

