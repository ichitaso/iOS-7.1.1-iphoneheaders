/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ComponentControl.h>
#import <ThermalMonitor/tGraphDataSource.h>

@interface CpuCC : ComponentControl <tGraphDataSource> {

	unsigned kDVD1Level;
	int listIDPos;
	unsigned host;
	host_cpu_load_info currCpu;
	host_cpu_load_info prevCpu;
	float powerScale;
	float timeActive;
	BOOL _useDirectMap;
	unsigned _minReachableLoadIndex;
	float _directMapSlope;
	float _directMapIntercept;

}

@property (assign,nonatomic) BOOL useDirectMap;                           //@synthesize useDirectMap=_useDirectMap - In the implementation block
@property (assign,nonatomic) unsigned minReachableLoadIndex;              //@synthesize minReachableLoadIndex=_minReachableLoadIndex - In the implementation block
@property (assign,nonatomic) float directMapSlope;                        //@synthesize directMapSlope=_directMapSlope - In the implementation block
@property (assign,nonatomic) float directMapIntercept;                    //@synthesize directMapIntercept=_directMapIntercept - In the implementation block
-(BOOL)useDirectMap;
-(float)directMapSlope;
-(float)directMapIntercept;
-(void)setMinReachableLoadIndex:(unsigned)arg1 ;
-(void)setDirectMapSlope:(float)arg1 ;
-(unsigned)minReachableLoadIndex;
-(void)setUseDirectMap:(BOOL)arg1 ;
-(void)setDirectMapIntercept:(float)arg1 ;
-(BOOL)usesPID;
-(unsigned)getUserUsage;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(CFNumberRef)copyNumericFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(void)refreshCurrentLoadingIndex;
-(id)initWithCPU:(const char*)arg1 :(int)arg2 :(CFDictionaryRef)arg3 :(float)arg4 :(int)arg5 ;
-(void)refreshCurrentLoadingIndexUsingPID;
-(void)defaultAction;
@end

