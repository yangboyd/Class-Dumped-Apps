//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGFeedNetworkSourceDelegate-Protocol.h>

@class IGFeedNetworkSource, IGUserSession, NSString;

@interface IGBoostPostPromoteAvailabilityFetcher : NSObject <IGFeedNetworkSourceDelegate>
{
    IGUserSession *_userSession;
    IGFeedNetworkSource *_networkSource;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

+ (void)fetchWithFetcher:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)fetcherForMediaID:(id)arg1 userSession:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) IGFeedNetworkSource *networkSource; // @synthesize networkSource=_networkSource;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

