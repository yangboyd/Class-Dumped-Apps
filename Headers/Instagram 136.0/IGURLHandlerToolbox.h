//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCTAPresenterContext, IGFeedItem, IGSponsoredSupportConfiguration, IGUserSession, NSString, UINavigationController;
@protocol IGFeedItemLoggingProviderDelegate;

@interface IGURLHandlerToolbox : NSObject
{
    IGUserSession *_userSession;
    NSString *_sourceAnalyticsModule;
    IGFeedItem *_sourceFeedItem;
    IGCTAPresenterContext *_ctaPresenterContext;
    id <IGFeedItemLoggingProviderDelegate> _loggingProvider;
    UINavigationController *_presentingNavigationController;
    NSString *_sourceApplication;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
}

@property(readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration; // @synthesize sponsoredSupportConfiguration=_sponsoredSupportConfiguration;
@property(readonly, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(readonly, nonatomic) UINavigationController *presentingNavigationController; // @synthesize presentingNavigationController=_presentingNavigationController;
@property(readonly, nonatomic) id <IGFeedItemLoggingProviderDelegate> loggingProvider; // @synthesize loggingProvider=_loggingProvider;
@property(readonly, nonatomic) IGCTAPresenterContext *ctaPresenterContext; // @synthesize ctaPresenterContext=_ctaPresenterContext;
@property(readonly, nonatomic) IGFeedItem *sourceFeedItem; // @synthesize sourceFeedItem=_sourceFeedItem;
@property(readonly, nonatomic) NSString *sourceAnalyticsModule; // @synthesize sourceAnalyticsModule=_sourceAnalyticsModule;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 sourceAnalyticsModule:(id)arg2 sourceFeedItem:(id)arg3 ctaPresenterContext:(id)arg4 loggingProvider:(id)arg5 presentingNavigationController:(id)arg6 sourceApplication:(id)arg7 sponsoredSupportConfiguration:(id)arg8;

@end

