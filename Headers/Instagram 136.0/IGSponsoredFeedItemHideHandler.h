//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGHiddenReasonListCellDelegate-Protocol.h>

@class IGFeedItem, IGHiddenItemContext, IGSponsoredSupportConfiguration, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGFeedItemLoggingProviderDelegate, IGMediaHiddenListenerAnnouncer;

@interface IGSponsoredFeedItemHideHandler : NSObject <IGHiddenReasonListCellDelegate>
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGMediaHiddenListenerAnnouncer> _mediaHiddenAnnouncer;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGFeedItem *_feedItem;
    IGHiddenItemContext *_context;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
}

@property(readonly, nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(readonly, nonatomic) IGHiddenItemContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (void)_handleSelectedHiddenReason:(id)arg1 sourceModule:(id)arg2;
- (void)hiddenReasonListCellDidSelectReasonAtIndex:(unsigned long long)arg1;
- (id)initWithFeedItem:(id)arg1 context:(id)arg2 loggingDelegate:(id)arg3 analyticsLogger:(id)arg4 mediaHiddenAnnouncer:(id)arg5 sponsoredSupportConfiguration:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

