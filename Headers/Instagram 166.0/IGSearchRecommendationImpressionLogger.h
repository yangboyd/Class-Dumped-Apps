//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSearchSession, IGUserSession, NSMutableArray, NSMutableSet;

@interface IGSearchRecommendationImpressionLogger : NSObject
{
    IGSearchSession *_searchSession;
    IGUserSession *_userSession;
    NSMutableArray *_recommendationIds;
    NSMutableArray *_recommendationNames;
    NSMutableArray *_recommendationTypes;
    NSMutableSet *_loggedModels;
}

- (void).cxx_destruct;
- (void)logSearchRecommendationWithPlaceholderModel:(id)arg1 analyticsModule:(id)arg2;
- (id)initWithSearchSession:(id)arg1 userSession:(id)arg2;

@end

