//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

@class GIMMe, YTApiaryResourceParser;

@interface YTOfflineVideoRefreshService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_resourceParser;
}

+ (id)refreshRequestForEntityKey:(id)arg1 offlineVideo:(id)arg2;
- (void).cxx_destruct;
- (void)makeRequest:(id)arg1 callbackQueue:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end

