/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RURadioAVItem.h>
#import <RadioUI/AVAssetResourceLoaderDelegate.h>

@class _MPRadioStreamMetadata, NSArray, NSData, NSString;

@interface RURadioStreamTrackAVItem : RURadioAVItem <AVAssetResourceLoaderDelegate> {

	_MPRadioStreamMetadata* _adamIDMetadata;
	long long _albumStoreID;
	NSArray* _buyOffers;
	_MPRadioStreamMetadata* _effectiveMetadata;
	NSData* _previousAdamIDBlob;
	_MPRadioStreamMetadata* _radioStreamTrackMetadata;
	long long _storeID;
	_MPRadioStreamMetadata* _timedMetadata;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlayerItem:(id)arg1 ;
-(void)loadAssetAndPlayerItem;
-(char)isExplicitTrack;
-(char)isAlwaysLive;
-(id)mainTitle;
-(long long)albumStoreID;
-(id)buyOffers;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)artist;
-(long long)storeID;
-(id)album;
-(int)albumBuyButtonType;
-(id)albumBuyButtonText;
-(char)supportsRadioTrackActions;
-(id)initWithStreamTrack:(id)arg1 ;
-(id)_createMetadataForRadioStreamTrack;
-(void)_reloadMetadataAndPostNotificationsIfNeeded:(char)arg1 ;
-(id)streamTrack;
-(float)_maximumBitRateForNetworkType:(int)arg1 ;
-(void)_getCurrentTimedMetadata:(id*)arg1 pings:(id*)arg2 adamIDBlob:(id*)arg3 ;
-(void)_updateEffectiveMetadataAndPostNotifications:(char)arg1 ;
-(id)mpuReporting_storeItemID;
-(id)effectiveArtworkCollection;
-(char)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
@end

