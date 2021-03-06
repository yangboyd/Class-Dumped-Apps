//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSArray, NSString;

@interface IGAdRequestParams : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSArray *_iGTVAdRequestParams_organicItemIds;
    NSString *_iGTVAdRequestParams_containerModule;
    NSString *_iGTVAdRequestParams_feedSessionId;
    NSString *_storiesAdRequestParam_traySessionId;
    NSString *_storiesAdRequestParam_viewerSessionId;
    NSArray *_storiesAdRequestParam_trayIds;
    NSArray *_exploreAdRequestParam_organicItemIds;
    NSString *_exploreAdRequestParam_chainingSessionId;
}

+ (id)storiesAdRequestParamWithTraySessionId:(id)arg1 viewerSessionId:(id)arg2 trayIds:(id)arg3;
+ (id)iGTVAdRequestParamsWithOrganicItemIds:(id)arg1 containerModule:(id)arg2 feedSessionId:(id)arg3;
+ (id)exploreAdRequestParamWithOrganicItemIds:(id)arg1 chainingSessionId:(id)arg2;
- (void).cxx_destruct;
- (void)matchIGTVAdRequestParams:(CDUnknownBlockType)arg1 storiesAdRequestParam:(CDUnknownBlockType)arg2 exploreAdRequestParam:(CDUnknownBlockType)arg3;

@end

