/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPStorage;

@interface TSWPStorageStyler : NSObject {

	TSWPStorage* _storage;
	int _attributeArrayKind;

}

@property (nonatomic,retain,readonly) TSWPStorage * storage;              //@synthesize storage=_storage - In the implementation block
-(id)replacementStyleForStyle:(id)arg1 range:(NSRange)arg2 ;
-(void)applyStyle:(id)arg1 range:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(id)initWithStorage:(id)arg1 attributeArrayKind:(int)arg2 ;
-(void)performStylingInRange:(NSRange)arg1 undoTransaction:(TSWPStorageTransactionRef)arg2 ;
-(TSWPStorage *)storage;
@end

