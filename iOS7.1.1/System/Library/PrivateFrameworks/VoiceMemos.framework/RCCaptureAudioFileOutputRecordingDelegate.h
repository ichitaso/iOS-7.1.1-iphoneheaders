/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RCCaptureAudioFileOutputRecordingDelegate <NSObject>
@required
-(void)captureOutput:(id)arg1 didPauseRecordingToOutputFileAtURL:(id)arg2;
-(void)captureOutput:(id)arg1 didResumeRecordingToOutputFileAtURL:(id)arg2;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 error:(id)arg3;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2;
-(void)captureOutput:(id)arg1 captureSessionDidTerminateWithError:(id)arg2;
@end
