//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface SPTHomeMixMetadataModelEntity : NSObject
{
    _Bool _liked;
    _Bool _publishExplicitTracks;
    _Bool _homeMixEnabled;
    _Bool _tasteOnboardingRequired;
    _Bool _familyMember;
    _Bool _welcomeRequired;
    _Bool _globalExplicitFilterEnabled;
    _Bool _alone;
    NSString *_madeForName;
    NSString *_name;
    NSURL *_URI;
    NSURL *_imageURI;
    NSDictionary *_members;
    NSArray *_genres;
    unsigned long long _mood;
    NSString *_algorithm;
    NSString *_cohort;
    unsigned long long _planType;
    NSString *_primaryColorHex;
    NSString *_secondaryColorHex;
}

+ (unsigned long long)parseStyle:(id)arg1;
+ (id)parseTaste:(id)arg1;
+ (id)parseMembers:(id)arg1;
+ (unsigned long long)parsePlanType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *secondaryColorHex; // @synthesize secondaryColorHex=_secondaryColorHex;
@property(readonly, copy, nonatomic) NSString *primaryColorHex; // @synthesize primaryColorHex=_primaryColorHex;
@property(readonly, nonatomic) unsigned long long planType; // @synthesize planType=_planType;
@property(readonly, nonatomic, getter=isAlone) _Bool alone; // @synthesize alone=_alone;
@property(readonly, copy, nonatomic) NSString *cohort; // @synthesize cohort=_cohort;
@property(readonly, nonatomic, getter=isGlobalExplicitFilterEnabled) _Bool globalExplicitFilterEnabled; // @synthesize globalExplicitFilterEnabled=_globalExplicitFilterEnabled;
@property(readonly, copy, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
@property(readonly, nonatomic) unsigned long long mood; // @synthesize mood=_mood;
@property(readonly, nonatomic, getter=isWelcomeRequired) _Bool welcomeRequired; // @synthesize welcomeRequired=_welcomeRequired;
@property(readonly, copy, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(readonly, nonatomic, getter=isFamilyMember) _Bool familyMember; // @synthesize familyMember=_familyMember;
@property(readonly, nonatomic, getter=isTasteOnboardingRequired) _Bool tasteOnboardingRequired; // @synthesize tasteOnboardingRequired=_tasteOnboardingRequired;
@property(readonly, nonatomic, getter=isHomeMixEnabled) _Bool homeMixEnabled; // @synthesize homeMixEnabled=_homeMixEnabled;
@property(readonly, nonatomic, getter=shouldPublishExplicitTracks) _Bool publishExplicitTracks; // @synthesize publishExplicitTracks=_publishExplicitTracks;
@property(readonly, copy, nonatomic) NSDictionary *members; // @synthesize members=_members;
@property(readonly, nonatomic, getter=isLiked) _Bool liked; // @synthesize liked=_liked;
@property(readonly, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *madeForName; // @synthesize madeForName=_madeForName;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMixModelEntity:(id)arg1;
- (void)populatePropertiesBasedOnFormatListAttributes:(id)arg1;
- (id)initWithURL:(id)arg1 playlistMetadata:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *memberBlacklistAsStringArray;

@end

