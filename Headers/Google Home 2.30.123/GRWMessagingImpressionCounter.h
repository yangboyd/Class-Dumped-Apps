//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRWFileManager, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GRWMessagingImpressionCounter : NSObject
{
    NSMutableDictionary *_impressions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    GRWFileManager *_fileManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GRWFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableDictionary *impressions; // @synthesize impressions=_impressions;
- (void)restoreImpressionsFromUserDefaults;
- (void)saveImpressionsToUserDefaults;
- (id)impressionsForMessageWithID:(id)arg1 inUserCountSet:(id)arg2;
- (id)summaryFileURL;
- (void)removeImpressions:(id)arg1 forUserID:(id)arg2;
- (id)impressionsForUserID:(id)arg1;
- (_Bool)didShowMessageWithID:(id)arg1 toUserID:(id)arg2;
- (void)setMessageWithID:(id)arg1 versionedIdentifier:(id)arg2 wasShownToUserID:(id)arg3 withAction:(long long)arg4;
- (id)init;

@end

