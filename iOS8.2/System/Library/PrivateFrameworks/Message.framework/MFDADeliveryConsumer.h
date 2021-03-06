/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <Message/DAMessageSendConsumer.h>

@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer> {

	MFError* _error;
	int _status;
	unsigned _bytesRead;
	unsigned _bytesWritten;

}

@property (nonatomic,retain) MFError * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) int status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned bytesRead;                 //@synthesize bytesRead=_bytesRead - In the implementation block
@property (nonatomic,readonly) unsigned bytesWritten;              //@synthesize bytesWritten=_bytesWritten - In the implementation block
-(void)dealloc;
-(int)status;
-(unsigned)bytesWritten;
-(void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)messageDidSendWithContext:(id)arg1 sentBytesCount:(unsigned)arg2 receivedBytesCount:(unsigned)arg3 ;
-(unsigned)bytesRead;
-(void)setError:(MFError *)arg1 ;
-(MFError *)error;
@end

