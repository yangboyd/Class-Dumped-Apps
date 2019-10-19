//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol SCGalleryProfile <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *syncToken;
@property(readonly, nonatomic) int snapTotalQuota;
@property(readonly, nonatomic) long long lastUpdateSeqNum;
@property(readonly, copy, nonatomic) NSDate *lastFullSyncTime;
@property(readonly, copy, nonatomic) NSDate *lastFeaturedStorySyncTime;
@property(readonly, copy, nonatomic) NSDate *lastBackupNotificationTime;
@property(readonly, copy, nonatomic) NSString *objectID;
@end

