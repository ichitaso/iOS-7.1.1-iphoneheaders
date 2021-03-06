/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:02:23 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/AddressBook.siriUIBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ABAssistantDisambiguationProvider : NSObject {

	void* _addressBook;
	NSString* _identifier;
	int _property;
	void* _multiValue;

}
-(id)disambiguationForPerson:(id)arg1 ;
-(id)disambiguationForPhone:(id)arg1 ;
-(id)disambiguationForEmail:(id)arg1 ;
-(id)disambiguationForPostalAddress:(id)arg1 ;
-(id)disambiguationForRelatedName:(id)arg1 ;
-(id)disambiguationForPhone:(id)arg1 identifierURL:(id)arg2 ;
-(id)disambiguationForEmail:(id)arg1 identifierURL:(id)arg2 ;
-(char)phone:(id)arg1 withIdentifierURL:(id)arg2 isEqualToPhone:(id)arg3 withIdentifierURL:(id)arg4 ;
-(char)phone:(id)arg1 withIdentifierURL:(id)arg2 isPreferredOverPhone:(id)arg3 withIdentifierURL:(id)arg4 ;
-(id)valueForLabel:(id)arg1 property:(int)arg2 identifier:(id)arg3 ;
-(id)disambiguationItemForListItem:(id)arg1 ;
-(void)dealloc;
-(char)listItem:(id)arg1 isEqualToListItem:(id)arg2 ;
-(char)listItem:(id)arg1 isPreferredOverListItem:(id)arg2 ;
-(id)initWithAddressBook:(void*)arg1 ;
@end

