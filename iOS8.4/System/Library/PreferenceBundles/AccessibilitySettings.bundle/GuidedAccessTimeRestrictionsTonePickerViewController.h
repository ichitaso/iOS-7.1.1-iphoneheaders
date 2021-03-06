/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <AccessibilitySettings/TKTonePickerViewControllerDelegate.h>

@class TKTonePickerViewController, NSString;

@interface GuidedAccessTimeRestrictionsTonePickerViewController : PSViewController <TKTonePickerViewControllerDelegate> {

	TKTonePickerViewController* _tonePickerViewController;

}

@property (nonatomic,retain) TKTonePickerViewController * tonePickerViewController;              //@synthesize tonePickerViewController=_tonePickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTonePickerViewController:(TKTonePickerViewController *)arg1 ;
-(TKTonePickerViewController *)tonePickerViewController;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
@end

