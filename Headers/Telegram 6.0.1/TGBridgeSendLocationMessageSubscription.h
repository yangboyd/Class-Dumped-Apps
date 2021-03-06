//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGBridgeSubscription.h>

@class TGBridgeLocationMediaAttachment;

@interface TGBridgeSendLocationMessageSubscription : TGBridgeSubscription
{
    int _replyToMid;
    long long _peerId;
    TGBridgeLocationMediaAttachment *_location;
}

+ (id)subscriptionName;
@property(readonly, nonatomic) int replyToMid; // @synthesize replyToMid=_replyToMid;
@property(readonly, nonatomic) TGBridgeLocationMediaAttachment *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long peerId; // @synthesize peerId=_peerId;
- (void).cxx_destruct;
- (void)_unserializeParametersWithCoder:(id)arg1;
- (void)_serializeParametersWithCoder:(id)arg1;
- (_Bool)renewable;
- (id)initWithPeerId:(long long)arg1 location:(id)arg2 replyToMid:(int)arg3;

@end

