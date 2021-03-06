/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCompatibilityDelegate.h>

@class NSString;

@interface KNBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nestedDocumentFilename;
-(Class)exporterClassForType:(id)arg1 options:(id)arg2 ;
-(char)isSageDocumentType:(id)arg1 ;
-(Class)importerClassForType:(id)arg1 ;
-(Class)exportOptionsControllerClass;
-(id)exportableTypes;
-(char)isTCMessageExceptionErrorDomain:(id)arg1 ;
-(id)indexXmlFilename;
-(id)needNewerVersionIndexXmlContentString;
-(id)backwardsCompatibleTypeForType:(id)arg1 ;
-(id)newExportableDocumentTypesForFlag:(unsigned)arg1 ;
-(Class)pdfExporterClassForOptions:(id)arg1 ;
@end

