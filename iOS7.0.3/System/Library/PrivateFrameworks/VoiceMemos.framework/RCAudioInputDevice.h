/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCCaptureAudioFileOutputRecordingDelegate.h>

@class AVCaptureSession, AVCaptureConnection, RCCaptureAudioFileOutput, MPAudioDeviceController, NSString, RCSavedRecording, NSMutableArray, RCAudioInputWaveformDataSource, NSDate;

@interface RCAudioInputDevice : NSObject <RCCaptureAudioFileOutputRecordingDelegate> {

	AVCaptureSession* _captureSession;
	AVCaptureConnection* _captureConnection;
	RCCaptureAudioFileOutput* _captureAudioOutput;
	MPAudioDeviceController* _audioDeviceController;
	NSString* _pickedRouteName;
	RCSavedRecording* _activeRecording;
	unsigned _backgroundTaskIdentifier;
	NSMutableArray* _prepareFinishedCompletionBlocks;
	int _prepareToRecordState;
	BOOL _audioInputAvailable;
	BOOL _lastRecordingDidStop;
	BOOL _recordingSampleBuffers;
	BOOL _waitingForCaptureSessionDidStart;
	BOOL _sessionFailedToStart;
	BOOL _handlingRecordingDidFinishCapturing;
	BOOL _isInterrupted;
	/*^block*/ id _sampleBufferHandlerBlock;
	RCAudioInputWaveformDataSource* _activeWaveformDataSource;
	NSDate* _recordingStartDate;

}

@property (nonatomic,copy) id sampleBufferHandlerBlock;                                                //@synthesize sampleBufferHandlerBlock=_sampleBufferHandlerBlock - In the implementation block
@property (nonatomic,readonly) RCAudioInputWaveformDataSource * activeWaveformDataSource;              //@synthesize activeWaveformDataSource=_activeWaveformDataSource - In the implementation block
@property (nonatomic,readonly) RCSavedRecording * activeRecording;                                     //@synthesize activeRecording=_activeRecording - In the implementation block
@property (nonatomic,readonly) BOOL audioInputAvailable;                                               //@synthesize audioInputAvailable=_audioInputAvailable - In the implementation block
@property (nonatomic,readonly) BOOL isRecording; 
@property (nonatomic,readonly) BOOL isPaused; 
@property (nonatomic,readonly) BOOL isInterrupted;                                                     //@synthesize isInterrupted=_isInterrupted - In the implementation block
@property (nonatomic,readonly) BOOL isIdle; 
@property (nonatomic,retain) NSDate * recordingStartDate;                                              //@synthesize recordingStartDate=_recordingStartDate - In the implementation block
@property (nonatomic,readonly) double elapsedRecordingTime; 
@property (nonatomic,readonly) BOOL shouldSuspend; 
+(id)sharedInputDevice;
-(BOOL)isInterrupted;
-(BOOL)isRecording;
-(void)pauseRecording;
-(void)resumeRecording;
-(BOOL)isPaused;
-(void)audioDeviceControllerAudioRoutesChanged:(id)arg1 ;
-(BOOL)isIdle;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)_applicationWillTerminate:(id)arg1 ;
-(void)captureOutput:(id)arg1 didPauseRecordingToOutputFileAtURL:(id)arg2 ;
-(void)captureOutput:(id)arg1 didResumeRecordingToOutputFileAtURL:(id)arg2 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)endRecording;
-(id)activeWaveformDataSource;
-(void)beginRecordingWithCustomRecordingLabel:(id)arg1 prepareFinishedCompletionBlock:(/*^block*/ id)arg2 ;
-(id)activeRecording;
-(void)setSampleBufferHandlerBlock:(/*^block*/ id)arg1 ;
-(BOOL)audioInputAvailable;
-(void)_availableModesDidChange:(id)arg1 ;
-(void)_unregisterForCatpureSessionNotifications;
-(BOOL)isPreparing;
-(BOOL)_openCaptureSessionAndWaitUntilRunning;
-(void)_beginRecordingWithIntermediateRecordingURL:(id)arg1 ;
-(void)_setPostPrepareRequestedState:(int)arg1 ;
-(/*^block*/ id)sampleBufferHandlerBlock;
-(void)_setDisableSBMediaHUD:(BOOL)arg1 ;
-(void)_handleRecordingDidFinishCapturingWithError:(id)arg1 ;
-(void)_closeCaptureSession;
-(void)_updateAudioInputAvailable;
-(void)_sessionDidStartRunning:(id)arg1 ;
-(void)_sessionDidStopRunning:(id)arg1 ;
-(void)_interruptionDidBegin:(id)arg1 ;
-(void)_sessionErrored:(id)arg1 ;
-(void)_onMainQueueHandleRecordingDidFinishCapturingAfterCompletionSound;
-(void)_registerForCatpureSessionNotifications;
-(BOOL)_attachCaptureSessionDeviceInput;
-(double)elapsedRecordingTime;
-(BOOL)shouldSuspend;
-(id)recordingStartDate;
-(void)setRecordingStartDate:(id)arg1 ;
-(void).cxx_destruct;
@end

