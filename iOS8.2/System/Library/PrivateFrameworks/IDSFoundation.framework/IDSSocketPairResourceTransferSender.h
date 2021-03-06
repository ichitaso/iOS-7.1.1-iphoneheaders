/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString, NSDictionary;

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage {

	NSString* _resourcePath;
	NSDictionary* _metadata;
	NSDictionary* _resourceAttributes;
	char _sentFirstMessage;
	unsigned long long _totalBytes;
	unsigned long long _nextByte;
	char _done;
	int _fileDescriptor;
	unsigned _maxChunkSize;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	char _expectsPeerResponse;
	char _wantsAppAck;
	char _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;

}

@property (nonatomic,readonly) char sentFirstMessage;                      //@synthesize sentFirstMessage=_sentFirstMessage - In the implementation block
@property (nonatomic,readonly) char isDone;                                //@synthesize done=_done - In the implementation block
@property (assign,nonatomic) unsigned maxChunkSize;                        //@synthesize maxChunkSize=_maxChunkSize - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                      //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain,readonly) NSString * messageUUID;              //@synthesize messageUUID=_messageUUID - In the implementation block
-(unsigned char)command;
-(void)dealloc;
-(id)description;
-(void)reset;
-(id)nextMessage;
-(char)isDone;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(NSString *)messageUUID;
-(id)readNextBytes;
-(id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(char)arg5 wantsAppAck:(char)arg6 compressed:(char)arg7 peerResponseIdentifier:(id)arg8 messageUUID:(id)arg9 ;
-(char)sentFirstMessage;
-(unsigned)maxChunkSize;
-(void)setMaxChunkSize:(unsigned)arg1 ;
@end

