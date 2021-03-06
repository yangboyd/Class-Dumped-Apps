//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface DBASSISTANTEntryDebugSignals : NSObject <DBSerializable, NSCopying>
{
    NSString *_entryId;
    NSString *_resourceId;
    NSNumber *_timestampMs;
    NSString *_actionType;
    NSNumber *_actorId;
    NSNumber *_score;
    NSNumber *_rank;
    NSString *_timestampString;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *timestampString; // @synthesize timestampString=_timestampString;
@property(readonly, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
@property(readonly, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(readonly, nonatomic) NSNumber *actorId; // @synthesize actorId=_actorId;
@property(readonly, copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) NSNumber *timestampMs; // @synthesize timestampMs=_timestampMs;
@property(readonly, copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(readonly, copy, nonatomic) NSString *entryId; // @synthesize entryId=_entryId;
- (void).cxx_destruct;
- (_Bool)isEqualToEntryDebugSignals:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithEntryId:(id)arg1 resourceId:(id)arg2 timestampMs:(id)arg3 actionType:(id)arg4 actorId:(id)arg5 score:(id)arg6 rank:(id)arg7 timestampString:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

