//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MediaEventFactory : NSObject
{
}

+ (void)addMedia:(id)arg1 toEvent:(id)arg2;
+ (void)addSubreddit:(id)arg1 toEvent:(id)arg2;
+ (void)addPost:(id)arg1 toEvent:(id)arg2;
+ (id)eventForSource:(id)arg1 action:(id)arg2 noun:(id)arg3;
+ (id)pinnedVideoPlayerEventWithHlsPlayer:(id)arg1 action:(id)arg2 noun:(id)arg3;
+ (id)videoPlayerEventWithHlsPlayer:(id)arg1 action:(id)arg2 noun:(id)arg3;

@end

