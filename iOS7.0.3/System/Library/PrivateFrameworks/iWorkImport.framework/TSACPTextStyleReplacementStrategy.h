/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSACommandGatheringVisitor_TextStyleReplacementStrategy.h>

@class TSAChangePropagationVisitor, TSWPStorage, TSSStyle;

@interface TSACPTextStyleReplacementStrategy : NSObject <TSACommandGatheringVisitor_TextStyleReplacementStrategy> {

	TSAChangePropagationVisitor* mChangePropagationVisitor;
	TSWPStorage* mStorage;
	BOOL mForLockedObject;
	TSSStyle* _shapeStyle;

}

@property (nonatomic,readonly) TSAChangePropagationVisitor * changePropagationVisitor; 
@property (nonatomic,readonly) TSWPStorage * storage; 
@property (nonatomic,readonly) TSSStyle * shapeStyle;                                               //@synthesize shapeStyle=_shapeStyle - In the implementation block
@property (nonatomic,readonly) BOOL forLockedObject; 
-(id)storage;
-(void)getReplacementStylesForParagraphStyle:(id)arg1 listStyle:(id)arg2 parIndex:(unsigned)arg3 replacementParagraphStyle:(id*)arg4 replacementListStyle:(id*)arg5 ;
-(id)initWithChangePropagationVisitor:(id)arg1 storage:(id)arg2 forLockedObject:(BOOL)arg3 ;
-(id)changePropagationVisitor;
-(void)populateStyleReplacements:(id)arg1 forParagraphStyle:(id)arg2 listStyle:(id)arg3 parIndex:(unsigned)arg4 ;
-(BOOL)forLockedObject;
-(void)dealloc;
-(id)shapeStyle;
@end

