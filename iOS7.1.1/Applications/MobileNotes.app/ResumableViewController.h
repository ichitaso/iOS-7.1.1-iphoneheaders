/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileNotes/NotesBackgroundViewDelegate.h>
#import <MobileNotes/NotesStateArchiving.h>

@class NSDictionary;

@interface ResumableViewController : UIViewController <NotesBackgroundViewDelegate, NotesStateArchiving> {

	NSDictionary* _archivedConfiguration;

}
+(void)loadMessageUIIfNecessary;
-(id)initWithArchivedConfiguration:(id)arg1 ;
-(id)archivedConfiguration;
-(void)applyArchivedConfiguration:(id)arg1 ;
-(float)topFadingHeightForBackgroundView:(id)arg1 ;
-(float)bottomFadingHeightForBackgroundView:(id)arg1 ;
-(BOOL)controllerIsInLandscapeMode;
-(id)init;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void).cxx_destruct;
@end
