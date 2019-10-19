//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, NSString, SCImpalaPublicProfileEntryInfo;

@interface SCImpalaPublisherProfileV2ViewModel : SCComposerMarshallableObject
{
    _Bool _autoSubscribe;
    NSString *_businessProfileId;
    NSString *_showId;
    SCImpalaPublicProfileEntryInfo *_entryInfo;
    NSString *_bitmojiAvatarId;
    NSNumber *_extrasAbEnabled;
}

@property(retain, nonatomic) NSNumber *extrasAbEnabled; // @synthesize extrasAbEnabled=_extrasAbEnabled;
@property(nonatomic) _Bool autoSubscribe; // @synthesize autoSubscribe=_autoSubscribe;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(retain, nonatomic) SCImpalaPublicProfileEntryInfo *entryInfo; // @synthesize entryInfo=_entryInfo;
@property(copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithBusinessProfileId:(id)arg1 showId:(id)arg2 entryInfo:(id)arg3 bitmojiAvatarId:(id)arg4 autoSubscribe:(_Bool)arg5;
- (id)initWithBusinessProfileId:(id)arg1 showId:(id)arg2 entryInfo:(id)arg3 bitmojiAvatarId:(id)arg4 autoSubscribe:(_Bool)arg5 extrasAbEnabled:(id)arg6;

@end

