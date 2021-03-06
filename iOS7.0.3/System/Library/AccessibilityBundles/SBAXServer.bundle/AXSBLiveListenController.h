/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/SBAXServer.bundle/SBAXServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <SBAXServer/SBAXServer-Structs.h>
@interface AXSBLiveListenController : NSObject {

	BOOL isListening;
	BOOL _didInitializeAudioUnit;
	OpaqueAudioComponentInstanceRef rioUnit;
	OpaqueAudioComponentInstanceRef mixerUnit;

}

@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef rioUnit; 
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef mixerUnit; 
@property (assign,nonatomic) BOOL isListening; 
@property (assign,nonatomic) BOOL didInitializeAudioUnit;                              //@synthesize didInitializeAudioUnit=_didInitializeAudioUnit - In the implementation block
-(void)audioSessionWasInterrupted:(id)arg1 ;
-(void)mediaServicesWereReset:(id)arg1 ;
-(BOOL)stopListeningWithError:(id*)arg1 ;
-(BOOL)startListeningWithError:(id*)arg1 ;
-(BOOL)didInitializeAudioUnit;
-(void)setDidInitializeAudioUnit:(BOOL)arg1 ;
-(void)setIsListening:(BOOL)arg1 ;
-(BOOL)isListening;
-(OpaqueAudioComponentInstanceRef)rioUnit;
-(OpaqueAudioComponentInstanceRef)mixerUnit;
-(void)dealloc;
-(id)init;
-(float)audioLevel;
@end

