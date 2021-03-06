/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/MKAnnotation.h>

@class CLLocation, NSString;

@interface MNDebugLocationAnnotation : NSObject <MKAnnotation> {

	CLLocation* _location;
	int _locationType;
	int _navType;

}

@property (nonatomic,retain) CLLocation * location;                   //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int locationType;                        //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) int navType;                             //@synthesize navType=_navType - In the implementation block
@property (assign,nonatomic) SCD_Struct_Si13 coordinate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
-(void)setNavType:(int)arg1 ;
-(int)navType;
-(id)location;
-(void).cxx_destruct;
-(SCD_Struct_Si13)coordinate;
-(void)setCoordinate:(SCD_Struct_Si13)arg1 ;
-(void)setLocationType:(int)arg1 ;
-(int)locationType;
-(double)course;
-(void)setLocation:(id)arg1 ;
@end

