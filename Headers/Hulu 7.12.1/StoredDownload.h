//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString, NSURL;

@interface StoredDownload : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)willSave;
- (void)awakeFromInsert;

// Remaining properties
@property(nonatomic, copy) NSData *artworkData; // @dynamic artworkData;
@property(nonatomic, copy) NSURL *artworkSourceURL; // @dynamic artworkSourceURL;
@property(nonatomic, copy) NSDate *completedDate; // @dynamic completedDate;
@property(nonatomic, copy) NSString *contentIdentifier; // @dynamic contentIdentifier;
@property(nonatomic, copy) NSString *downloadSessionId; // @dynamic downloadSessionId;
@property(nonatomic, copy) NSString *eabId; // @dynamic eabId;
@property(nonatomic, copy) NSData *entityData; // @dynamic entityData;
@property(nonatomic) double entityDuration; // @dynamic entityDuration;
@property(nonatomic, copy) NSString *entityEpisode; // @dynamic entityEpisode;
@property(nonatomic, copy) NSString *entitySeason; // @dynamic entitySeason;
@property(nonatomic, copy) NSString *entitySubtitle; // @dynamic entitySubtitle;
@property(nonatomic, copy) NSString *entityTitle; // @dynamic entityTitle;
@property(nonatomic, copy) NSData *errorInfo; // @dynamic errorInfo;
@property(nonatomic, copy) NSDate *initialPlayDate; // @dynamic initialPlayDate;
@property(nonatomic, copy) NSDate *lastProgressUpdateDate; // @dynamic lastProgressUpdateDate;
@property(nonatomic, copy) NSString *lastProgressUpdateToken; // @dynamic lastProgressUpdateToken;
@property(nonatomic, copy) NSDate *licenseExpirationDate; // @dynamic licenseExpirationDate;
@property(nonatomic, copy) NSURL *licenseKeyFileURL; // @dynamic licenseKeyFileURL;
@property(nonatomic, copy) NSURL *licenseServerURL; // @dynamic licenseServerURL;
@property(nonatomic, copy) NSDate *metadataLastUpdatedDate; // @dynamic metadataLastUpdatedDate;
@property(nonatomic, copy) NSData *networkLogoData; // @dynamic networkLogoData;
@property(nonatomic, copy) NSURL *networkLogoSourceURL; // @dynamic networkLogoSourceURL;
@property(nonatomic, copy) NSURL *partialPlaybackFileURL; // @dynamic partialPlaybackFileURL;
@property(nonatomic, copy) NSURL *playbackFileURL; // @dynamic playbackFileURL;
@property(nonatomic, copy) NSData *playbackFileURLData; // @dynamic playbackFileURLData;
@property(nonatomic) double playbackProgress; // @dynamic playbackProgress;
@property(nonatomic, copy) NSString *profileId; // @dynamic profileId;
@property(nonatomic, copy) NSData *ratingBugBigData; // @dynamic ratingBugBigData;
@property(nonatomic, copy) NSData *ratingBugSmallData; // @dynamic ratingBugSmallData;
@property(nonatomic, copy) NSDate *recordCreationDate; // @dynamic recordCreationDate;
@property(nonatomic, copy) NSDate *recordLastUpdatedDate; // @dynamic recordLastUpdatedDate;
@property(nonatomic, copy) NSString *state; // @dynamic state;
@property(nonatomic, copy) NSData *streamConfigData; // @dynamic streamConfigData;

@end

