//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSCBaseEntity.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class GSCPProfileDataAboutParams, GSCParamsMetadata;

@interface GSCProfileDataAboutParams : GSCBaseEntity <NSCoding, NSCopying, NSMutableCopying>
{
    GSCParamsMetadata *_metadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GSCParamsMetadata *metadata; // @synthesize metadata=_metadata;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copy;
- (id)initWithProto:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) GSCPProfileDataAboutParams *proto; // @dynamic proto;

@end

