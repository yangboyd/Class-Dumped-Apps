//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectUIMessageMetadata, NSString;

@interface IGDirectLiveVideoDiffIdentifier : NSObject
{
    NSString *_broadcastId;
    IGDirectUIMessageMetadata *_metadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectUIMessageMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *broadcastId; // @synthesize broadcastId=_broadcastId;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBroacastId:(id)arg1 metadata:(id)arg2;

@end

