//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _TtC11PusherSwift10PusherAuth, _TtC11PusherSwift16PusherConnection;

@interface _TtC11PusherSwift13PusherChannel : NSObject
{
    // Error parsing type: , name: eventHandlers
    // Error parsing type: , name: subscribed
    // Error parsing type: , name: name
    // Error parsing type: , name: connection
    // Error parsing type: , name: unsentEvents
    // Error parsing type: , name: type
    // Error parsing type: , name: auth
}

- (void).cxx_destruct;
- (id)init;
- (void)triggerWithEventName:(id)arg1 data:(id)arg2;
- (void)handleEventWithEvent:(id)arg1;
- (void)unbindAllForEventName:(id)arg1;
- (void)unbindAll;
- (void)unbindWithEventName:(id)arg1 callbackId:(id)arg2;
- (id)bindWithEventName:(id)arg1 eventCallback:(CDUnknownBlockType)arg2;
- (id)bindWithEventName:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 connection:(id)arg2 auth:(id)arg3;
@property(nonatomic, readonly) _Bool shouldParseJSONForLegacyCallbacks;
@property(nonatomic, retain) _TtC11PusherSwift10PusherAuth *auth; // @synthesize auth;
@property(nonatomic) __weak _TtC11PusherSwift16PusherConnection *connection; // @synthesize connection;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed;

@end

