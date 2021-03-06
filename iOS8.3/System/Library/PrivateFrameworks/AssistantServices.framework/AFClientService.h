/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:46:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFClientService <NSObject>
@required
-(oneway void)endSession;
-(oneway void)cancelSpeech;
-(oneway void)stopSpeechWithOptions:(id)arg1;
-(oneway void)requestStateUpdateWithReply:(/*^block*/id)arg1;
-(oneway void)setVoiceOverIsActive:(char)arg1;
-(oneway void)recordFailureMetricsForError:(id)arg1;
-(oneway void)forceAudioSessionActive;
-(oneway void)setLockState:(char)arg1 showingLockScreen:(char)arg2;
-(oneway void)setIsStark:(char)arg1;
-(oneway void)sendAssistantRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)startDirectActionRequest:(id)arg1;
-(oneway void)startContinuationRequestWithUserInfo:(id)arg1;
-(oneway void)startSpeechRequestWithOptions:(id)arg1;
-(oneway void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
-(oneway void)startAcousticIDRequestWithOptions:(id)arg1 context:(id)arg2;
-(oneway void)updateSpeechOptions:(id)arg1;
-(oneway void)recordMetrics:(id)arg1;
-(oneway void)rollbackClearContext;
-(oneway void)startSpeechCorrectionWithText:(id)arg1 forCorrectionContext:(id)arg2;
-(oneway void)performGenericAceCommand:(id)arg1 interruptOutstandingRequest:(char)arg2 reply:(/*^block*/id)arg3;
-(oneway void)setApplicationContextForApplicationInfos:(id)arg1;
-(oneway void)setOverriddenApplicationContext:(id)arg1 withSMSContext:(id)arg2;
-(oneway void)setAlertContextDirty;
-(oneway void)prepareForPhoneCall;
-(oneway void)telephonyRequestCompleted;
-(oneway void)markUsefulUserResultPresentationTimestamp:(double)arg1;
-(oneway void)_startSpeechWithURL:(id)arg1 isNarrowBand:(char)arg2;
-(oneway void)_barrierWithReply:(/*^block*/id)arg1;
-(oneway void)_clearAssistantInfoForAccountIdentifier:(id)arg1;
-(oneway void)_listInstalledServicesWithReply:(/*^block*/id)arg1;
-(oneway void)_pingServiceForIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)_sendLargeData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)_performCommandDictionary:(id)arg1 forBundleIdentifier:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)_performTaskCommandDictionary:(id)arg1 forBundleIdentifier:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)_broadcastCommandDictionary:(id)arg1;
-(oneway void)_fetchAppContextWithReply:(/*^block*/id)arg1;
-(oneway void)_refreshAssistantValidation;
-(oneway void)cancelRequest;
-(oneway void)setApplicationContext:(id)arg1;
-(oneway void)clearContext;
-(oneway void)rollbackRequest;

@end

