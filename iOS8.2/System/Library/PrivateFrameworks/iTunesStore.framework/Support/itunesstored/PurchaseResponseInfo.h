/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, ISDialog;

@interface PurchaseResponseInfo : NSObject {

	NSString* _changedBuyParameters;
	ISDialog* _dialog;
	char _didPasswordAuthenticate;
	int _machineDataRetryCount;
	NSString* _machineDataSyncState;
	char _shouldRetryForMachineData;

}

@property (nonatomic,retain) NSString * changedBuyParameters;              //@synthesize changedBuyParameters=_changedBuyParameters - In the implementation block
@property (nonatomic,retain) ISDialog * dialog;                            //@synthesize dialog=_dialog - In the implementation block
@property (assign,nonatomic) char didPasswordAuthenticate;                 //@synthesize didPasswordAuthenticate=_didPasswordAuthenticate - In the implementation block
@property (assign,nonatomic) int machineDataRetryCount;                    //@synthesize machineDataRetryCount=_machineDataRetryCount - In the implementation block
@property (nonatomic,copy) NSString * machineDataSyncState;                //@synthesize machineDataSyncState=_machineDataSyncState - In the implementation block
@property (assign,nonatomic) char shouldRetryForMachineData;               //@synthesize shouldRetryForMachineData=_shouldRetryForMachineData - In the implementation block
-(NSString *)changedBuyParameters;
-(NSString *)machineDataSyncState;
-(char)shouldRetryForMachineData;
-(int)machineDataRetryCount;
-(void)setMachineDataRetryCount:(int)arg1 ;
-(char)didPasswordAuthenticate;
-(void)setDidPasswordAuthenticate:(char)arg1 ;
-(void)setMachineDataSyncState:(NSString *)arg1 ;
-(void)setShouldRetryForMachineData:(char)arg1 ;
-(void)setChangedBuyParameters:(NSString *)arg1 ;
-(void)dealloc;
-(void)reset;
-(ISDialog *)dialog;
-(void)setDialog:(ISDialog *)arg1 ;
@end

