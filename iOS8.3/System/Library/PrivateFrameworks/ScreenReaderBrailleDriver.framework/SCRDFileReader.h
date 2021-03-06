/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:26:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCRDFileReaderDelegate;
@class NSThread, NSFileHandle;

@interface SCRDFileReader : NSObject {

	id<SCRDFileReaderDelegate> _delegate;
	NSThread* _readerThread;
	NSFileHandle* _fileHandle;
	int _threadStartCount;

}
-(char)hasStarted;
-(void)dealloc;
-(void)invalidate;
-(char)isValid;
-(void)start;
-(void)_readHandler:(id)arg1 ;
-(void)invalidateWithWait:(char)arg1 ;
-(id)initWithDelegate:(id)arg1 fileHandle:(id)arg2 ;
@end

