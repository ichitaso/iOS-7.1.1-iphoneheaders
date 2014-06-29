/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSArray;

@interface WBSCreditCardDataController : NSObject {

	NSMapTable* _creditCardDataKeychainReferences;

}

@property (nonatomic,readonly) NSArray * creditCardData; 
+(bool)hasCreditCardData;
-(void)dealloc;
-(id)init;
-(void)clearCreditCardData;
-(id)creditCardData;
-(id)existingCardWithNumber:(id)arg1 ;
-(void)replaceCreditCardData:(id)arg1 withCard:(id)arg2 ;
-(void)saveCreditCardDataIfAllowed:(id)arg1 ;
-(void)neverSaveCreditCardData:(id)arg1 ;
-(id)savableCreditCardDataInForm:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1 ;
-(bool)shouldNeverSaveCardWithNumber:(id)arg1 ;
-(id)_uniqueCardNameForCardName:(id)arg1 ;
-(id)defaultNameForCardOfType:(unsigned long long)arg1 cardholderName:(id)arg2 ;
-(void)creditCardDataDidChange;
-(void)_removeNeverSaveCreditCardData:(id)arg1 ;
-(bool)shouldAddCardWithNumber:(id)arg1 ;
-(void)saveCreditCardData:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCard:(id)arg1 ;
-(void)invalidateCreditCardData;
-(void)removeCreditCardData:(id)arg1 ;
-(bool)isCreditCardDataSaved:(id)arg1 ;
@end
