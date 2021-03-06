/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HKEmergencyCardTableItem.h>
#import <HealthKitUI/ABPeoplePickerNavigationControllerDelegate.h>
#import <HealthKitUI/HKMedicalIDEditorCellEditDelegate.h>
#import <HealthKitUI/_EmergencyContactRelationshipPickerDelegate.h>

@class NSMutableArray, UITableViewCell, _HKEmergencyContact, NSString;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <ABPeoplePickerNavigationControllerDelegate, HKMedicalIDEditorCellEditDelegate, _EmergencyContactRelationshipPickerDelegate> {

	void* _addressBook;
	NSMutableArray* _cells;
	UITableViewCell* _lastDequeuedAddContactCell;
	_HKEmergencyContact* _selectedContact;
	BOOL _selectedContactIsBeingAdded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initInEditMode:(BOOL)arg1 ;
-(void)dealloc;
-(id)title;
-(long long)numberOfRows;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(void)medicalIDEditorCellDidTapLabel:(id)arg1 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2 ;
-(void)emergencyContactRelationshipPickerDidCancel:(id)arg1 ;
-(void)_configureAddContactCellLayoutForRowIndex:(long long)arg1 ;
-(id)_dequeueAndConfigureContactEditCellForIndex:(long long)arg1 inTableView:(id)arg2 ;
-(id)_dequeueAndConfigureContactViewCellForIndex:(long long)arg1 ;
-(void)_presentEmergencyContactPicker;
-(void)_addEmergencyContactToData:(id)arg1 ;
-(void)_didSelectPerson:(void*)arg1 identifier:(int)arg2 ;
@end

