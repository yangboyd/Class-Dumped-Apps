//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICEInteraction.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDictionary;

@interface ICEPropagateEventInteraction : ICEInteraction <NSCopying, NSMutableCopying>
{
    long long _eventToSend;
    NSDictionary *_interactionInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *interactionInfo; // @synthesize interactionInfo=_interactionInfo;
@property(nonatomic) long long eventToSend; // @synthesize eventToSend=_eventToSend;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithUID:(id)arg1 eventType:(long long)arg2;
- (id)initWithUID:(id)arg1 eventType:(long long)arg2 eventToSend:(long long)arg3 interactionInfo:(id)arg4;

@end

