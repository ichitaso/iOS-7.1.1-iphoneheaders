/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDPath, GQDWPLayoutFrame, NSString;

@interface GQDShape : GQDGraphic <GQDNameMappable> {

	GQDPath* mPath;
	GQDWPLayoutFrame* mLayoutFrame;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(CGPathRef)createBezierPath;
-(id)layoutFrame;
-(char)isRectangularAndAxisAlignedToAngle:(float)arg1 ;
-(id)initWithGraphic:(id)arg1 path:(id)arg2 geometry:(id)arg3 ;
-(void)dealloc;
-(id)path;
-(char)isBlank;
@end

