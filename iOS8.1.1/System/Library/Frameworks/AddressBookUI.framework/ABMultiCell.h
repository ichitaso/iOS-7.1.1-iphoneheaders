/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABChameleonCell.h>

@class ABMultiCellContentView;

@interface ABMultiCell : ABChameleonCell {

	ABMultiCellContentView* _abMultiCellContentView;
	BOOL _editingDisabled;

}

@property (assign,getter=isEditingDisabled,nonatomic) BOOL editingDisabled;              //@synthesize editingDisabled=_editingDisabled - In the implementation block
@property (nonatomic,retain) ABMultiCellContentView * multiCellContentView; 
-(void)setAbCellStyle:(int)arg1 ;
-(void)_addMultiCellContentViewIfNeeded;
-(BOOL)_shouldSwallowTouches:(id)arg1 withEvent:(id)arg2 ;
-(ABMultiCellContentView *)multiCellContentView;
-(void)setMultiCellContentView:(ABMultiCellContentView *)arg1 ;
-(BOOL)isEditingDisabled;
-(void)setEditingDisabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

