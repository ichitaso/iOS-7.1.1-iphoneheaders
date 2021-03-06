/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemCollection.h>

@class MPStoreCompletionOfferResponse, NSArray, MPMediaQuery, MPMediaItemCollection, MPStoreOfferContentRating;

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection {

	MPStoreCompletionOfferResponse* _storeOfferResponse;
	NSArray* _unmergedStoreMediaItems;
	MPMediaQuery* _localItemsQuery;
	MPMediaItemCollection* _localCollection;
	bool _hasHiddenRestrictedContent;
	long long _preferredStoreOfferVariant;
	MPStoreOfferContentRating* _collectionContentRating;

}

@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * itemsByRemovingStoreOffers; 
@property (nonatomic,readonly) NSArray * itemsByRemovingLocalItems; 
@property (nonatomic,readonly) bool isCollectionOfferPresentable; 
+(id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 ;
+(long long)offerPassTypeForLookupCollectionPropertyValues:(id)arg1 ;
+(id)albumOrderedChildItemIDsForLookupCollectionPropertyValues:(id)arg1 ;
+(id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2 ;
+(id)contentRatingForCollectionPropertyValues:(id)arg1 ;
+(id)collectionLookupKeyForMediaProperty:(id)arg1 ;
+(id)defaultPropertyValues;
-(id)mediaLibrary;
-(id)valuesForProperties:(id)arg1 ;
-(id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2 ;
-(id)itemsByRemovingLocalItems;
-(long long)preferredStoreOfferVariant;
-(id)copyByOverlayingMediaItemsWithItemsQuery:(id)arg1 preferredStoreOfferVariant:(long long)arg2 ;
-(id)buyOfferForVariant:(long long)arg1 ;
-(bool)_offeredItemAlreadyExists;
-(id)_lookupOfferDictionaries;
-(bool)isDownloadable;
-(id)itemsByRemovingStoreOffers;
-(bool)hasDownloadableStoreOfferItemsForVariant:(long long)arg1 ;
-(bool)hasPurchasableStoreOfferItemsForVariant:(long long)arg1 ;
-(void)_loadLocalCollection;
-(bool)_checkIsUsableOffer;
-(id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2 offerMediaItems:(id)arg3 localItemsQuery:(id)arg4 ;
-(bool)_hasRestrictedContent;
-(bool)isCheaperToPurchaseIndividualItems;
-(long long)countOfItemsByRemovingLocalItems;
-(bool)isCollectionOfferPresentable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)title;
-(void).cxx_destruct;
-(id)valueForProperty:(id)arg1 ;
-(unsigned long long)persistentID;
@end

