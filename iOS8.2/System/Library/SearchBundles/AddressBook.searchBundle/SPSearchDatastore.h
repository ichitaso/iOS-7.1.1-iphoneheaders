/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/SearchBundles/AddressBook.searchBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SPSearchDatastore <NSObject>
@optional
-(void)preheat;
-(void)shutDown;
-(void)sendFeedback:(id)arg1;
-(char)coolDown;
-(id)resultForIdentifier:(id)arg1 domain:(unsigned)arg2;
-(char)wantsEveryResultInItsOwnSection;
-(char)wantsExtendedTimeForDomain:(unsigned)arg1;
-(id)categoryForDomain:(unsigned)arg1;
-(id)imageDataForResultIdentifier:(unsigned long long)arg1 domain:(unsigned)arg2 size:(CGSize)arg3;
-(id)imageDataForIdentifier:(id)arg1 domain:(unsigned)arg2 size:(CGSize)arg3;

@required
-(id)searchDomains;
-(id)displayIdentifierForDomain:(unsigned)arg1;
-(void)performQuery:(id)arg1 withResultsPipe:(id)arg2;

@end

