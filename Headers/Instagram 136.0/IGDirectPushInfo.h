//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGDirectPushInfo : NSObject
{
    long long _destination;
    NSString *_destinationId;
    NSString *_messageId;
}

@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSString *destinationId; // @synthesize destinationId=_destinationId;
@property(readonly, nonatomic) long long destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (id)initWithDestination:(long long)arg1 destinationId:(id)arg2 itemId:(id)arg3;

@end

