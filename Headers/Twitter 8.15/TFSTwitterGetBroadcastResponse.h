//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/NSCoding-Protocol.h>
#import <TFSTwitterCore/TFSModel-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface TFSTwitterGetBroadcastResponse : NSObject <TFSModel, NSCoding>
{
    NSDictionary *_broadcasts;
    NSSet *_unavailableBroadcastIDs;
}

+ (id)getBroadcastResponseWithJSONData:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSSet *unavailableBroadcastIDs; // @synthesize unavailableBroadcastIDs=_unavailableBroadcastIDs;
@property(readonly, copy, nonatomic) NSDictionary *broadcasts; // @synthesize broadcasts=_broadcasts;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)_tfs_availabilityForBroadcastID:(id)arg1;
- (void)queryForBroadcastID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithBroadcastsJSONDictionary:(id)arg1;
- (id)initWithBroadcasts:(id)arg1 unavailableBroadcastIDs:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

