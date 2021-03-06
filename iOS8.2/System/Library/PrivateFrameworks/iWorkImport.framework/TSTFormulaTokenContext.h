/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSTExpressionNode;

@interface TSTFormulaTokenContext : NSObject {

	TSTExpressionNode* mExpressionNode;
	unsigned mParenNestingLevel;
	unsigned mArgumentIndex;

}

@property (nonatomic,readonly) TSTExpressionNode * expressionNode; 
@property (nonatomic,readonly) unsigned parenNestingLevel; 
@property (nonatomic,readonly) unsigned argumentIndex; 
+(id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned)arg2 ;
+(id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned)arg2 argumentIndex:(unsigned)arg3 ;
-(TSTExpressionNode *)expressionNode;
-(id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned)arg2 argumentIndex:(unsigned)arg3 ;
-(id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned)arg2 ;
-(unsigned)parenNestingLevel;
-(unsigned)argumentIndex;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)debugDescription;
@end

