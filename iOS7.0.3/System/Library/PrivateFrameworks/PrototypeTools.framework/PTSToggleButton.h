/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PTSButton.h>
#import <PrototypeTools/PTSHUDControl.h>
#import <UIKit/_UISettingsKeyPathObserver.h>

@class NSString, _UISettings;

@interface PTSToggleButton : PTSButton <PTSHUDControl, _UISettingsKeyPathObserver> {

	NSString* _titleForOnState;
	NSString* _titleForOffState;
	id _valueForOnState;
	id _valueForOffState;

}

@property (nonatomic,copy) NSString * titleForOnState;                   //@synthesize titleForOnState=_titleForOnState - In the implementation block
@property (nonatomic,copy) NSString * titleForOffState;                  //@synthesize titleForOffState=_titleForOffState - In the implementation block
@property (nonatomic,copy) id valueForOnState;                           //@synthesize valueForOnState=_valueForOnState - In the implementation block
@property (nonatomic,copy) id valueForOffState;                          //@synthesize valueForOffState=_valueForOffState - In the implementation block
@property (assign,nonatomic,__weak) _UISettings * settings; 
@property (nonatomic,copy) NSString * valueKeyPath; 
@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) BOOL enabled; 
+(id)toggleButtonForSettings:(id)arg1 valueKeyPath:(id)arg2 titleForOnState:(id)arg3 titleForOffState:(id)arg4 ;
-(void)dealloc;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)setSettings:(id)arg1 valueKeyPath:(id)arg2 ;
-(void)pressed:(id)arg1 ;
-(void)setTitleForOnState:(id)arg1 ;
-(void)setTitleForOffState:(id)arg1 ;
-(id)valueForOnState;
-(id)valueForOffState;
-(id)titleForOnState;
-(id)titleForOffState;
-(void)setValueForOnState:(id)arg1 ;
-(void)setValueForOffState:(id)arg1 ;
-(void).cxx_destruct;
@end

