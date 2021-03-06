/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoutingControllerDelegate.h>

@class MPAVRoutingController, NSMutableDictionary, NSArray, PUAirplayRoute, NSMutableArray;

@interface PUAirplayController : NSObject <MPAVRoutingControllerDelegate> {

	MPAVRoutingController* _airplayDeviceController;
	bool _applicationInBackground;
	bool _hasNonDefaultRoute;
	NSMutableDictionary* _knownRoutes;
	NSArray* _sortedRoutes;
	PUAirplayRoute* _defaultRoute;
	PUAirplayRoute* _currentRoute;
	NSMutableArray* _availabilityHandlers;
	NSMutableArray* _routeHandlers;
	NSMutableArray* _currentRouteHandlers;
	/*^block*/ id _routeChangeCompletionBlock;

}
+(id)sharedInstance;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2 ;
-(id)init;
-(id)description;
-(void)_didEnterBackground:(id)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void).cxx_destruct;
-(void)requestRouteUpdatesFor:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)stopRouteUpdatesFor:(id)arg1 ;
-(void)requestRouteAvailabilityUpdatesFor:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)stopRouteAvailabilityUpdatesFor:(id)arg1 ;
-(void)stopCurrentRouteUpdatesFor:(id)arg1 ;
-(void)requestCurrentRouteUpdatesFor:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_updateAirplayDiscoveryMode;
-(void)_gatherRouteInformation;
-(void)_updateRouteInformationFromRoutes:(id)arg1 ;
-(void)_broadcastRouteInformation;
-(void)_updateCurrentRoute;
-(void)_updateFromAVRoute:(id)arg1 ;
-(id)defaultRoute;
-(void)makeRouteCurrent:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)currentRoute;
@end

