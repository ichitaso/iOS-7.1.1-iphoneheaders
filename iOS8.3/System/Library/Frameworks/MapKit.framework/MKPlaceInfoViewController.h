/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:56:04 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactViewController.h>
#import <MapKit/ABContactViewControllerDelegate.h>
#import <MapKit/MKStackingViewControllerPreferredSizeUse.h>
#import <MapKit/MKPlaceAttributionCellProvider.h>

@protocol MKPlaceInfoViewControllerDelegate, MKMapItemVendorDeal;
@class ABCardGroup, _MKPlaceViewController, MKMapItem, NSArray, UIImage, _MKPlaceInfoViewControllerRouter, NSAttributedString, NSString;

@interface MKPlaceInfoViewController : ABContactViewController <ABContactViewControllerDelegate, MKStackingViewControllerPreferredSizeUse, MKPlaceAttributionCellProvider> {

	ABCardGroup* _dealsGroup;
	ABCardGroup* _businessInfoGroup;
	ABCardGroup* _inlineMapGroup;
	char _showAttribution;
	_MKPlaceViewController* _owner;
	id<MKPlaceInfoViewControllerDelegate> _infoDelegate;
	MKMapItem* _mapItem;
	NSArray* _businessInfoOrder;
	UIImage* _inlineMap;
	id<MKMapItemVendorDeal> _deal;
	_MKPlaceInfoViewControllerRouter* _actionsProxy;

}

@property (assign,nonatomic,__weak) id<MKPlaceInfoViewControllerDelegate> infoDelegate;              //@synthesize infoDelegate=_infoDelegate - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) id<MKMapItemVendorDeal> deal;                                           //@synthesize deal=_deal - In the implementation block
@property (nonatomic,readonly) NSAttributedString * infoAttributionString; 
@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                  //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSArray * businessInfoOrder;                                            //@synthesize businessInfoOrder=_businessInfoOrder - In the implementation block
@property (nonatomic,retain) UIImage * inlineMap;                                                    //@synthesize inlineMap=_inlineMap - In the implementation block
@property (nonatomic,retain) _MKPlaceInfoViewControllerRouter * actionsProxy;                        //@synthesize actionsProxy=_actionsProxy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char requiresPreferredContentSizeInStackingView; 
@property (assign,nonatomic) char showAttribution;                                                   //@synthesize showAttribution=_showAttribution - In the implementation block
-(id)initWithContact:(id)arg1 ;
-(id)contactHeaderView;
-(id)contactView:(id)arg1 cellForItemAtIndex:(int)arg2 inGroup:(id)arg3 ;
-(char)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4 ;
-(int)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2 ;
-(float)contactView:(id)arg1 heightForItemAtIndex:(int)arg2 inGroup:(id)arg3 ;
-(void)setInfoDelegate:(id<MKPlaceInfoViewControllerDelegate>)arg1 ;
-(void)setShowAttribution:(char)arg1 ;
-(NSAttributedString *)infoAttributionString;
-(void)updateInlineMapWithRefinedMapItem:(id)arg1 ;
-(void)setDeal:(id<MKMapItemVendorDeal>)arg1 ;
-(id<MKMapItemVendorDeal>)deal;
-(char)requiresPreferredContentSizeInStackingView;
-(void)_setupActions;
-(void)_setupBusinessInfo;
-(char)showAttribution;
-(void)setBusinessInfoOrder:(NSArray *)arg1 ;
-(id<MKPlaceInfoViewControllerDelegate>)infoDelegate;
-(void)_directionsToAddress:(id)arg1 ;
-(void)_directionsFromAddress:(id)arg1 ;
-(void)_flyoverTour:(id)arg1 ;
-(void)setInlineMap:(UIImage *)arg1 ;
-(NSArray *)businessInfoOrder;
-(UIImage *)inlineMap;
-(void)_handleBusinessAttributionRequest;
-(void)_launchMaps;
-(void)_showDeal;
-(void)_launchMapsDirectionsWithSource:(id)arg1 destination:(id)arg2 directionsMode:(id)arg3 ;
-(_MKPlaceInfoViewControllerRouter *)actionsProxy;
-(void)setActionsProxy:(_MKPlaceInfoViewControllerRouter *)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)viewDidLoad;
-(void)_updatePreferredContentSize;
-(_MKPlaceViewController *)owner;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
@end

