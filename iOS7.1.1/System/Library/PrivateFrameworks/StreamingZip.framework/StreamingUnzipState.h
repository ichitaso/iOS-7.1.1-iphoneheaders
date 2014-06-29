/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StreamingZip/StreamingZip-Structs.h>
@class NSString, NSArray, NSDictionary, NSMutableData;

@interface StreamingUnzipState : NSObject {

	z_stream_s* _zlibState;
	unsigned long long _lastResumptionSavedOffset;
	unsigned long long _hashedChunkSize;
	unsigned long long _bytesHashedInChunk;
	unsigned long long _uncompressedBytesOutput;
	NSString* _unzipPath;
	NSArray* _hashes;
	unsigned long long _currentLFRecordAllocationSize;
	SCD_Struct_St7 _hashContext;
	NSDictionary* _streamInfoDict;
	NSString* _lastChunkPartialHash;
	NSMutableData* _unsureData;
	NSMutableData* _incompleteData;
	NSMutableData* _unfinishedCompressedData;
	SCD_Struct_St11* _currentLFRecord;
	unsigned long long _thisStageBytesComplete;
	unsigned long long _currentOffset;
	unsigned long long _outputFileOffsetAtLastBlockEnd;
	unsigned long long _recordsProcessed;
	unsigned long long _totalRecordCount;
	unsigned long long _currentCRC32;
	int _currentOutputFD;
	unsigned short _currentLFMode;
	unsigned char _streamState;
	unsigned char _lastBlockEndNumUnusedBits;
	unsigned char _lastBlockEndLastByte;
	bool _currentLFIsStreamMetadata;

}

@property (nonatomic,readonly) z_stream_s* zlibState; 
@property (nonatomic,readonly) NSString * unzipPath;                                        //@synthesize unzipPath=_unzipPath - In the implementation block
@property (nonatomic,readonly) SCD_Struct_St12 hashContext;                                 //@synthesize hashContext=_hashContext - In the implementation block
@property (nonatomic,retain) NSDictionary * streamInfoDict;                                 //@synthesize streamInfoDict=_streamInfoDict - In the implementation block
@property (nonatomic,retain) NSString * lastChunkPartialHash;                               //@synthesize lastChunkPartialHash=_lastChunkPartialHash - In the implementation block
@property (nonatomic,retain) NSMutableData * unsureData;                                    //@synthesize unsureData=_unsureData - In the implementation block
@property (nonatomic,retain) NSMutableData * incompleteData;                                //@synthesize incompleteData=_incompleteData - In the implementation block
@property (nonatomic,retain) NSMutableData * unfinishedCompressedData;                      //@synthesize unfinishedCompressedData=_unfinishedCompressedData - In the implementation block
@property (assign,nonatomic) SCD_Struct_St11* currentLFRecord;                              //@synthesize currentLFRecord=_currentLFRecord - In the implementation block
@property (assign,nonatomic) unsigned long long currentLFRecordAllocationSize;              //@synthesize currentLFRecordAllocationSize=_currentLFRecordAllocationSize - In the implementation block
@property (assign,nonatomic) unsigned long long thisStageBytesComplete;                     //@synthesize thisStageBytesComplete=_thisStageBytesComplete - In the implementation block
@property (assign,nonatomic) unsigned long long currentOffset;                              //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long hashedChunkSize;                          //@synthesize hashedChunkSize=_hashedChunkSize - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesHashedInChunk;                       //@synthesize bytesHashedInChunk=_bytesHashedInChunk - In the implementation block
@property (assign,nonatomic) unsigned long long currentCRC32;                               //@synthesize currentCRC32=_currentCRC32 - In the implementation block
@property (assign,nonatomic) int currentOutputFD;                                           //@synthesize currentOutputFD=_currentOutputFD - In the implementation block
@property (assign,nonatomic) unsigned long long recordsProcessed;                           //@synthesize recordsProcessed=_recordsProcessed - In the implementation block
@property (assign,nonatomic) unsigned long long totalRecordCount;                           //@synthesize totalRecordCount=_totalRecordCount - In the implementation block
@property (assign,nonatomic) unsigned long long uncompressedBytesOutput;                    //@synthesize uncompressedBytesOutput=_uncompressedBytesOutput - In the implementation block
@property (assign,nonatomic) unsigned short currentLFMode;                                  //@synthesize currentLFMode=_currentLFMode - In the implementation block
@property (assign,nonatomic) unsigned char streamState;                                     //@synthesize streamState=_streamState - In the implementation block
@property (assign,nonatomic) bool currentLFIsStreamMetadata;                                //@synthesize currentLFIsStreamMetadata=_currentLFIsStreamMetadata - In the implementation block
+(id)unzipStateWithPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)currentOffset;
-(id)initWithPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)setStreamState:(unsigned char)arg1 ;
-(id)unzipPath;
-(void)setCurrentOutputFD:(int)arg1 ;
-(int)currentOutputFD;
-(id)unsureData;
-(void)setCurrentOffset:(unsigned long long)arg1 ;
-(id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3 ;
-(id)serializeState;
-(unsigned char)streamState;
-(SCD_Struct_St11*)currentLFRecord;
-(unsigned long long)thisStageBytesComplete;
-(unsigned long long)hashedChunkSize;
-(unsigned long long)bytesHashedInChunk;
-(id)lastChunkPartialHash;
-(id)checkLastChunkPartialHash;
-(id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3 onlyFinishCurrentChunk:(bool)arg4 ;
-(void)markResumptionPoint;
-(unsigned long long)currentLFRecordAllocationSize;
-(void)setCurrentLFRecord:(SCD_Struct_St11*)arg1 ;
-(void)setCurrentLFRecordAllocationSize:(unsigned long long)arg1 ;
-(unsigned long long)recordsProcessed;
-(void)setCurrentLFIsStreamMetadata:(bool)arg1 ;
-(id)streamInfoDict;
-(void)setCurrentLFMode:(unsigned short)arg1 ;
-(unsigned short)currentLFMode;
-(bool)currentLFIsStreamMetadata;
-(void)setCurrentCRC32:(unsigned long long)arg1 ;
-(unsigned long long)currentCRC32;
-(id)incompleteData;
-(void)setThisStageBytesComplete:(unsigned long long)arg1 ;
-(z_stream_s*)zlibState;
-(id)unfinishedCompressedData;
-(unsigned long long)uncompressedBytesOutput;
-(void)setUncompressedBytesOutput:(unsigned long long)arg1 ;
-(void)markResumptionPointWithLastCompressedByte:(unsigned char)arg1 ;
-(void)setStreamInfoDict:(id)arg1 ;
-(void)setUnsureData:(id)arg1 ;
-(void)setTotalRecordCount:(unsigned long long)arg1 ;
-(SCD_Struct_St12)hashContext;
-(void)setLastChunkPartialHash:(id)arg1 ;
-(id)finishStream;
-(id)_checkHashForOffset:(unsigned long long)arg1 ;
-(void)clearSavedState;
-(void)_internalSetStreamState:(unsigned char)arg1 ;
-(void)setIncompleteData:(id)arg1 ;
-(void)setUnfinishedCompressedData:(id)arg1 ;
-(void)setRecordsProcessed:(unsigned long long)arg1 ;
-(unsigned long long)totalRecordCount;
@end
