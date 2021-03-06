/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKExporter.h>

@class TPDocumentRoot, TSUProgressContext, NSString;

@interface TPTextExporter : NSObject <TSKExporter> {

	TPDocumentRoot* mDocumentRoot;
	char mIsCancelled;
	TSUProgressContext* mProgressContext;

}

@property (retain) TSUProgressContext * progressContext; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(char)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(void)cancel;
-(void)dealloc;
-(char)isCancelled;
-(void)setup;
-(void)setProgressContext:(TSUProgressContext *)arg1 ;
-(TSUProgressContext *)progressContext;
-(void)quit;
@end

