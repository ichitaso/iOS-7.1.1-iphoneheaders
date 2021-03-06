/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventEditItem.h>

@class EKEventURLInlineEditItem, EKEventNotesInlineEditItem;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem {

	EKEventURLInlineEditItem* _urlEditItem;
	EKEventNotesInlineEditItem* _notesEditItem;

}
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(unsigned)numberOfSubitemsInSubsection:(unsigned)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 inSubsection:(unsigned)arg2 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 inSubsection:(unsigned)arg2 forWidth:(float)arg3 ;
-(void)setSelectedResponder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)reset;
-(BOOL)isInline;
-(void).cxx_destruct;
@end

