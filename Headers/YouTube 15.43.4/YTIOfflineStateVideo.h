//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIOfflineStateVideo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int addedNetworkType; // @dynamic addedNetworkType;
@property(retain, nonatomic) NSMutableArray *captionsArray; // @dynamic captionsArray;
@property(readonly, nonatomic) unsigned long long captionsArray_Count; // @dynamic captionsArray_Count;
@property(nonatomic) int downloadCompletedNetworkType; // @dynamic downloadCompletedNetworkType;
@property(nonatomic) long long downloadedBytes; // @dynamic downloadedBytes;
@property(nonatomic) long long durationInS; // @dynamic durationInS;
@property(nonatomic) _Bool hasAddedNetworkType; // @dynamic hasAddedNetworkType;
@property(nonatomic) _Bool hasDownloadCompletedNetworkType; // @dynamic hasDownloadCompletedNetworkType;
@property(nonatomic) _Bool hasDownloadedBytes; // @dynamic hasDownloadedBytes;
@property(nonatomic) _Bool hasDurationInS; // @dynamic hasDurationInS;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasIsInPlaylist; // @dynamic hasIsInPlaylist;
@property(nonatomic) _Bool hasLastPlaybackTimestampMs; // @dynamic hasLastPlaybackTimestampMs;
@property(nonatomic) _Bool hasOfflineStateExpiresInS; // @dynamic hasOfflineStateExpiresInS;
@property(nonatomic) _Bool hasOfflineStateUpdateTimeMs; // @dynamic hasOfflineStateUpdateTimeMs;
@property(nonatomic) _Bool hasPendingStateFlags; // @dynamic hasPendingStateFlags;
@property(nonatomic) _Bool hasPlayerResponseSavedTimeMs; // @dynamic hasPlayerResponseSavedTimeMs;
@property(nonatomic) _Bool hasSelectedOfflineMode; // @dynamic hasSelectedOfflineMode;
@property(nonatomic) _Bool hasSelectedVideoQuality; // @dynamic hasSelectedVideoQuality;
@property(nonatomic) _Bool hasStreamInInternalStorage; // @dynamic hasStreamInInternalStorage;
@property(nonatomic) _Bool hasStreamInLocalStorage; // @dynamic hasStreamInLocalStorage;
@property(nonatomic) _Bool hasUnusedOfflineVideoPendingState; // @dynamic hasUnusedOfflineVideoPendingState;
@property(nonatomic) _Bool hasVideoState; // @dynamic hasVideoState;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) _Bool isInPlaylist; // @dynamic isInPlaylist;
@property(nonatomic) long long lastPlaybackTimestampMs; // @dynamic lastPlaybackTimestampMs;
@property(nonatomic) long long offlineStateExpiresInS; // @dynamic offlineStateExpiresInS;
@property(nonatomic) long long offlineStateUpdateTimeMs; // @dynamic offlineStateUpdateTimeMs;
@property(retain, nonatomic) NSMutableArray *offlineSuspendedStatesArray; // @dynamic offlineSuspendedStatesArray;
@property(readonly, nonatomic) unsigned long long offlineSuspendedStatesArray_Count; // @dynamic offlineSuspendedStatesArray_Count;
@property(nonatomic) unsigned int pendingStateFlags; // @dynamic pendingStateFlags;
@property(nonatomic) long long playerResponseSavedTimeMs; // @dynamic playerResponseSavedTimeMs;
@property(nonatomic) int selectedOfflineMode; // @dynamic selectedOfflineMode;
@property(nonatomic) int selectedVideoQuality; // @dynamic selectedVideoQuality;
@property(nonatomic) _Bool streamInInternalStorage; // @dynamic streamInInternalStorage;
@property(nonatomic) _Bool streamInLocalStorage; // @dynamic streamInLocalStorage;
@property(nonatomic) int unusedOfflineVideoPendingState; // @dynamic unusedOfflineVideoPendingState;
@property(nonatomic) int videoState; // @dynamic videoState;

@end

