//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "YTRetryableTask-Protocol.h"

@class NSDate, NSSet, NSString, NSURL, YTRetryStateEntity;

@interface YTOfflineImageEntity : NSManagedObject <YTRetryableTask>
{
}


// Remaining properties
@property(retain, nonatomic) NSSet *channeledVideos; // @dynamic channeledVideos;
@property(copy, nonatomic) NSDate *dateAdded; // @dynamic dateAdded;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *filename; // @dynamic filename;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool pinned; // @dynamic pinned;
@property(retain, nonatomic) NSSet *playlists; // @dynamic playlists;
@property(copy, nonatomic) NSURL *remoteURL; // @dynamic remoteURL;
@property(retain, nonatomic) YTRetryStateEntity *retryState; // @dynamic retryState;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSSet *videoLists; // @dynamic videoLists;
@property(retain, nonatomic) NSSet *videos; // @dynamic videos;
@end

