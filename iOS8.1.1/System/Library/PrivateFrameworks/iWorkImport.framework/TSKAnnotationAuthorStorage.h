/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSMutableSet, NSSet;

@interface TSKAnnotationAuthorStorage : TSPObject {

	NSMutableSet* mAuthors;

}

@property (nonatomic,readonly) NSSet * authors; 
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)authorWithName:(id)arg1 ;
-(id)nextAuthorColor;
-(void)removeAuthor:(id)arg1 ;
-(void)p_addAuthor:(id)arg1 isFromDocumentSupport:(BOOL)arg2 ;
-(void)didAddAuthorRelationshipToDocument;
-(void)didRemoveAuthorRelationshipFromDocument;
-(void)dealloc;
-(id)description;
-(NSSet *)authors;
-(void)addAuthor:(id)arg1 ;
@end

