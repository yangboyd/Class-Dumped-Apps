//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWHLSProvider.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TWLiveHLSProvider : TWHLSProvider
{
    NSString *_channelName;
}

- (void).cxx_destruct;
- (id)manifestURLWithToken:(id)arg1 tokenDictionary:(id)arg2 signature:(id)arg3;
- (id)tokenURL;
- (id)initWithLiveChannelName:(id)arg1 playerType:(long long)arg2 analyticsController:(id)arg3 httpManager:(id)arg4;

@end

