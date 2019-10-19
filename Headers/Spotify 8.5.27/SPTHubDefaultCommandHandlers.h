//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHubCommandHandlerFactory-Protocol.h"

@class NSString;
@protocol SPTContextMenuOptionsFactory, SPTContextMenuPresenterFactory, SPTHubsEventFactory, SPTLinkDispatcher, SPTPlayerFeature;

@interface SPTHubDefaultCommandHandlers : NSObject <SPTHubCommandHandlerFactory>
{
    NSString *_featureIdentifier;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPlayerFeature> _playerService;
    NSString *_contextMenuLogContextIphone;
    NSString *_contextMenuLogContextIpad;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTHubsEventFactory> _eventFactory;
}

@property(retain, nonatomic) id <SPTHubsEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, copy, nonatomic) NSString *contextMenuLogContextIpad; // @synthesize contextMenuLogContextIpad=_contextMenuLogContextIpad;
@property(readonly, copy, nonatomic) NSString *contextMenuLogContextIphone; // @synthesize contextMenuLogContextIphone=_contextMenuLogContextIphone;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (void).cxx_destruct;
- (id)createDefaultCommandHandlersWithViewURI:(id)arg1 referrerIdentifier:(id)arg2 interactionLogger:(id)arg3;
- (id)initWithFeatureIdentifier:(id)arg1 linkDispatcher:(id)arg2 playerService:(id)arg3 contextMenuLogContextIphone:(id)arg4 contextMenuLogContextIpad:(id)arg5 contextMenuOptionsFactory:(id)arg6 presenterFactory:(id)arg7 eventFactory:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

