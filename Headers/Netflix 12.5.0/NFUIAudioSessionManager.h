//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NFUIAudioSessionManager : NSObject
{
    long long _userInitiatedMuteState;
    NSMutableDictionary *_activeAudioSessions;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *activeAudioSessions; // @synthesize activeAudioSessions=_activeAudioSessions;
@property(nonatomic) long long userInitiatedMuteState; // @synthesize userInitiatedMuteState=_userInitiatedMuteState;
- (void).cxx_destruct;
- (void)logVolumeDidChange;
- (id)stringForCategory:(long long)arg1;
- (id)debugDescription;
- (float)systemVolume;
- (void)volumeDidChange:(id)arg1 observer:(id)arg2;
- (_Bool)canDeactivateActivateSession;
- (_Bool)isRestrictedCategory:(long long)arg1;
- (void)setAudioSessionCategory:(id)arg1;
- (id)getTranslatedAVAudioCategory:(long long)arg1;
- (long long)getWeightedCategory;
- (void)setAudioSessionCategoryForActiveSessions;
- (void)removeSessionWithKey:(id)arg1;
- (void)setProposedCategory:(long long)arg1 forSessionKey:(id)arg2;
- (void)deactivateAudioSession:(CDUnknownBlockType)arg1;
- (void)activateAudioSession:(CDUnknownBlockType)arg1;
- (id)init;

@end

