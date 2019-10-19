//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString, SASAudioStitch, SCAttributionInfo, SCContextContextHint, SCMTMediaInfo, SCMTOneSnapInfo, SCMTPublicMediaInfo, SCMTStreamingMediaInfo;

@interface SCMTMapSnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAttributionInfo *attributionInfo; // @dynamic attributionInfo;
@property(retain, nonatomic) SASAudioStitch *audioStitch; // @dynamic audioStitch;
@property(retain, nonatomic) SCContextContextHint *contextHint; // @dynamic contextHint;
@property(nonatomic) double fuzzDistance; // @dynamic fuzzDistance;
@property(nonatomic) _Bool hasAttributionInfo; // @dynamic hasAttributionInfo;
@property(nonatomic) _Bool hasAudioStitch; // @dynamic hasAudioStitch;
@property(nonatomic) _Bool hasContextHint; // @dynamic hasContextHint;
@property(nonatomic) _Bool hasMediaInfo; // @dynamic hasMediaInfo;
@property(nonatomic) _Bool hasPublicMediaInfo; // @dynamic hasPublicMediaInfo;
@property(nonatomic) _Bool hasStreamingMediaInfo; // @dynamic hasStreamingMediaInfo;
@property(nonatomic) _Bool hasStreamingSnapInfo; // @dynamic hasStreamingSnapInfo;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) _Bool isInfiniteDuration; // @dynamic isInfiniteDuration;
@property(nonatomic) double lat; // @dynamic lat;
@property(nonatomic) double lng; // @dynamic lng;
@property(retain, nonatomic) NSMutableDictionary *localizedAddresses; // @dynamic localizedAddresses;
@property(readonly, nonatomic) unsigned long long localizedAddresses_Count; // @dynamic localizedAddresses_Count;
@property(retain, nonatomic) SCMTMediaInfo *mediaInfo; // @dynamic mediaInfo;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSString *multiSnapBundleId; // @dynamic multiSnapBundleId;
@property(nonatomic) int multiSnapSequenceId; // @dynamic multiSnapSequenceId;
@property(copy, nonatomic) NSString *multisnapId; // @dynamic multisnapId;
@property(retain, nonatomic) SCMTPublicMediaInfo *publicMediaInfo; // @dynamic publicMediaInfo;
@property(nonatomic) _Bool shouldFuzz; // @dynamic shouldFuzz;
@property(copy, nonatomic) NSString *storyId; // @dynamic storyId;
@property(retain, nonatomic) SCMTStreamingMediaInfo *streamingMediaInfo; // @dynamic streamingMediaInfo;
@property(retain, nonatomic) SCMTOneSnapInfo *streamingSnapInfo; // @dynamic streamingSnapInfo;
@property(nonatomic) double timeLength; // @dynamic timeLength;
@property(nonatomic) double timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *unlockablesSnapInfo; // @dynamic unlockablesSnapInfo;
@property(copy, nonatomic) NSString *venueId; // @dynamic venueId;

@end

