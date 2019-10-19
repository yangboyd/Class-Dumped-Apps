//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, RedditService, Subreddit;
@protocol FlairManagementPresentable;

@interface FlairManagementPresenter : NSObject
{
    _Bool _isFetching;
    RedditService *_service;
    Subreddit *_subreddit;
    unsigned long long _modPermissions;
    long long _flairType;
    NSArray *_flairs;
    NSArray *_filteredFlairs;
    id <FlairManagementPresentable> _presentable;
}

@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(nonatomic) __weak id <FlairManagementPresentable> presentable; // @synthesize presentable=_presentable;
@property(copy, nonatomic) NSArray *filteredFlairs; // @synthesize filteredFlairs=_filteredFlairs;
@property(copy, nonatomic) NSArray *flairs; // @synthesize flairs=_flairs;
@property(readonly, nonatomic) long long flairType; // @synthesize flairType=_flairType;
@property(readonly, nonatomic) unsigned long long modPermissions; // @synthesize modPermissions=_modPermissions;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *analyticsPageType;
@property(readonly, nonatomic) NSString *pageTitle;
- (void)fetchData;
- (void)filterFlairsWithSearchText:(id)arg1;
- (void)resetFilteredFlairs;
- (id)initWithService:(id)arg1 subreddit:(id)arg2 modPermissions:(unsigned long long)arg3 flairType:(long long)arg4;

@end

