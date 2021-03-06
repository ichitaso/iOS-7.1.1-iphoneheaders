/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortSettings/AirPortSettings-Structs.h>
#import <Preferences/PSEditableListController.h>

@class NSSet;

@interface APKnownNetworksController : PSEditableListController {

	CFLocaleRef _locale;
	CFDateFormatterRef _formatter;
	NSSet* _managedNetworkNames;

}
-(void)dealloc;
-(id)init;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)setEditable:(bool)arg1 ;
-(void)_createFormatter;
-(void)removeNetwork:(id)arg1 ;
-(id)specifiers;
@end

