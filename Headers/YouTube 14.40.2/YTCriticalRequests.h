//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YTCriticalRequests : NSObject
{
}

+ (void)makeHomeBrowseRequestWithGimme:(id)arg1;
+ (void)makeWatchNextRequestWithNavEndpoint:(id)arg1 gimme:(id)arg2;
+ (void)makeResolveUrlRequestWithUrl:(id)arg1 referringApp:(id)arg2 gimme:(id)arg3;
+ (void)maybeRunCriticalRequestPrefetchingDidStartBlock;
+ (void)setCriticalRequestPrefetchingDidStartBlock:(CDUnknownBlockType)arg1;
+ (id)criticalWatchNextRequestWithNavEndpoint:(id)arg1 autonavSettingsState:(int)arg2 forceAdParameters:(id)arg3 sharingServiceIds:(id)arg4 isAdultContentConfirmed:(_Bool)arg5 watchBreakSetting:(id)arg6 lactMilliseconds:(double)arg7;
+ (id)criticalResolveUrlRequestWithUrl:(id)arg1 referringApp:(id)arg2;
+ (id)criticalBrowseRequest;
+ (void)makeCriticalRequestsWithApplicationState:(long long)arg1 options:(id)arg2 gimme:(id)arg3;

@end

