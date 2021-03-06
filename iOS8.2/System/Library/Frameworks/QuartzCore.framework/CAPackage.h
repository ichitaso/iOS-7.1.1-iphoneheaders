/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer;

@interface CAPackage : NSObject {

	CAPackageData* _data;

}

@property (readonly) CALayer * rootLayer; 
@property (getter=isGeometryFlipped,readonly) char geometryFlipped; 
+(id)packageWithData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)packageWithContentsOfURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(id)_initWithContentsOfURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)_initWithData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)_readFromCAMLURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)_readFromArchiveData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)_readFromCAMLData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)substitutedClasses;
-(void)_addClassSubstitutions:(id)arg1 ;
-(id)publishedObjectNames;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2 ;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3 ;
-(void)dealloc;
-(CALayer *)rootLayer;
-(void)foreachLayer:(/*^block*/id)arg1 ;
-(char)isGeometryFlipped;
-(id)publishedObjectWithName:(id)arg1 ;
@end

