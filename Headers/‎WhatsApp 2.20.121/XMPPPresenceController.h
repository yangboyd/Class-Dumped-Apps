//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XMPPPresenceControllerMainAppState;
@protocol OS_dispatch_queue, XMPPPresenceControllerDelegate;

@interface XMPPPresenceController : NSObject
{
    id <XMPPPresenceControllerDelegate> _delegate;
    unsigned long long _lastSentPresence;
    NSObject<OS_dispatch_queue> *_queue;
    XMPPPresenceControllerMainAppState *_mainAppState;
}

- (void).cxx_destruct;
@property(retain) XMPPPresenceControllerMainAppState *mainAppState; // @synthesize mainAppState=_mainAppState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property unsigned long long lastSentPresence; // @synthesize lastSentPresence=_lastSentPresence;
@property __weak id <XMPPPresenceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendPresenceWithNickname:(id)arg1;
- (void)connectionDidClose;
- (id)initWithQueue:(id)arg1;

@end

