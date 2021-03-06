/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class NSString, NSURL, NSDate;

@interface TDNamedAssetImportInfo : NSObject {

	NSString* _name;
	long long _nameIdentifier;
	NSURL* _fileURL;
	NSDate* _modificationDate;
	long long _idiom;
	long long _subtype;
	unsigned long long _scaleFactor;
	long long _renditionType;
	long long _resizingMode;
	CGSize _resizableSliceSize;
	TDNamedAssetImportEdgeInsets _sliceInsets;

}

@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long nameIdentifier;                              //@synthesize nameIdentifier=_nameIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                               //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) long long idiom;                                       //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic) long long subtype;                                     //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned long long scaleFactor;                        //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) TDNamedAssetImportEdgeInsets sliceInsets;              //@synthesize sliceInsets=_sliceInsets - In the implementation block
@property (assign,nonatomic) long long renditionType;                               //@synthesize renditionType=_renditionType - In the implementation block
@property (assign,nonatomic) long long resizingMode;                                //@synthesize resizingMode=_resizingMode - In the implementation block
@property (assign,nonatomic) CGSize resizableSliceSize;                             //@synthesize resizableSliceSize=_resizableSliceSize - In the implementation block
-(void)dealloc;
-(long long)subtype;
-(long long)resizingMode;
-(void)setSubtype:(long long)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(long long)idiom;
-(unsigned long long)scaleFactor;
-(void)setIdiom:(long long)arg1 ;
-(id)fileURL;
-(void)setRenditionType:(long long)arg1 ;
-(long long)renditionSubtype;
-(long long)nameIdentifier;
-(void)setNameIdentifier:(long long)arg1 ;
-(TDNamedAssetImportEdgeInsets)sliceInsets;
-(CGSize)resizableSliceSize;
-(void)setSliceInsets:(TDNamedAssetImportEdgeInsets)arg1 ;
-(void)setResizingMode:(long long)arg1 ;
-(void)setResizableSliceSize:(CGSize)arg1 ;
-(void)setScaleFactor:(unsigned long long)arg1 ;
-(long long)renditionType;
-(void)setModificationDate:(id)arg1 ;
-(id)modificationDate;
-(void)setFileURL:(id)arg1 ;
@end

