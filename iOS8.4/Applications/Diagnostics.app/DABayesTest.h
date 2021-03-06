/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSMutableDictionary;

@interface DABayesTest : NSObject {

	unsigned _inputCount;
	unsigned _outputCount;
	NSDictionary* _failureModes;
	NSArray* _failKeys;
	NSDictionary* _initialDistribution;
	NSArray* _testCase;
	NSDictionary* _probabilityData;
	NSMutableDictionary* _additionalResults;
	NSDictionary* _possibilities;

}

@property (assign) unsigned inputCount;                                  //@synthesize inputCount=_inputCount - In the implementation block
@property (assign) unsigned outputCount;                                 //@synthesize outputCount=_outputCount - In the implementation block
@property (retain) NSDictionary * failureModes;                          //@synthesize failureModes=_failureModes - In the implementation block
@property (retain) NSArray * failKeys;                                   //@synthesize failKeys=_failKeys - In the implementation block
@property (retain) NSDictionary * initialDistribution;                   //@synthesize initialDistribution=_initialDistribution - In the implementation block
@property (retain) NSArray * testCase;                                   //@synthesize testCase=_testCase - In the implementation block
@property (retain) NSDictionary * probabilityData;                       //@synthesize probabilityData=_probabilityData - In the implementation block
@property (retain) NSMutableDictionary * additionalResults;              //@synthesize additionalResults=_additionalResults - In the implementation block
@property (retain) NSDictionary * possibilities;                         //@synthesize possibilities=_possibilities - In the implementation block
-(void)setOutputCount:(unsigned)arg1 ;
-(void)setFailureModes:(NSDictionary *)arg1 ;
-(void)setFailKeys:(NSArray *)arg1 ;
-(void)setInitialDistribution:(NSDictionary *)arg1 ;
-(void)setAdditionalResults:(NSMutableDictionary *)arg1 ;
-(void)setTestCase:(NSArray *)arg1 ;
-(void)setProbabilityData:(NSDictionary *)arg1 ;
-(void)constructPossibilities;
-(void)observeValues;
-(id)evaluateResults;
-(NSArray *)failKeys;
-(NSDictionary *)initialDistribution;
-(void)setPossibilities:(NSDictionary *)arg1 ;
-(NSArray *)testCase;
-(void)observeDBResult:(id)arg1 ;
-(id)mostLikely;
-(NSDictionary *)failureModes;
-(NSMutableDictionary *)additionalResults;
-(NSDictionary *)possibilities;
-(NSDictionary *)probabilityData;
-(id)initWithInputCount:(unsigned)arg1 outputCount:(unsigned)arg2 failureModes:(id)arg3 initialDistribution:(id)arg4 ;
-(id)runBayesTestWithTestCase:(id)arg1 probabilityData:(id)arg2 ;
-(void)setInputCount:(unsigned)arg1 ;
-(unsigned)outputCount;
-(unsigned)inputCount;
@end

