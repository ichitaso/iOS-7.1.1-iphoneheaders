/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLHealthKitAgent : PLAgent {

	PLXPCListenerOperatorComposition* _queryHandler;

}

@property (retain) PLXPCListenerOperatorComposition * queryHandler;              //@synthesize queryHandler=_queryHandler - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
-(void)initOperatorDependancies;
-(PLXPCListenerOperatorComposition *)queryHandler;
-(void)setQueryHandler:(PLXPCListenerOperatorComposition *)arg1 ;
@end

