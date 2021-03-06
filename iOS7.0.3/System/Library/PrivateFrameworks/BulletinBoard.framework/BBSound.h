/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString, NSDictionary;

@interface BBSound : NSObject <NSCopying, NSCoding> {

	int _soundType;
	unsigned long _systemSoundID;
	unsigned _soundBehavior;
	NSString* _audioCategory;
	NSString* _ringtoneName;
	BOOL _repeats;
	NSDictionary* _vibrationPattern;
	int _alertType;
	NSString* _accountIdentifier;
	NSString* _toneIdentifier;
	NSString* _vibrationIdentifier;

}

@property (assign,nonatomic) int soundType;                                //@synthesize soundType=_soundType - In the implementation block
@property (assign,nonatomic) unsigned long systemSoundID;                  //@synthesize systemSoundID=_systemSoundID - In the implementation block
@property (assign,nonatomic) unsigned soundBehavior;                       //@synthesize soundBehavior=_soundBehavior - In the implementation block
@property (nonatomic,copy) NSString * ringtoneName;                        //@synthesize ringtoneName=_ringtoneName - In the implementation block
@property (assign,getter=isRepeating,nonatomic) BOOL repeats;              //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,copy) NSDictionary * vibrationPattern;                //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (nonatomic,copy) NSString * audioCategory;                       //@synthesize audioCategory=_audioCategory - In the implementation block
@property (assign,nonatomic) int alertType;                                //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * toneIdentifier;                      //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vibrationIdentifier;                 //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
+(id)_possiblyCachedAlertSoundForInitializedSound:(id)arg1 ;
+(id)alertSoundWithSystemSoundID:(unsigned long)arg1 ;
-(id)vibrationPattern;
-(void)setVibrationPattern:(id)arg1 ;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setSoundType:(int)arg1 ;
-(int)soundType;
-(int)alertType;
-(void)setAlertType:(int)arg1 ;
-(id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned)arg2 ;
-(BOOL)_isUniquableAlertSound;
-(id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned)arg2 vibrationPattern:(id)arg3 ;
-(void)setSystemSoundID:(unsigned long)arg1 ;
-(void)setSoundBehavior:(unsigned)arg1 ;
-(id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 audioCategory:(id)arg4 ;
-(void)setRingtoneName:(id)arg1 ;
-(void)setRepeats:(BOOL)arg1 ;
-(void)setAudioCategory:(id)arg1 ;
-(id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2 ;
-(void)setToneIdentifier:(id)arg1 ;
-(void)setVibrationIdentifier:(id)arg1 ;
-(unsigned long)systemSoundID;
-(unsigned)soundBehavior;
-(id)ringtoneName;
-(BOOL)isRepeating;
-(id)audioCategory;
-(id)toneIdentifier;
-(id)vibrationIdentifier;
-(id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 ;
-(id)initWithToneAlert:(int)arg1 ;
-(id)initWithToneAlert:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ;
-(id)accountIdentifier;
@end

