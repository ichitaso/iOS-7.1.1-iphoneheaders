/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/ReportAProblemReporter.h>
#import <Maps/ReportAProblemAdditionalContext.h>

@class NSMutableArray, ReportAProblemSearchResultsViewController, RAPSearchClassicViewController, ReportAProblemCommentsViewController, ReportAProblemLocationPickerViewController, ReportAProblemAddressEditorViewController, ReportAProblemDirectionsViewController, ReportAProblemDirectionsDetailsViewController, ReportAProblemSatelliteViewController, ReportAProblemLabelEditorViewController, ReportAProblemTrafficViewController, GEORPDirectionsProblem, ReportAProblemNavigationController;

@interface ReportAProblemTopTableViewController : UITableViewController <ReportAProblemReporter, ReportAProblemAdditionalContext> {

	NSMutableArray* _problemItems;
	ReportAProblemSearchResultsViewController* _searchResultsViewController;
	RAPSearchClassicViewController* _searchClassicViewController;
	ReportAProblemCommentsViewController* _commentsViewController;
	ReportAProblemLocationPickerViewController* _locationPickerViewController;
	ReportAProblemAddressEditorViewController* _addressViewController;
	ReportAProblemDirectionsViewController* _simplerDirectionsViewController;
	ReportAProblemDirectionsDetailsViewController* _directionsViewController;
	ReportAProblemSatelliteViewController* _satelliteViewController;
	ReportAProblemLabelEditorViewController* _labelEditorViewController;
	ReportAProblemTrafficViewController* _trafficViewController;
	BOOL _problemRequiresAdditionalContext;
	id _directionsHistoryItem;
	GEORPDirectionsProblem* _directionsProblemReport;

}

@property (nonatomic,readonly) ReportAProblemNavigationController * navigationController; 
-(void)populateRPProblem:(id)arg1 request:(id)arg2 ;
-(void)updateEnabledState;
-(BOOL)canReportProblem;
-(id)_selectedItem;
-(BOOL)problemRequiresAdditionalContext;
-(void)next:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(id)navigationController;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)cancel:(id)arg1 ;
@end

