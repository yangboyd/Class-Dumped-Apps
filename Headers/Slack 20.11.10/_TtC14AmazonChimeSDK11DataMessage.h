//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _TtC14AmazonChimeSDK11DataMessage : NSObject
{
    // Error parsing type: , name: timestampMs
    // Error parsing type: , name: topic
    // Error parsing type: , name: data
    // Error parsing type: , name: senderAttendeeId
    // Error parsing type: , name: senderExternalUserId
    // Error parsing type: , name: throttled
}

- (void).cxx_destruct;
- (id)init;
- (id)fromJSON;
- (id)text;
- (id)initWithMessage:(id)arg1;
- (id)initWithTopic:(id)arg1 data:(id)arg2 senderAttendeeId:(id)arg3 senderExternalUserId:(id)arg4 timestampMs:(long long)arg5 throttled:(_Bool)arg6;
@property(nonatomic, readonly) _Bool throttled; // @synthesize throttled;
@property(nonatomic, readonly) NSString *senderExternalUserId;
@property(nonatomic, readonly) NSString *senderAttendeeId;
@property(nonatomic, readonly) NSData *data;
@property(nonatomic, readonly) NSString *topic;
@property(nonatomic, readonly) long long timestampMs; // @synthesize timestampMs;

@end

