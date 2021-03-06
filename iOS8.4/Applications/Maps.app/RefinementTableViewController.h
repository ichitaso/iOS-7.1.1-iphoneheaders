/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol RefinementSelectionDelegate;
@class SearchInfo, NSDictionary;

@interface RefinementTableViewController : UITableViewController {

	SearchInfo* _refinementSearchInfo;
	NSDictionary* _textAttributes;
	id<RefinementSelectionDelegate> _delegate;

}

@property (nonatomic,retain) SearchInfo * refinementSearchInfo;                            //@synthesize refinementSearchInfo=_refinementSearchInfo - In the implementation block
@property (assign,nonatomic,__weak) id<RefinementSelectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setRefinementSearchInfo:(SearchInfo *)arg1 ;
-(SearchInfo *)refinementSearchInfo;
-(void)setDelegate:(id<RefinementSelectionDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<RefinementSelectionDelegate>)delegate;
-(CGSize)preferredContentSize;
-(id)initWithStyle:(int)arg1 ;
@end

