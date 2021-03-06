/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <itunesstored/itunesstored-Structs.h>
@interface ISFairPlaySAPSession : NSObject {

	char _complete;
	FairPlayHWInfo_ _hardwareInfo;
	FPSAPContextOpaque_Ref _session;

}

@property (getter=isComplete,nonatomic,readonly) char complete;              //@synthesize complete=_complete - In the implementation block
-(char)isComplete;
-(void)dealloc;
-(id)init;
-(id)signatureForData:(id)arg1 error:(id*)arg2 ;
-(char)processSignedData:(id)arg1 withSignature:(id)arg2 error:(id*)arg3 ;
-(id)signatureStringForData:(id)arg1 error:(id*)arg2 ;
-(char)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(void)_teardownSession;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
@end

