/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>
#import <MIME/MFCollectingDataConsumer.h>

@class MFBufferedDataConsumer, NSData;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer> {

	MFBufferedDataConsumer* _consumer;
	NSData* _rawData;
	unsigned long _count;
	BOOL _lastNewLine;

}
-(void)dealloc;
-(unsigned long)count;
-(id)init;
-(id)data;
-(id)rawData;
-(void)done;
-(int)appendData:(id)arg1 ;
-(BOOL)isLastCharacterNewLine;
@end

