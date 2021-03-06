/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PRCandidateList : NSObject {

	NSMutableArray* _candidates;
	unsigned long long _maxCount;

}
-(BOOL)isFull;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)candidates;
-(id)initWithMaxCount:(unsigned long long)arg1 ;
-(unsigned long long)maxCount;
-(void)addCandidateWithString:(id)arg1 errorType:(unsigned long long)arg2 ;
-(void)addCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 errorType:(unsigned long long)arg3 ;
-(void)addCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4 ;
-(id)candidateStrings;
-(void)addCandidate:(id)arg1 ;
@end

