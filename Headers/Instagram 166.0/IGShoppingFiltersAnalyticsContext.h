//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IGShoppingFiltersAnalyticsContext : NSObject
{
    NSString *_sortBy;
    NSDictionary *_filters;
    NSString *_surfaceCategoryId;
    NSString *_searchSessionId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(readonly, nonatomic) NSString *surfaceCategoryId; // @synthesize surfaceCategoryId=_surfaceCategoryId;
@property(readonly, nonatomic) NSDictionary *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) NSString *sortBy; // @synthesize sortBy=_sortBy;
- (id)initWithSortBy:(id)arg1 filters:(id)arg2 surfaceCategoryId:(id)arg3 searchSessionId:(id)arg4;

@end

