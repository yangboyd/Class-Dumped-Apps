//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AWEStationDataNetworkManager : NSObject
{
    _Bool _isInteractionEnabled;
    _Bool _isWaitingGoToVideoDetailList;
    NSMutableDictionary *_networkSectionDictionary;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool isWaitingGoToVideoDetailList; // @synthesize isWaitingGoToVideoDetailList=_isWaitingGoToVideoDetailList;
@property(nonatomic) _Bool isInteractionEnabled; // @synthesize isInteractionEnabled=_isInteractionEnabled;
@property(retain, nonatomic) NSMutableDictionary *networkSectionDictionary; // @synthesize networkSectionDictionary=_networkSectionDictionary;
- (void)handleIronManExitNotification:(id)arg1;
- (void)handleIronManEnterNotification:(id)arg1;
- (void)addNotificationsObservers;
- (void)_startRequestWithIronManId:(id)arg1 hashTagName:(id)arg2;
- (void)goToVideoDetailListSuccessBlock:(CDUnknownBlockType)arg1 ironManId:(id)arg2 expectedMinCursor:(long long)arg3;
- (void)fetchStationVideoDetailListDataWithIronManId:(id)arg1 hashTagName:(id)arg2 count:(long long)arg3;
- (id)videoDetailListDataManagerForIronManId:(id)arg1;

@end

