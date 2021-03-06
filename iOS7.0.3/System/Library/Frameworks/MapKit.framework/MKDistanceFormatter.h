/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter {

	NSLocale* _locale;
	unsigned _units;
	unsigned _unitStyle;

}

@property (nonatomic,copy) NSLocale * locale;                 //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) unsigned units;                  //@synthesize units=_units - In the implementation block
@property (assign,nonatomic) unsigned unitStyle;              //@synthesize unitStyle=_unitStyle - In the implementation block
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(BOOL)_useMetric;
-(id)stringFromDistance:(double)arg1 ;
-(double)distanceFromString:(id)arg1 ;
-(unsigned)unitStyle;
-(void)setUnitStyle:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setLocale:(id)arg1 ;
-(id)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(unsigned)units;
-(void)setUnits:(unsigned)arg1 ;
@end

