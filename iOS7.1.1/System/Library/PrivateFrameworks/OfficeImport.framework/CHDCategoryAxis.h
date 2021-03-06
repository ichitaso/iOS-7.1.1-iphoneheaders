/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDCategoryAxis : CHDAxis {

	bool mAutomatic;
	bool mNoMultipleLevelLabel;
	int mLabelAlignment;
	long long mLabelFrequency;

}
-(id)initWithResources:(id)arg1 ;
-(void)setLabelFrequency:(long long)arg1 ;
-(void)setLabelAlignment:(int)arg1 ;
-(long long)labelFrequency;
-(void)adjustAxisPositionForHorizontalChart;
-(bool)isAutomatic;
-(void)setAutomatic:(bool)arg1 ;
-(bool)isNoMultipleLabellevel;
-(void)setNoMultipleLevelLabel:(bool)arg1 ;
-(int)labelAlignment;
@end

