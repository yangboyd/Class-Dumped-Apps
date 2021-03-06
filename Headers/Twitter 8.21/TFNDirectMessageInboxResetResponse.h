//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, TFNDirectMessageEntriesResponse, TFNDirectMessageTimelineCursor;

@interface TFNDirectMessageInboxResetResponse : NSObject
{
    TFNDirectMessageEntriesResponse *_entriesResponse;
    NSString *_cursor;
    NSNumber *_lastSeenEventID;
    NSNumber *_trustedLastSeenEventID;
    NSNumber *_untrustedLastSeenEventID;
    TFNDirectMessageTimelineCursor *_trustedConversationsTimelineCursor;
    TFNDirectMessageTimelineCursor *_untrustedConversationsTimelineCursor;
    TFNDirectMessageTimelineCursor *_lowQualityConversationsTimelineCursor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNDirectMessageTimelineCursor *lowQualityConversationsTimelineCursor; // @synthesize lowQualityConversationsTimelineCursor=_lowQualityConversationsTimelineCursor;
@property(readonly, nonatomic) TFNDirectMessageTimelineCursor *untrustedConversationsTimelineCursor; // @synthesize untrustedConversationsTimelineCursor=_untrustedConversationsTimelineCursor;
@property(readonly, nonatomic) TFNDirectMessageTimelineCursor *trustedConversationsTimelineCursor; // @synthesize trustedConversationsTimelineCursor=_trustedConversationsTimelineCursor;
@property(readonly, nonatomic) NSNumber *untrustedLastSeenEventID; // @synthesize untrustedLastSeenEventID=_untrustedLastSeenEventID;
@property(readonly, nonatomic) NSNumber *trustedLastSeenEventID; // @synthesize trustedLastSeenEventID=_trustedLastSeenEventID;
@property(readonly, nonatomic) NSNumber *lastSeenEventID; // @synthesize lastSeenEventID=_lastSeenEventID;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) TFNDirectMessageEntriesResponse *entriesResponse; // @synthesize entriesResponse=_entriesResponse;
- (id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2;
- (id)initWithEntriesResponse:(id)arg1 cursor:(id)arg2 lastSeenEventID:(id)arg3 trustedLastSeenEventID:(id)arg4 untrustedLastSeenEventID:(id)arg5 trustedConversationsTimelineCursor:(id)arg6 untrustedConversationsTimelineCursor:(id)arg7 lowQualityConversationsTimelineCursor:(id)arg8;
- (id)init;

@end

