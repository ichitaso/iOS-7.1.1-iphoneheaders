/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <PhotosFormats/PFAssetAdjustments.h>

@interface PFVideoAdjustments : PFAssetAdjustments {

	float _slowMotionRate;
	SCD_Struct_PF1 _slowMotionTimeRange;

}

@property (nonatomic,readonly) SCD_Struct_PF1 slowMotionRampIn; 
@property (nonatomic,readonly) SCD_Struct_PF1 slowMotionRampOut; 
@property (nonatomic,readonly) float slowMotionRate; 
@property (nonatomic,readonly) SCD_Struct_PF1 slowMotionTimeRange; 
@property (assign,nonatomic) float slowMotionRate;                              //@synthesize slowMotionRate=_slowMotionRate - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF1 slowMotionTimeRange;                //@synthesize slowMotionTimeRange=_slowMotionTimeRange - In the implementation block
+(SCD_Struct_PF1)defaultSlowMotionTimeRangeForDuration:(SCD_Struct_PF0)arg1 ;
+(float)defaultSlowMotionRateForNominalFrameRate:(float)arg1 ;
+(id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1 ;
-(SCD_Struct_PF0)convertToOriginalTimeFromScaledTime:(SCD_Struct_PF0)arg1 forExport:(BOOL)arg2 ;
-(SCD_Struct_PF0)convertToScaledTimeFromOriginalTime:(SCD_Struct_PF0)arg1 forExport:(BOOL)arg2 ;
-(SCD_Struct_PF1)slowMotionRampIn;
-(SCD_Struct_PF1)slowMotionRampOut;
-(BOOL)hasSlowMotionAdjustments;
-(id)initWithSlowMotionTimeRange:(SCD_Struct_PF1)arg1 rate:(float)arg2 ;
-(BOOL)_isValidSlowMotionTimeRange:(SCD_Struct_PF1)arg1 rate:(float)arg2 ;
-(id)description;
-(id)initWithPropertyListDictionary:(id)arg1 ;
-(BOOL)isRecognizedFormat;
-(SCD_Struct_PF1)slowMotionTimeRange;
-(float)slowMotionRate;
-(BOOL)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(SCD_Struct_PF1*)arg2 rate:(float*)arg3 ;
-(void)_updateDerivedPropertiesFromVersionedData;
-(BOOL)_isSlowMotionFormat;
-(BOOL)_parseVersionedDataForSlowMotionTimeRange:(SCD_Struct_PF1*)arg1 rate:(float*)arg2 ;
-(void)setSlowMotionTimeRange:(SCD_Struct_PF1)arg1 ;
-(void)setSlowMotionRate:(float)arg1 ;
-(id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1 ;
-(BOOL)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(SCD_Struct_PF1*)arg2 rate:(float*)arg3 ;
-(id)_dictionaryFromSlowMotionTimeRange:(SCD_Struct_PF1)arg1 rate:(float)arg2 ;
@end

