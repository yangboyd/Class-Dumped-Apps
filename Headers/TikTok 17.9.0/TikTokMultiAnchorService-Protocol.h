//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWEAwemeModel, AWEI18nAnchorModel;
@protocol TikTokFeedAnchorConfigProtocol;

@protocol TikTokMultiAnchorService <HTSService>
- (id <TikTokFeedAnchorConfigProtocol>)TikTokFeedAnchorConfigWithAwemeModel:(AWEAwemeModel *)arg1 anchor:(AWEI18nAnchorModel *)arg2;
- (void)registerTikTokFeedAnchorConfig:(Class)arg1;
@end

