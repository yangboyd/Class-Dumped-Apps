//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareDeepLinkApplicationEventHandler-Protocol.h"

@class NSString;
@protocol SPTShareDeepLinkApplicationEventHandlerDelegate, SPTShareEventSenderLogger;

@interface SPTShareDeepLinkApplicationEventHandlerImplementation : NSObject <SPTShareDeepLinkApplicationEventHandler>
{
    _Bool _shouldLogAllURIs;
    id <SPTShareDeepLinkApplicationEventHandlerDelegate> _delegate;
    id <SPTShareEventSenderLogger> _eventSenderLogger;
    NSString *_sessionIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) id <SPTShareEventSenderLogger> eventSenderLogger; // @synthesize eventSenderLogger=_eventSenderLogger;
@property(nonatomic) __weak id <SPTShareDeepLinkApplicationEventHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldLogAllURIs; // @synthesize shouldLogAllURIs=_shouldLogAllURIs;
- (id)generateSessionIdentifier;
- (void)logBrowseLink:(id)arg1 spotifyURI:(id)arg2 source:(id)arg3 shortLinkString:(id)arg4 shortLinkVendor:(id)arg5;
- (void)handleAppWasOpenedWithShortLinkWithFullURI:(id)arg1 sourceApplication:(id)arg2 shortLinkString:(id)arg3 shortLinkVendor:(id)arg4;
- (void)handleAppWasOpenedWithDeepLinkEventWithURI:(id)arg1 sourceApplication:(id)arg2;
@property(readonly, nonatomic) NSString *lastSessionIdentifier;
- (id)initWithShareEventSenderLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

