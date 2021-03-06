/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HKMedicalIDEditorCell.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class UIPickerView, NSLengthFormatter, NSNumber, NSString;

@interface HKMedicalIDEditorHeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIPickerView* _picker;
	NSLengthFormatter* _lengthFormatter;
	BOOL _usesImperialUnits;
	NSNumber* _centimeterValue;

}

@property (nonatomic,retain) NSNumber * centimeterValue;              //@synthesize centimeterValue=_centimeterValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultCentimeterValue;
-(void)commitEditing;
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_commonInit;
-(void)beginEditing;
-(id)formattedValue;
-(void)_showPicker;
-(void)_hidePicker;
-(NSNumber *)centimeterValue;
-(id)_formattedValueForFeet:(double)arg1 ;
-(id)_formattedValueForInches:(double)arg1 ;
-(id)_formattedValueForCentimeters:(double)arg1 ;
-(void)setCentimeterValue:(NSNumber *)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
@end

