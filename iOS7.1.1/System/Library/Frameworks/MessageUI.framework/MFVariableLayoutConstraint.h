/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MFVariableLayoutConstraint : NSObject {

	bool _cachedInterpolatedValueIsValid;
	double _cachedInterpolatedValue;
	double _medianValue;
	/*^block*/ id _interpolationFormula;

}

@property (assign,nonatomic) double medianValue;                   //@synthesize medianValue=_medianValue - In the implementation block
@property (assign,nonatomic) id interpolationFormula;              //@synthesize interpolationFormula=_interpolationFormula - In the implementation block
+(id)medianContentSizeCategory;
+(long long)_medianContentSizeIndex;
-(void)setMedianValue:(double)arg1 ;
-(void)setInterpolationFormula:(/*^block*/ id)arg1 ;
-(void)_didReceiveContentSizeCategoryNameDidChageNotification:(id)arg1 ;
-(double)medianValue;
-(/*^block*/ id)interpolationFormula;
-(id)initWithMedianConstraintValue:(double)arg1 interpolationFormula:(/*^block*/ id)arg2 ;
-(double)interpolatedValue;
-(void)dealloc;
@end

