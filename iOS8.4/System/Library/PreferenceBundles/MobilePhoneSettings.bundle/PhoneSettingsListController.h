/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface PhoneSettingsListController : PSListController
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)bundle;
-(id)setControlEnabled:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(void)simRemoved:(id)arg1 ;
-(void)updateCellStates;
-(void)pushController:(Class)arg1 specifier:(id)arg2 ;
-(id)sheetSpecifierWithTitle:(id)arg1 controller:(Class)arg2 detail:(Class)arg3 ;
-(id)setCellEnabled:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(id)setCellLoading:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(id)specifiers;
@end

