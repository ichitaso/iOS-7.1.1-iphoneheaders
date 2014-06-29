/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLDownloadDelegate <NSObject>
@optional
-(void)download:(id)arg1 didFailWithError:(id)arg2;
-(void)downloadDidBegin:(id)arg1;
-(id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(bool)downloadShouldUseCredentialStorage:(id)arg1;
-(void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)download:(id)arg1 didReceiveResponse:(id)arg2;
-(void)download:(id)arg1 willResumeWithResponse:(id)arg2 fromByte:(long long)arg3;
-(void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
-(bool)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
-(void)download:(id)arg1 didCreateDestination:(id)arg2;
-(void)downloadDidFinish:(id)arg1;
-(bool)download:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
@end
