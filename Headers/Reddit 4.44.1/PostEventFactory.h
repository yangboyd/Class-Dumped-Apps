//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAnalyticsEventFactory.h"

@interface PostEventFactory : BaseAnalyticsEventFactory
{
}

+ (void)debugLogConsumedPost:(id)arg1;
+ (id)postComposerClickEventWithNoun:(id)arg1;
+ (id)postComposerClickEventWithNoun:(id)arg1 pageType:(id)arg2 subreddit:(id)arg3 postingDifficultyRating:(long long)arg4;
+ (id)postComposerClickEventWithNoun:(id)arg1 pageType:(id)arg2 subreddit:(id)arg3;
+ (id)postCommentBarClickEventWithPost:(id)arg1 pageType:(id)arg2 noun:(id)arg3;
+ (id)postComposerClickEventWithNoun:(id)arg1 composerType:(id)arg2 commentType:(id)arg3 pageType:(id)arg4 subreddit:(id)arg5;
+ (id)adPostViewedEventForPost:(id)arg1 withVisibilityContext:(id)arg2 atPosition:(long long)arg3 withFeedDisplayMode:(unsigned long long)arg4 forPageType:(id)arg5 infoReason:(id)arg6;
+ (id)postViewedEventForPost:(id)arg1 withVisibilityContext:(id)arg2 atPosition:(long long)arg3 withFeedDisplayMode:(unsigned long long)arg4 forPageType:(id)arg5 infoReason:(id)arg6;
+ (id)postConsumedEventForPost:(id)arg1 withVisibilityContext:(id)arg2 atPosition:(long long)arg3 withFeedDisplayMode:(unsigned long long)arg4 forPageType:(id)arg5 infoReason:(id)arg6;
+ (id)postEventWithAction:(id)arg1 withNoun:(id)arg2 forPost:(id)arg3 withVisibilityContext:(id)arg4 atPosition:(long long)arg5 withFeedDisplayMode:(unsigned long long)arg6 forPageType:(id)arg7 infoReason:(id)arg8;

@end

