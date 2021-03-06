/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:45:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicStoreUI/MSStructuredPageTableDataSource.h>

@interface MSTrackListDataSource : MSStructuredPageTableDataSource
-(id)headerViewForSection:(int)arg1 ;
-(int)tableViewStyle;
-(char)canShowPreviewForItem:(id)arg1 ;
-(id)_stylesheetString;
-(id)cellForIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)placeholderCellForIndexPath:(id)arg1 ;
-(void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2 ;
-(char)canDoubleTapIndexPath:(id)arg1 ;
-(float)heightForPlaceholderCells;
-(void)reloadCellContexts;
-(Class)cellConfigurationClassForItem:(id)arg1 ;
-(id)cellConfigurationForIndex:(int)arg1 item:(id)arg2 ;
-(char)canShowItemOfferButtonForItem:(id)arg1 ;
@end

