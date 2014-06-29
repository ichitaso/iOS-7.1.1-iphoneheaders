/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStroke.h>

@class TSUColor, TSDStrokePattern;

@interface TSDMutableStroke : TSDStroke

@property (assign,nonatomic,@dynamic) bool dontClearBackground; 
@property (nonatomic,@dynamic,retain) TSUColor * color; 
@property (assign,nonatomic,@dynamic) double width; 
@property (assign,nonatomic,@dynamic) double actualWidth; 
@property (assign,nonatomic,@dynamic) int cap; 
@property (assign,nonatomic,@dynamic) int join; 
@property (assign,nonatomic,@dynamic) double miterLimit; 
@property (nonatomic,@dynamic,retain) TSDStrokePattern * pattern; 
+(id)emptyStroke;
+(id)stroke;
-(void)setDontClearBackground:(bool)arg1 ;
-(void)setPropertiesFromStroke:(id)arg1 ;
-(void)setPatternPropertiesFromStroke:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
@end
